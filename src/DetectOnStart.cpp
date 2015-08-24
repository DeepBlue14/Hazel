#include "DetectOnStart.h"


DetectOnStart::DetectOnStart()
{
    usersNameStrPtr = new QString("null");
    rosDistrosStrLstPtr = new QStringList();
}


void DetectOnStart::setUsersNameStrPtr(QString* usersNameStrPtr)
{
    this->usersNameStrPtr = usersNameStrPtr;
}


QString* DetectOnStart::getUsersNameStrPtr()
{
    return usersNameStrPtr;
}


void DetectOnStart::setRosDistrosStrLstPtr(QStringList* rosDistrosStrLstPtr)
{
    this->rosDistrosStrLstPtr = rosDistrosStrLstPtr;
}


void DetectOnStart::addToRosDistrosStrLstPtr(QString* rosDistrosStrPtr)
{
    rosDistrosStrLstPtr->push_back(*rosDistrosStrPtr);
}


QStringList* DetectOnStart::getRosDistrosStrLstPtr()
{
    return rosDistrosStrLstPtr;
}


QString* DetectOnStart::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


DetectOnStart::~DetectOnStart()
{
    ;
}