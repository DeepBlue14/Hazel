/* 
 * File:   ScoutLibDat.h
 * Author: james
 *
 * Created on June 2, 2015, 6:35 PM
 */

#ifndef SCOUT_LIB_DAT_H
#define	SCOUT_LIB_DAT_H

#include <QWidget>
#include <QString>
#include <QStringList>

#include "ScoutFuncDat.h"

class ScoutLibDat
{
    Q_OBJECT
            
    private:
        QString* libNmStrPtr;
        QVector<ScoutFuncDat*>* funcDatPtrVecPtr;
        QStringList* varsStrLstPtr;
        
        QStringList* alphabetize(QStringList* funcHeadStrLstPtr, QStringList* funcRetnStrLst);
        QStringList* alphabetize(QStringList* varsStrLstPtr);
        
    public:
        ScoutLibDat();
        ~ScoutLibDat();
};

#endif	/* SCOUT_LIB_DAT_H */