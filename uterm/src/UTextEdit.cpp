#include "UTextEdit.h"


UTextEdit::UTextEdit(QWidget* parent) : QPlainTextEdit(parent)
{
    rProcess = new UProcess();
    
    QFile file("./src/qss/Classic.css");
    file.open(QFile::ReadOnly);
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
    this->ensurePolished();
    
    userAtCompStrPtr = new QString("james@robot-lab6");
    wdPathStrPtr = new QString("~");

    this->appendHtml("<b><font color=greenyellow>"+ *userAtCompStrPtr + "</font></b>" 
            + "<font color=gray>:</font>"
            + "<b><font color=cornflowerblue>"+ *wdPathStrPtr + "</font></b>"
            + "<font color=gray>$</font>");
    
    this->textCursor().insertHtml("<font color=gray>&nbsp;</font>");

    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/UTerm/res/terminal01.png") );
    //this->setWindowTitle("UTerm");
    this->resize(650, 425);
}


void UTextEdit::keyPressEvent(QKeyEvent* e)
{
    QPlainTextEdit::keyPressEvent(e);
    QTextCursor tcg = textCursor();
    //cout << "HERE: " << tcg.block().text().toStdString() << endl;
    
    cout << userAtCompStrPtr->toStdString() + ":" + wdPathStrPtr->toStdString() + "$" << endl;
    
    if(e->key() == Qt::Key_Backspace)
    {
        cout << "[BACK_SPACE] pressed" << endl;
        cout << "cursor pos: " << tcg.positionInBlock() << endl;
        //cout << userAtCompStrPtr->toStdString() + ":" + wdPathStrPtr->toStdString() + "$" << endl;
        if(tcg.positionInBlock() < QString(*userAtCompStrPtr + ":" + *wdPathStrPtr + "$ ").size() )
        {
            tcg.insertHtml("<font color=gray>&nbsp;</font>");
        }

    }
    else if(e->key() == Qt::Key_Return)
    {
        Environment::absPathToRosWs = *wdPathStrPtr;
        //cout << "[ENTER] pressed" << endl;
        tcg.movePosition(QTextCursor::Up);

        QString userCmd = tcg.block().text();
        userCmd.remove(0, userAtCompStrPtr->size()+wdPathStrPtr->size()+3);
        cout << "entire command should be: |" << userCmd.toStdString() << "|" << endl;
        QString cdCheck = userCmd;
        cdCheck.remove(2, cdCheck.size()-1);
        QString cdEtc = userCmd;
        cdEtc = cdEtc.remove(0, 3);
        //cout << "check: " << cdCheck.toStdString() << endl;
        //cout << "Cmd: \"" << userCmd.toStdString() << "\"" << endl;
        if(userCmd == "")
        {
            ;
        }
        else if(userCmd == "source devel/setup.bash")
        {
            Environment::sourceEnv = true;
            //cout << "setting Source to true" << endl;
        }
        else if(userCmd == "clear")
        {
            this->clear();
        }
        else if(userCmd == "exit")
        {
            this->close();
        }
        else
        {
            rProcess->start(*osCmdSwapPtr->swap(new QString(userCmd))/*userCmd*/);
            rProcess->waitForFinished();
            QString* tmp = rProcess->getOutputStrPtr();
            tmp = parseOutput(tmp);
            
            this->appendHtml(*tmp);
        }

        cout << userAtCompStrPtr->toStdString() + ":" + wdPathStrPtr->toStdString() + "$" << endl;

        tcg.movePosition(QTextCursor::EndOfBlock);
        tcg.movePosition(QTextCursor::End);
        tcg.insertBlock();
       
        tcg.insertHtml("<b><font color=greenyellow>"+ *userAtCompStrPtr + "</font></b>" 
            + "<font color=gray>:</font>"
            + "<b><font color=cornflowerblue>"+ *wdPathStrPtr + "</font></b>"
            + "<font color=gray>$&nbsp;</font>");
    }
    else if(e->key() == Qt::Key_Left)
    {
        cout << "[LEFT]" << endl;
        
        QString tmp = tcg.block().text();
        tmp.remove(tmp.size()-1, tmp.size());
        cout << "block: " << tmp.toStdString() << endl;
        if(tcg.positionInBlock() < QString(*userAtCompStrPtr + ":" + *wdPathStrPtr + "$ ").size() )
        {
            tcg.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor);
            this->setTextCursor(tcg);
            
            cout << "if" << endl;
        }
        else
        {
            cout << "else" << endl;
        }
    }
    else
    {
        ;
    }

}


