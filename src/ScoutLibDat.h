/* 
 * File:   ScoutLibDat.h
 * Author: james
 *
 * Created on June 2, 2015, 11:27 PM
 */

#ifndef SCOUT_LIB_DAT_H
#define	SCOUT_LIB_DAT_H

#include <QWidget>
#include <QString>
#include <QVector>

#include "ScoutFileDat.h"

class ScoutLibDat
{
    private:
        QVector<ScoutFileDat*>* filePtrVecPtr;
        
    public:
        ScoutLibDat();
        void pushToFilePtrVecPtr(ScoutFileDat* scoutFileDat);
        ScoutFileDat* popFromFilePtrVecPtr();
        QVector<ScoutFileDat*>* getFilePtrVecPtr();
        QString* toString();
        ~ScoutLibDat();
};

#endif	/* SCOUT_LIB_DAT_H */