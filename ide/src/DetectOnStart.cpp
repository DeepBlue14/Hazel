#include "DetectOnStart.h"


DetectOnStart::DetectOnStart()
{
    usersNameStrPtr = new QString("null");
    installedRosDistrosStrLstPtr = new QStringList();
}


void DetectOnStart::findUsersName()
{
    QProcess proc;
    proc.start("echo $USER");
    
}


void DetectOnStart::findInstalledRosDistros()
{
    ;
}


void DetectOnStart::loadPreOpenedProjs()
{
    ;
}


void DetectOnStart::setUsersNameStrPtr(QString* usersNameStrPtr)
{
    this->usersNameStrPtr = usersNameStrPtr;
}


QString* DetectOnStart::getUsersNameStrPtr()
{
    return usersNameStrPtr;
}


void DetectOnStart::setInstalledRosDistrosStrLstPtr(QStringList* installedRosDistrosStrLstPtr)
{
    this->installedRosDistrosStrLstPtr = installedRosDistrosStrLstPtr;
}


void DetectOnStart::addToInstalledRosDistrosStrLstPtr(QString* installedRosDistrosStrPtr)
{
    installedRosDistrosStrLstPtr->push_back(*installedRosDistrosStrPtr);
}


QStringList* DetectOnStart::getInstalledRosDistrosStrLstPtr()
{
    return installedRosDistrosStrLstPtr;
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