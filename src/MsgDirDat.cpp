#include "MsgDirDat.h"


MsgDirDat::MsgDirDat()
{
    msgFileDatPtrVecPtr = new vector<MsgFileDat*>();
}


void MsgDirDat::setMsgDirStrPtr(string* msgDirStrPtr)
{
    this->msgDirStrPtr = msgDirStrPtr;
}


string* MsgDirDat::getMsgDirStrPtr()
{
    return msgDirStrPtr;
}


void MsgDirDat::pushToMsgFileDatPtrVecPtr(MsgFileDat* msgFileDatPtr)
{
    msgFileDatPtrVecPtr->push_back(msgFileDatPtr);
}


MsgFileDat* MsgDirDat::popFromMsgFileDatPtrVecPtr()
{
    MsgFileDat* tmp = new MsgFileDat();
    tmp = msgFileDatPtrVecPtr->back();
    msgFileDatPtrVecPtr->pop_back();
    
    return tmp;
}


vector<MsgFileDat*>* MsgDirDat::getMsgFileDatPtrVecPtr()
{
    return msgFileDatPtrVecPtr;
}


string* MsgDirDat::toString()
{
    string* tmp = new string("***method stub***");
    
    return tmp;
}


MsgDirDat::~MsgDirDat()
{
    ;
}