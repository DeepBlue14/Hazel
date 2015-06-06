#include "ScoutFileDat.h"


ScoutFileDat::ScoutFileDat(QWidget* parent) : QWidget(parent)
{
    fileNmStrPtr = new QString("null");
    funcDatPtrVecPtr = new QVector<ScoutFuncDat*>();
    varDatPtrVecPtr = new QVector<ScoutVarDat*>();
}


template<class X>
QVector<X*> ScoutFileDat::alphabetizeByName(QVector<X*> scoutType)
{
    
    
    ;
}


void ScoutFileDat::setFileNmStrPtr(QString* fileNmStrPtr)
{
    this->fileNmStrPtr = fileNmStrPtr;
}


QString* ScoutFileDat::getFileNmStrPtr()
{
    return fileNmStrPtr;
}


void ScoutFileDat::pushToFuncDatPtrVecPtr(ScoutFuncDat* funcDatPtr)
{
    funcDatPtrVecPtr->push_back(funcDatPtr);
}


ScoutFuncDat* ScoutFileDat::popFromFuncDatPtrVecPtr()
{
    ScoutFuncDat* tmp = funcDatPtrVecPtr->back();
    funcDatPtrVecPtr->pop_back();
    
    return tmp;
}


QVector<ScoutFuncDat*>* ScoutFileDat::getFuncDatPtrVecPtr()
{
    return funcDatPtrVecPtr;
}


void ScoutFileDat::pushToVarDatPtrVecPtr(ScoutVarDat* varDatPtr)
{
    varDatPtrVecPtr->push_back(varDatPtr);
}


ScoutVarDat* ScoutFileDat::popFromVarDatPtrVecPtr()
{
    ScoutVarDat* tmp = varDatPtrVecPtr->back();
    varDatPtrVecPtr->pop_back();
    
    return tmp;
}


QVector<ScoutVarDat*>* ScoutFileDat::getVarDatPtrVecPtr()
{
    return varDatPtrVecPtr;
}

        
QString* ScoutFileDat::toString()
{
    QString* tmp;
    
    tmp->push_back("FunctionDat:");
    
    for(size_t i = 0; i < funcDatPtrVecPtr->size(); i++)
    {
        tmp->push_back(QString("\n\t") + *funcDatPtrVecPtr->at(i)->toString() );
    }
    
    tmp->push_back("VarDat");
    
    for(size_t i = 0; i < varDatPtrVecPtr->size(); i++)
    {
        tmp->push_back(QString("\n\t") + *varDatPtrVecPtr->at(i)->toString() );
    }
    
    return tmp;
}


ScoutFileDat::~ScoutFileDat()
{
    ;
}