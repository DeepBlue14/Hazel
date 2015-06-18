#include "MsgParser.h"


MsgParser::MsgParser()
{
    ;
}


MsgDirDat* MsgParser::parseDir(QString* msgDirAbsPathStrPtr)
{
    QString tmp;
    tmp = *msgDirAbsPathStrPtr;
    tmp.append("/msg");
    QDir* dir = new QDir(tmp);
    msgDirDat.setMsgDirStrPtr(msgDirAbsPathStrPtr);
    QFileInfoList files = dir->entryInfoList(QDir::Files);
    foreach(QFileInfo file, files)
    {
        QString stdStr = file.filePath();
        MsgFileDat tmpFileDat = parseFile(stdStr);
        msgDirDat.pushToMsgFileDatPtrVecPtr(new MsgFileDat(tmpFileDat) );

    }
    
    return new MsgDirDat(msgDirDat); // ***METHOD STUB***
}


MsgFileDat MsgParser::parseFile(QString msgFileAbsPathStrPtr)
{
    MsgFileDat currentMsgFileDat;
    currentMsgFileDat.setMsgFileNameStrPtr(msgFileAbsPathStrPtr);
    bool isHeader = true;
    
    QFile file(msgFileAbsPathStrPtr);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text) )
        cerr << "failed to open file" << endl;
    
    //cout << "!!!File: " << file.fileName().toStdString() << endl;
    while(!file.atEnd() )
    {
        QByteArray lineBa = file.readLine();
        QString lineStr = lineBa.data();
        lineStr = lineStr.trimmed();
        MsgFieldDat msgFieldDat;
        
        if(lineStr.size() < 2 )//empy line will be percieved as a \n, i.e. 1 char
        {
            //cout << "empty line" << endl;
        }
        else if(lineStr.at(0) == '#' && isHeader == true)
        {
            //cout << "setting header: " << lineStr.toStdString() << endl;
            //cout << "header size: " << lineStr.size() << endl;
            //currentMsgFileDat->setMsgFileHeaderStrPtr(new QString(*currentMsgFileDat->getMsgFileHeaderStrPtr() + lineStr) );
        }
        else if(lineStr.at(0) == '#')
        {
            //cout << "setting comment" << endl;
            //cout << "size: " << lineStr.size() << endl;
            //msgFieldDat.setFieldCommentsStrPtr(new QString(*msgFieldDat.getFieldCommentsStrPtr() + lineStr) );
        }
        else
        {
            isHeader = false;
            //cout << "Sending: " << lineStr.toStdString() << endl;
            //cout << "sending size: " << lineStr.size() << endl;
            msgFieldDat = extractAttributes(lineStr, msgFieldDat);
            //cout << "!!!: " << msgFieldDat.getFieldTypeStrPtr()->toStdString() << endl;
            currentMsgFileDat.pushToMsgFieldDatPtrVecPtr(new MsgFieldDat(msgFieldDat));
            //cout << "Type: " << *msgFieldDat->getFieldTypeStrPtr()
            //     << ", Name: " << *msgFieldDat->getFieldNameStrPtr() << endl << endl;
                 //<< ", Commment: " << msgFieldDat->getFieldCommentsStrPtr() << endl << endl;
        }
    }
    
    
    return currentMsgFileDat;
}


MsgFieldDat MsgParser::extractAttributes(QString line, MsgFieldDat msgFieldDat)
{
    line = line.trimmed();
    QString type("");
    int origLineSize = line.size();
    for(size_t i = 0; i < origLineSize; i++)
    {
        if(line.at(0) != ' ')
        {
            type.append(line.at(0) );
            line.remove(0, 1);
        }
        else
        {
            line.remove(0, 1);
            break;
        }
    }
    msgFieldDat.setFieldTypeStrPtr(new QString(type) );
    //cout << "type: " << type.toStdString() << endl;
    

    line = line.trimmed();
    QString name("");
    origLineSize = line.size();
    for(size_t i = 0; i < origLineSize; i++)
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
    msgFieldDat.setFieldNameStrPtr(new QString(name) );
    //cout << "name: " << name.toStdString() << endl << endl;;
    
    
    line = line.trimmed();
    QString comment("");
    origLineSize = line.size();
    for(size_t i = 0; i < origLineSize; i++)
    {
        comment.append(line.at(0) );
        line.remove(0, 1);
    }
    msgFieldDat.setFieldCommentsStrPtr(new QString(comment) );
    //cout << "comment: " << comment.toStdString() << endl;
    
    return msgFieldDat;
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


QString* MsgParser::toString()
{
    QString* tmp = new QString();
    tmp->append("Directory Name: ");
    tmp->append(msgDirDat.getMsgDirStrPtr() );
    tmp->append("\nFiles: ");

    for(size_t i = 0; i < msgDirDat.getMsgFileDatPtrVecPtr().size(); i++)
    {
        tmp->append("\n    ");
        tmp->append(msgDirDat.getMsgFileDatPtrVecPtr().at(i)->getMsgFileNameStrPtr() );
        tmp->append("\n        ");
        for(size_t k = 0; k < msgDirDat.getMsgFileDatPtrVecPtr().at(i)->getMsgFieldDatPtrVecPtr().size(); k++)
        {
            tmp->append("Type: ");
            tmp->append(msgDirDat.getMsgFileDatPtrVecPtr().at(i)->getMsgFieldDatPtrVecPtr().at(k)->getFieldTypeStrPtr() );
            tmp->append(", Name: ");
            tmp->append(msgDirDat.getMsgFileDatPtrVecPtr().at(i)->getMsgFieldDatPtrVecPtr().at(k)->getFieldNameStrPtr() );
            tmp->append("\n        ");
        }

    }

    return tmp;
}


MsgParser::~MsgParser()
{
    ;
}