#include "NewRosWsPage_1.h"


NewRosWsPage_1::NewRosWsPage_1(QWidget* parent) : QWidget(parent)
{
    ;
}


QStringList* NewRosWsPage_1::findRosVersions()
{
    QDir* optRosDirPtr = new QDir("/opt/ros");
    QFileInfoList* subDirs = new QFileInfoList(optRosDirPtr->entryInfoList(QDir::Dirs) );
    QStringList* rosDistosStrLst = new QStringList();
    
    for(size_t i = 0; i < subDirs->size(); i++)
    {
        if(subDirs->at(i).fileName() == "indigo"
        || subDirs->at(i).fileName() == "hydro"
        || subDirs->at(i).fileName() == "groovy")
        {
            rosDistosStrLst->push_back(subDirs->at(i).fileName() );
        }
        
    }
    
    return rosDistosStrLst;
}


QString* NewRosWsPage_1::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


NewRosWsPage_1::~NewRosWsPage_1()
{
    ;
}