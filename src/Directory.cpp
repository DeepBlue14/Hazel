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


Directory::~Directory()
{
    ;
}