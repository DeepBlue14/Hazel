#include "MsgFileDat.h"


MsgFileDat::MsgFileDat()
{
    msgFileNameStrPtr = new string();
    msgFileHeaderStrPtr = new string();
    msgFieldDatPtrVecPtr = new vector<MsgFieldDat*>();
    
}


void MsgFileDat::setMsgFileNameStrPtr(string* msgFileNameStrPtr)
{
    this->msgFileNameStrPtr = msgFileNameStrPtr;
}


string* MsgFileDat::getMsgFileNameStrPtr()
{
    return msgFileNameStrPtr;
}


void MsgFileDat::setMsgFileHeaderStrPtr(string* msgFileHeaderStrPtr)
{
    this->msgFileHeaderStrPtr = msgFileHeaderStrPtr;
}


string* MsgFileDat::getMsgFileHeaderStrPtr()
{
    return msgFileHeaderStrPtr;
}


void MsgFileDat::pushToMsgFieldDatPtrVecPtr(MsgFieldDat* msgFieldDatPtr)
{
    msgFieldDatPtrVecPtr->push_back(msgFieldDatPtr);
}


MsgFieldDat* MsgFileDat::popFromMsgFieldDatPtrVecPtr()
{
    MsgFieldDat* tmp = new MsgFieldDat();
    *tmp = *msgFieldDatPtrVecPtr->back();
    msgFieldDatPtrVecPtr->pop_back();
    
    return tmp;
}


vector<MsgFieldDat*>* MsgFileDat::getMsgFieldDatPtrVecPtr()
{
    return msgFieldDatPtrVecPtr;
}


string* MsgFileDat::toString()
{
    string* tmp = new string();
    tmp->append("msgFileName: " + *getMsgFileNameStrPtr() );
    tmp->append("\nmsgFileHeader: " + *getMsgFileHeaderStrPtr() );
    tmp->append("\nmsgFieldDatPtrs:");
    
    for(size_t i = 0; i < msgFieldDatPtrVecPtr->size(); i++)
    {
        tmp->append("\n\tField Type: " + *msgFieldDatPtrVecPtr->at(i)->getFieldTypeStrPtr()
                    + "\tField Name: " + *msgFieldDatPtrVecPtr->at(i)->getFieldNameStrPtr()
                    + "\tField Comment: " + *msgFieldDatPtrVecPtr->at(i)->getFieldCommentsStrPtr() );
    }
    
    return tmp;
}


MsgFileDat::~MsgFileDat()
{
    ;
}