#include "Directories.h"


Directories::Directories()
{
    ;
}


void Directories::createDir(QString* dirName)
{
    addDirToVecPtr(new QDir(*dirName));
}


bool Directories::deleteDir(QString* dirName)
{
    for(size_t i = 0; i < dirPtrVecPtr.length(); i++)
    {
        if(dirPtrVecPtr.at(i)->dirName() == dirName)
        {
            if(dirPtrVecPtr.at(i)->exists())
            {
                dirPtrVecPtr.at(i)->removeRecursively();
                return true;
            }
        }
    }
    
    return false;
}


void Directories::createNode(QString* nodeName)
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