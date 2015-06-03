#include "ScoutFuncDat.h"


ScoutFuncDat::ScoutFuncDat()
{
    funcNmStrPtr = new QString("null");
    funcRetnStrPtr = new QString("null");
    paramsStrLstPtr = new QStringList();
}


void ScoutFuncDat::setFuncNmStrPtr(QString* funcNmStrPtr)
{
    this->funcNmStrPtr = funcNmStrPtr;
}


QString* ScoutFuncDat::getFuncNmStrPtr()
{
    return funcNmStrPtr;
}


void ScoutFuncDat::setFuncRetnStrPtr(QString* funcRetnStrPtr)
{
    this->funcRetnStrPtr = funcRetnStrPtr;
}


QString* ScoutFuncDat::getFuncRetnStrPtr()
{
    return funcRetnStrPtr;
}


void ScoutFuncDat::pushBackToParamsStrLstPtr(QString* paramStrPtr)
{
    paramsStrLstPtr->push_back(*paramStrPtr);
}


QString* ScoutFuncDat::popBackFromParamsStrLstPtr()
{
    QString* tmp = new QString(paramsStrLstPtr->back() );
    paramsStrLstPtr->pop_back();
    return tmp;
}


QStringList* ScoutFuncDat::getParamsStrLstPtr()
{
    return paramsStrLstPtr;
}


QString* ScoutFuncDat::toString()
{
    QString* tmp = new QString();
    tmp->push_back("Function head: " + *getFuncNmStrPtr() );
    tmp->push_back("\nFunction retn: " + *getFuncRetnStrPtr() );
    tmp->push_back("\nParams: ");
    //foreach(paramsStrLstPtr, )
    for(size_t i = 0; i < paramsStrLstPtr->size(); i++)
    {
        tmp->push_back("\n\t" + paramsStrLstPtr->at(i) );
    }
    
    return tmp;
}


ScoutFuncDat::~ScoutFuncDat()
{
    ;
}