QString* UTextEdit::parseOutput(QString* outputStrPtr)
{
    QVector<QString*> outputStrPtrVec;
    bool foundSeq = false;
    
    QString* line;

    while(outputStrPtr->contains("\n"))
    {
        int index = outputStrPtr->indexOf("\n");
        //cout << "index: " << index << endl;
        line = new QString(outputStrPtr->left(index) );
        //cout << "Extracted: " << line->toStdString() << endl;
        outputStrPtr->remove(0, index+1);
        
        
        if(*line == "*^*" && !foundSeq)
        {
            //next line will be abs path
            foundSeq = true;
        }
        else if(*line != "*^*" && foundSeq)
        {
            //line is abs path
            //cout << "PATH: " << line->toStdString() << endl;
            fiddleWithWdPathStrPtr(line);
        }
        else if(*line == "*^*" && foundSeq)
        {
            //line after abs path
            foundSeq = false;
        }
        else
        {
            line->append("\n");
            outputStrPtrVec.push_back(line);
        }
    }

    return dirFileExe(outputStrPtrVec);
    
    /*

    QString* retnStrPtr = new QString();
    
    for(size_t i = 0; i < outputStrPtrVec.size(); i++)
    {
        
        retnStrPtr->append(outputStrPtrVec.at(i) );
    }
    
    retnStrPtr->append("\n");

    return retnStrPtr;
    */
}


void UTextEdit::fiddleWithWdPathStrPtr(QString* absPathStrPtr)
{
    if(*absPathStrPtr == "/home/james")
    {
        *wdPathStrPtr = "~";
    }
    else if(absPathStrPtr->contains("/home/james", Qt::CaseSensitive) )
    {
        int beginIndex = absPathStrPtr->indexOf("/home/james", 0, Qt::CaseSensitive);
        cout << "PATH: " << absPathStrPtr->toStdString() << endl;
        wdPathStrPtr = new QString(absPathStrPtr->remove(0, 11) );
        wdPathStrPtr->push_front("~");
        cout << "PATH: " << wdPathStrPtr->toStdString() << endl;
    }
    else
    {
        cout << "ERROR at UTextEdit::fiddleWithWdPathStrPtr(...)" << endl;
        setWdPathStrPtr(absPathStrPtr);
    }
    

}


QString* UTextEdit::dirFileExe(QVector<QString*> dat)
{
    /*QDir* dir;
    QFileInfoList children;
    QStringList dirStrLst;
    QStringList filStrLst;
    QStringList exeStrLst;
    QStringList comStrLst;*/
    QString prettyPrintStr;
    if(dat.size() > 0)
        cout << "item: " << dat.at(0)->toStdString() << endl;
    for(size_t i = 0; i < dat.size(); i++)
    {
        QFileInfo item(QString((Environment::absPathToRosWs).append("/")).remove(0, 1).prepend("/home/james/").append(dat.at(i)->trimmed()));
        //cout << "Item: |" << item.filePath().toStdString() << "|" << endl;
        //cout << "Item: " << item.fileName().toStdString() << endl;
        
        if(item.permission(QFile::ExeOther) && !item.isDir() )
        {
            prettyPrintStr.append("<b><font color=greenyellow>" + item.fileName() + "</font></b><br/>");
        }
        else if(item.isDir() )
        {
            prettyPrintStr.append("<b><font color=cornflowerblue>" + item.fileName() + "</font></b><br/>");
        }
        else if(item.suffix() == "gz"
            || item.suffix() == "tar"
            || item.suffix() == "zip"
            || item.suffix() == "rar")
        {
            prettyPrintStr.append("<b><font color=red>" + item.fileName() + "</font></b><br/>");
        }
        else if(item.isFile() )
        {
            prettyPrintStr.append("<font color=gray>" + item.fileName() + "</font><br/>");
        }
        else 
        {
            prettyPrintStr.append("<font color=gray>" + item.fileName() + "</font><br/>");
        }
            
    }
    prettyPrintStr.append("<br/>");
    
    return new QString(prettyPrintStr);
}


void UTextEdit::setUserAtCompStrPtr(QString* userAtCompStrPtr)
{
    this->userAtCompStrPtr = userAtCompStrPtr;
}


QString* UTextEdit::getUserAtCompStrPtr()
{
    return userAtCompStrPtr;
}


void UTextEdit::setWdPathStrPtr(QString* wdPathStrPtr)
{
    this->wdPathStrPtr = wdPathStrPtr;
}


QString* UTextEdit::getWdPathStrPtr()
{
    return wdPathStrPtr;
}


void UTextEdit::setOsCmdSwapPtr(OsCmdSwap* osCmdSwapPtr)
{
    this->osCmdSwapPtr = osCmdSwapPtr;
}


OsCmdSwap* UTextEdit::getOsCmdSwapPtr()
{
    return osCmdSwapPtr;
}


UTextEdit::~UTextEdit()
{
    ;
}