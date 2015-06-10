#include "RideEnv.h"


RideEnv::RideEnv()
{
    catkinWsAbsPathStrPtr = new QString("null");
    nodeAbsPathStrLstPtr = new QStringList();
    rideProjDirAbsPathStrPtr = new QString("null");
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


void RideEnv::setRideProjDirAbsPathStrPtr(QString* rideProjDirAbsPathStrPtr)
{
    this->rideProjDirAbsPathStrPtr = rideProjDirAbsPathStrPtr;
}


QString* RideEnv::getRideProjDirAbsPathStrPtr()
{
    return rideProjDirAbsPathStrPtr;
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