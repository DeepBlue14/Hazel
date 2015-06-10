#include "MsgParser.h"


MsgParser::MsgParser()
{
    currentMsgFileDat = new MsgFileDat();
}


MsgFileDat* MsgParser::parse(string* msgFileAbsPathStrPtr)
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
{
    string* tmp = new string();
    //bool beforeName = true;
    int count = 0;
    string tmpStr;
    
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    
    count = 0;
    while(line->at(count) != ' ' && count < line->size() )
    {
        tmpStr = line->at(count);
        tmp->append(tmpStr);
        count++;
    }  

    cout << "successfully extracted name: " << *tmp << endl;
    return tmp;
}


string* MsgParser::extractComment(string* line)
{
    string* tmp = new string();
    //bool beforeName = true;
    int count = 0;
    string tmpStr;
    
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    
    count = 0;
    while(line->at(0) != ' ' && count < line->size() )
    {
        line->erase(line->begin());
        count++;
    }    
    line->erase(line->begin() );
    
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


string* MsgParser::toString()
{
    return currentMsgFileDat->toString();
}


MsgParser::~MsgParser()
{
    ;
}