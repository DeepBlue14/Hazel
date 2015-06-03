#include "ScoutVarDat.h"


ScoutVarDat::ScoutVarDat()
{
    varNmStrPtr = new QString("null");
    varTypeStrPtr = new QString("null");
}


void ScoutVarDat::setVarNmStrPtr(QString* varNmStrPtr)
{
    this->varNmStrPtr = varNmStrPtr;
}


QString* ScoutVarDat::getVarNmStrPtr()
{
    return varNmStrPtr;
}


void ScoutVarDat::setVarTypeStrPtr(QString* varTypeStrPtr)
{
    this->varTypeStrPtr = varTypeStrPtr;
}


QString* ScoutVarDat::getVarTypeStrPtr()
{
    return varTypeStrPtr;
}


QString* ScoutVarDat::toString()
{
    QString* tmp = new QString();
    tmp->append("Variable name: " + *getVarNmStrPtr() );
    tmp->append("\nVariable Type: " + *getVarTypeStrPtr() );
    
    return tmp;
}