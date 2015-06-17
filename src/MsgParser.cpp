#include "MsgParser.h"


MsgParser::MsgParser()
{
    currentMsgFileDat = new MsgFileDat();
}


MsgDirDat* MsgParser::parseDir(string* msgDirAbsPathStrPtr)
{
    cout << "at MsgParser::parseDir(...): passed: " << *msgDirAbsPathStrPtr << endl;
    QString tmp;
    tmp = tmp.fromStdString(*msgDirAbsPathStrPtr);
    cout << "tmp: " << tmp.toStdString() << endl;
    tmp.append("/msg");
    QDir* dir = new QDir(tmp);
    
    cout << "cd'ed to: " << dir->absolutePath().toStdString() << endl;
    QFileInfoList files = dir->entryInfoList();
    foreach(QFileInfo file, files)
    {
        string stdStr = file.filePath().toStdString();
        cout << "about to parse: " << stdStr << endl;
        parseFile(&stdStr);
    }
    
    return new MsgDirDat(); // ***METHOD STUB***
}


MsgFileDat* MsgParser::parseFile(string* msgFileAbsPathStrPtr)
{
    char* fileName = (char*) msgFileAbsPathStrPtr->c_str();
    ifstream infile(fileName); //!!!the filestr should include the extension!!!
    
    bool isHeader = true;
    string line;
    //string currentLine;
    //string prevLine;
    currentMsgFileDat = new MsgFileDat();
    MsgFieldDat* msgFieldDat;
    currentMsgFileDat->setMsgFileNameStrPtr(msgFileAbsPathStrPtr);
    
    while(std::getline(infile, line))
    {
        cout << line << endl;
        msgFieldDat = new MsgFieldDat();
        
        if(line.empty() )
        {
            //cout << "empty line" << endl;
        }
        else if((line.at(0) == '#' || line.at(0) == ' ') && isHeader == true)
        {   //cout << "setting header" << endl;
            //currentMsgFileDat->setMsgFileHeaderStrPtr(new string(*currentMsgFileDat->getMsgFileHeaderStrPtr() + line) );
        }
        else if(line.at(0) == '#' || line.at(0) == ' ')
        {
            //cout << "setting comment" << endl;
            //msgFieldDat->setFieldCommentsStrPtr(new string(*msgFieldDat->getFieldCommentsStrPtr() + line) );
        }
        else
        {
            isHeader = false;
            
            //currentLine = line;
            msgFieldDat->setFieldTypeStrPtr(extractType(&line) );
            msgFieldDat->setFieldNameStrPtr(extractName(&line) );
            msgFieldDat->setFieldCommentsStrPtr(extractComment(&line) );
            currentMsgFileDat->pushToMsgFieldDatPtrVecPtr(msgFieldDat);
        }
    
        //prevLine = line;
        
    }
    
    return currentMsgFileDat;
}


string* MsgParser::trim(string* myString)
{
    while(!myString->empty() && myString->at(0) == ' ' && myString->at(myString->size() - 1) ==  ' ')
    {
        if(myString->at(0) == ' ')
        {
            myString->erase(0);
        }
        
        if(!myString->empty() && myString->at(myString->size() - 1) == ' ')
        {
            myString->erase(myString->size() - 1);
        }
    }
    
    return myString;
}


string* MsgParser::extractType(string* line)
{
    string* tmp = new string();
    int count = 0;
    string tmpStr;
    
    while(line->at(count) != ' ' && count < line->size() )
    {
        tmpStr = line->at(count);
        tmp->append(tmpStr);
        count++;
    }       
    cout << "successfully extracted type: " << *tmp << endl;
    return tmp;
}


string* MsgParser::extractName(string* line)
{cout << "HERE (1)" << endl;
    string* tmp = new string();
    //bool beforeName = true;
    int count = 0;
    string tmpStr;
    cout << "HERE (2)" << endl;
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    cout << "HERE (3)" << endl;
    cout << "dealing with: \"" << *line << "\"" << endl;
    cout << "size: " << line->size() << endl;
    count = 0;
    /*while(line->at(count) != ' ' && count < line->size() )
    {
        tmpStr = line->at(count);
        tmp->append(tmpStr);
        count++;
    }*/
    for(count = 0; count < line->size(); count++)
    {
        if(line->at(count) != ' ')
        {
            tmpStr = line->at(count);
            tmp->append(tmpStr);
        }
    }
    
cout << "HERE (4)" << endl;
    cout << "successfully extracted name: " << *tmp << endl;
    return tmp;
}


string* MsgParser::extractComment(string* line)
{cout << "HERE (5)" << endl;
    string* tmp = new string();
    //bool beforeName = true;
    int count = 0;
    string tmpStr;
    cout << "HERE (6)" << endl;
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    cout << "HERE (7)" << endl;
    count = 0;
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    cout << "HERE (8)" << endl;
    count = 0;
    while(line->at(count) != ' ' && count < line->size() )
    {
        tmpStr = line->at(count);
        tmp->append(tmpStr);
        count++;
    }  
    
    cout << "successfully extracted comment: " << *tmp << endl;
    return tmp;
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


string* MsgParser::toString()
{
    return currentMsgFileDat->toString();
}


MsgParser::~MsgParser()
{
    ;
}