#include "RideEnv.h"


RideEnv::RideEnv()
{
    catkinWsAbsPathStrPtr = new QString("null");
    nodeAbsPathStrLstPtr = new QStringList();
    rideProjDirAbsPathStrLstPtr = new QStringList();
}


void RideEnv::setCatkinWsAbsPathStrPtr(QString* catkinWsAbsPathStrPtr)
{
    this->catkinWsAbsPathStrPtr = catkinWsAbsPathStrPtr;
}


QString* RideEnv::getCatkinWsAbsPathStrPtr()
{
    return catkinWsAbsPathStrPtr;
}


void RideEnv::pushToNodeAbsPathStrLstPtr(QString* nodeAbsPathStrPtr)
{
    nodeAbsPathStrLstPtr->push_back(*nodeAbsPathStrPtr);
}


QString* RideEnv::popFromNodeAbsPathStrLstPtr()
{
    QString* tmp = new QString(nodeAbsPathStrLstPtr->back() );
    nodeAbsPathStrLstPtr->pop_back();
    
    return tmp;
}


QStringList* RideEnv::getNodeAbsPathStrLstPtr()
{
    return nodeAbsPathStrLstPtr;
}


void RideEnv::pushToRideProjDirAbsPathStrPtr(QString* rideProjDirAbsPathStr)
{
    rideProjDirAbsPathStrLstPtr->push_back(*rideProjDirAbsPathStr);
}


QString* RideEnv::popFromRideProjDirAbsPathStrPtr()
{
    QString* tmp = new QString(rideProjDirAbsPathStrLstPtr->back() );
    rideProjDirAbsPathStrLstPtr->pop_back();
    
    return tmp;
}


QStringList* RideEnv::getRideProjDirAbsPathStrPtr()
{
    return rideProjDirAbsPathStrLstPtr;
}


QString* toString()
{
    QString* tmp = new QString();
    tmp->append("at RideEnv::toString() ***stub***");
    
    return tmp;
}


RideEnv::~RideEnv()
{
    ;
}