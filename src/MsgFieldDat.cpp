#include "MsgFieldDat.h"


MsgFieldDat::MsgFieldDat()
{
    ;
}


void MsgFieldDat::setFieldTypeStrPtr(string* fieldTypeStrPtr)
{
    this->fieldTypeStrPtr = fieldTypeStrPtr;
}


string* MsgFieldDat::getFieldTypeStrPtr()
{
    return fieldTypeStrPtr;
}


void MsgFieldDat::setFieldNameStrPtr(string* fieldNameStrPtr)
{
    this->fieldNameStrPtr = fieldNameStrPtr;
}


string* MsgFieldDat::getFieldNameStrPtr()
{
    return fieldNameStrPtr;
}


void MsgFieldDat::setFieldCommentsStrPtr(string* fieldCommentsStrPtr)
{
    this->fieldCommentsStrPtr = fieldCommentsStrPtr;
}


string* MsgFieldDat::getFieldCommentsStrPtr()
{
    return fieldCommentsStrPtr;
}


string* MsgFieldDat::toString()
{
    string* tmp = new string();
    
    tmp->append("\tField Type: " + *getFieldTypeStrPtr()
              + "\tField Name: " + *getFieldNameStrPtr()
              + "\tField Comment: " + *getFieldCommentsStrPtr() );
    
    return tmp;
}


MsgFieldDat::~MsgFieldDat()
{
    ;
}