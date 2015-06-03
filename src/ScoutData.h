/* 
 * File:   ScoutData.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
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

#include "ScoutFileDat.h"

class ScoutData : public QWidget
{          
    private:
        QStringList* loadedFilesStrLstPtr; // list of files which have already been loaded
        QVector<ScoutFileDat*>* scoutLibDatPtrVecPtr;
        
    public:
        ScoutData(QWidget* parent = 0);
        void load();
        void refresh();
        QString* toString();
        ~ScoutData();
};

#endif	/* SCOUT_DATA_H */