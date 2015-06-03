#include "ScoutData.h"


ScoutData::ScoutData(QWidget* parent) : QWidget(parent)
{
    loadedFilesStrLstPtr = new QStringList();
    scoutLibDatPtrVecPtr = new QVector<ScoutFileDat*>();
}


void ScoutData::load()
{
    ;
}


void ScoutData::refresh()
{
    ;
}


QString* ScoutData::toString()
{
    QString* tmp = new QString("Loaded files (names only)");
    
    for(size_t i = 0; i < loadedFilesStrLstPtr->size(); i++)
    {
        tmp->append(QString("\n\t") + loadedFilesStrLstPtr->at(i) );
    }
    
    return tmp;
}


ScoutData::~ScoutData()
{
    ;
}