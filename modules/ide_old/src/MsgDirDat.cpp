#include "MsgDirDat.h"


MsgDirDat::MsgDirDat()
{
    ;//msgFileDatPtrVecPtr = new QVector<MsgFileDat*>();
}


void MsgDirDat::setMsgDirStrPtr(QString* msgDirStrPtr)
{
    this->msgDirStrPtr = msgDirStrPtr;
}


QString* MsgDirDat::getMsgDirStrPtr()
{
    return msgDirStrPtr;
}


void MsgDirDat::pushToMsgFileDatPtrVecPtr(MsgFileDat* msgFileDatPtr)
{
    msgFileDatPtrVecPtr.push_back(msgFileDatPtr);
}


MsgFileDat* MsgDirDat::popFromMsgFileDatPtrVecPtr()
{
    MsgFileDat* tmp = new MsgFileDat();
    tmp = msgFileDatPtrVecPtr.back();
    msgFileDatPtrVecPtr.pop_back();
    
    return tmp;
}


QVector<MsgFileDat*> MsgDirDat::getMsgFileDatPtrVecPtr()
{
    return msgFileDatPtrVecPtr;
}


QString* MsgDirDat::toString()
{
    QString* tmp = new QString("***method stub***");
    
    return tmp;
}


MsgDirDat::~MsgDirDat()
{
    ;
}