#include "MsgFileDat.h"


MsgFileDat::MsgFileDat()
{
    msgFileNameStrPtr = new QString();
    msgFileHeaderStrPtr = new QString();
    msgFieldDatPtrVecPtr = new QVector<MsgFieldDat*>();
    
}


void MsgFileDat::setMsgFileNameStrPtr(QString* msgFileNameStrPtr)
{
    this->msgFileNameStrPtr = msgFileNameStrPtr;
}


QString* MsgFileDat::getMsgFileNameStrPtr()
{
    return msgFileNameStrPtr;
}


void MsgFileDat::setMsgFileHeaderStrPtr(QString* msgFileHeaderStrPtr)
{
    this->msgFileHeaderStrPtr = msgFileHeaderStrPtr;
}


QString* MsgFileDat::getMsgFileHeaderStrPtr()
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


QVector<MsgFieldDat*>* MsgFileDat::getMsgFieldDatPtrVecPtr()
{
    return msgFieldDatPtrVecPtr;
}


QString* MsgFileDat::toQString()
{
    QString* tmp = new QString();
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
