/* 
 * File:   ScoutData.h
 * Author: james
 *
 * Created on June 2, 2015, 6:08 PM
 */

#ifndef SCOUT_DATA_H
#define	SCOUT_DATA_H

#include <QWidget>
#include <QDir>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QVector>

class ScoutData
{
    Q_OBJECT
            
    private:
        QStringList* loadedFilesStrLstPtr; // list of files which have already been loaded
        QVector<ScoutLibDat*>* scoutLibDatPtrVecPtr;
        
    public:
        ScoutData();
        void load();
        void refresh();
        ~ScoutData();
};

#endif	/* SCOUT_DATA_H */