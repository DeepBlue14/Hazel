#include "MsgFieldDat.h"


MsgFieldDat::MsgFieldDat()
{
    fieldTypeStrPtr = new QString("");
    fieldNameStrPtr = new QString("");
    fieldCommentsStrPtr = new QString("");
}


void MsgFieldDat::setFieldTypeStrPtr(QString* fieldTypeStrPtr)
{
    this->fieldTypeStrPtr = fieldTypeStrPtr;
}


QString* MsgFieldDat::getFieldTypeStrPtr()
{
    return fieldTypeStrPtr;
}


void MsgFieldDat::setFieldNameStrPtr(QString* fieldNameStrPtr)
{
    this->fieldNameStrPtr = fieldNameStrPtr;
}


QString* MsgFieldDat::getFieldNameStrPtr()
{
    return fieldNameStrPtr;
}


void MsgFieldDat::setFieldCommentsStrPtr(QString* fieldCommentsStrPtr)
{
    this->fieldCommentsStrPtr = fieldCommentsStrPtr;
}


QString* MsgFieldDat::getFieldCommentsStrPtr()
{
    return fieldCommentsStrPtr;
}


QString* MsgFieldDat::toString()
{
    QString* tmp = new QString();
    
    tmp->append("\tField Type: " + *getFieldTypeStrPtr()
              + "\tField Name: " + *getFieldNameStrPtr()
              + "\tField Comment: " + *getFieldCommentsStrPtr() );
    
    return tmp;
}


MsgFieldDat::~MsgFieldDat()
{
    ;
}
