#include "MsgParser.h"


MsgParser::MsgParser()
{
    currentMsgFileDat = new MsgFileDat();
}


MsgDirDat* MsgParser::parseDir(QString* msgDirAbsPathStrPtr)
{
    cout << "at MsgParser::parseDir(...): passed: " << msgDirAbsPathStrPtr->toStdString() << endl;
    QString tmp;
    tmp = *msgDirAbsPathStrPtr;
    cout << "tmp: " << tmp.toStdString() << endl;
    tmp.append("/msg");
    QDir* dir = new QDir(tmp);
    
    cout << "cd'ed to: " << dir->absolutePath().toStdString() << endl;
    QFileInfoList files = dir->entryInfoList();
    foreach(QFileInfo file, files)
    {
        QString stdStr = file.filePath();
        cout << "about to parse: " << stdStr.toStdString() << endl;
        parseFile(&stdStr);
    }
    
    return new MsgDirDat(); // ***METHOD STUB***
}


MsgFileDat* MsgParser::parseFile(QString* msgFileAbsPathStrPtr)
{
    currentMsgFileDat = new MsgFileDat();
    currentMsgFileDat->setMsgFileNameStrPtr(msgFileAbsPathStrPtr);
    bool isHeader = true;
    
    QFile file(*msgFileAbsPathStrPtr);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text) )
        cerr << "failed to open file" << endl;
    
    while(!file.atEnd() )
    {
        QByteArray lineBa = file.readLine();
        QString lineStr = lineBa.data();
        MsgFieldDat msgFieldDat;
        
        if(lineStr.size() < 2 )//empy line will be percieved as a \n, i.e. 1 char
        {
            cout << "empty line" << endl;
        }
        else if((lineStr.at(0) == '#' || lineStr.at(0) == ' ') && isHeader == true)
        {
            cout << "setting header: " << lineStr.toStdString() << endl;
            cout << "header size: " << lineStr.size() << endl;
            //currentMsgFileDat->setMsgFileHeaderStrPtr(new QString(*currentMsgFileDat->getMsgFileHeaderStrPtr() + lineStr) );
        }
        else if(lineStr.at(0) == '#' || lineStr.at(0) == ' ')
        {
            cout << "setting comment" << endl;
            cout << "size: " << lineStr.size() << endl;
            //msgFieldDat.setFieldCommentsStrPtr(new QString(*msgFieldDat.getFieldCommentsStrPtr() + lineStr) );
        }
        else
        {
            isHeader = false;
            cout << "Sending: " << lineStr.toStdString() << endl;
            cout << "sending size: " << lineStr.size() << endl;
            extractAttributes(lineStr, msgFieldDat);
            currentMsgFileDat->pushToMsgFieldDatPtrVecPtr(&msgFieldDat);
            //cout << "Type: " << *msgFieldDat->getFieldTypeStrPtr()
            //     << ", Name: " << *msgFieldDat->getFieldNameStrPtr() << endl << endl;
                 //<< ", Commment: " << msgFieldDat->getFieldCommentsStrPtr() << endl << endl;
        }
    }
    
    
    return currentMsgFileDat;
}


QString MsgParser::trim(QString myQString)
{
    while(!myQString.isEmpty() && (myQString.at(0) == ' ' || myQString.at(0) == '\n' || myQString.at(0) == '\t') )
    {cout << "looping" << endl;
        if(myQString.at(0) == ' ')
        {
            myQString.remove(0, 1);
        }
    }

    while(!myQString.isEmpty() && (myQString.at(myQString.size() - 1) ==  ' '
                                || myQString.at(myQString.size() - 1) == '\n'
                                || myQString.at(myQString.size() - 1) == '\t') )
    {cout << "looping 2" << endl;
        if(myQString.at(myQString.size() - 1) == ' ')
        {cout << "\nin if" << endl;
            myQString.remove((myQString.size() - 1), 1);
        }
    break;
    }
    
    return myQString;
}


void MsgParser::extractAttributes(QString line, MsgFieldDat msgFieldDat)
{   cout << "pre-trim: " << line.toStdString() << endl;
    line = trim(line);
    cout << "trimmed: \"" << line.toStdString() << "\"" << endl;
    //cout << "line size: " << line->size() << endl;
    QString type("");
    for(size_t i = 0; i < line.size(); i++)
    {
        cout << "(pre) line: " << line.toStdString() << endl;
        if(line.at(0) != ' ')
        {//cout << "\tappending" << endl;
            //cout << "\tappending: \"" << line.at(0).toLatin1() << "\"" << endl;
            type.append(line.at(0) );
            line.remove(0, 1);
        }
        else
        {//cout << "\tnot" << endl;
            line.remove(0, 1);
            break;
        }
        cout << "(post) line: " << line.toStdString() << endl;
    }
    msgFieldDat.setFieldTypeStrPtr(&type);
    cout << "type: " << type.toStdString() << endl;
    //cout << "Type: " << *msgFieldDat->getFieldTypeStrPtr() << endl;
    
    
    QString name("");
    for(size_t i = 0; i < line.size(); i++)
    {
        if(line.at(0) != ' ')
        {
            name.append(line.at(0) );
            line.remove(0, 1);
        }
        else
        {
            line.remove(0, 1);
            break;
        }
    }
    msgFieldDat.setFieldNameStrPtr(&name);
    cout << "name: " << name.toStdString() << endl;
    
    
    QString comment("");
    for(size_t i = 0; i < line.size(); i++)
    {
        comment.append(line.at(0) );
        line.remove(0, 1);
    }
    msgFieldDat.setFieldCommentsStrPtr(&comment);
    cout << "comment: " << comment.toStdString() << endl;
    
    
}


void MsgParser::toTxtFile()
{
    cerr << "at MsgParser::toTxtFile(): this method has not yet been implemented" << endl;
}


void MsgParser::toXmlFile()
{
    cerr << "at MsgParser::toXmlFile(): this method has not yet been implemented" << endl;
}


void MsgParser::toJsonFile()
{
    cerr << "at MsgParser::toJsonFile(): this method has not yet been implemented" << endl;
}


QString* MsgParser::toQString()
{
    return currentMsgFileDat->toQString();
}


MsgParser::~MsgParser()
{
    ;
}
