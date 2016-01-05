#include "Directory.h"


Directory::Directory(QWidget* parent) : QWidget(parent)
{
    ;
}


void Directory::setDirPtr(QDir* dirPtr)
{
    this->dirPtr = dirPtr;
}


QDir* Directory::getDirPtr()
{
    return dirPtr;
}


void Directory::setDirTypePtr(Directory::DirType* dirTypePtr)
{
    this->dirTypePtr = dirTypePtr;
}


Directory::DirType* Directory::getDirTypePtr()
{
    return dirTypePtr;
}


void Directory::pushBackToChildDirsPtrVec(QDir* dir)
{
    childDirsPtrVec.push_back(dir);
}


QVector<QDir*> Directory::getChildDirsPtrVec()
{
    return childDirsPtrVec;
}


void Directory::pushBackToChildFilesPtrVec(QFile* file)
{
    childFilesPtrVec.push_back(file);
}


QVector<QFile*> Directory::getChildFilesPtrVec()
{
    return childFilesPtrVec;
}


QString* Directory::toString()
{
    QString* tmp = new QString("Directory");
    tmp->append("\n- - - - - - - - - - -\n");
    tmp->append("Directory Name: ");
    tmp->append(dirPtr->dirName() );
    //tmp->append("\nDirectory Type: ");
    //tmp->append();
    tmp->append("Child Dirs:");
    
    for(size_t i = 0; i < childDirsPtrVec.size(); i++)
    {
        tmp->append("\n\t");
        tmp->append(childDirsPtrVec.at(i)->dirName() );
    }
    
    tmp->append("Child Files:");
    
    for(size_t i = 0; i < childFilesPtrVec.size(); i++)
    {
        tmp->append("\n\t");
        tmp->append(childFilesPtrVec.at(i)->fileName() );
    }
    
    return tmp;
}


Directory::~Directory()
{
    ;
}