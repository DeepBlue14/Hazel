#include "Directories.h"


Directories::Directories()
{
    dirPtrVecPtr = new QVector<QString*>;
    nodePtrVecPtr = new QVector<QString*>;
    pkgPtrVecPtr = new QVector<QString*>;
}


void Directories::createDir(QString* dirName)
{
    ;
}


bool Directories::closeDir(QString* dirName)
{
    ;
}


bool Directories::deleteDir(QString* dirName)
{
    ;
}


void Directories::createNode(QString* nodeName)
{
    ;
}


bool Directories::closeNode(QString* nodeName)
{
    ;
}


bool Directories::deleteNode(QString* nodeName)
{
    ;
}


void Directories::createPackage(QString* pkgName)
{
    ;
}


bool Directories::closePackage(QString* pkgName)
{
    ;
}


bool Directories::deletePackage(QString* pkgName)
{
    ;
}

//
bool Directories::addDirToVecPtr(QDir* dirName)
{
    ;
}


bool Directories::subDirFromVecPtr(QDir* dirName)
{
    ;
}


bool Directories::getDirVecPtr()
{
    ;
}


Directories::~Directories()
{
    ;
}