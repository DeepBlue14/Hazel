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
#include "ScoutVarDat.h"

class ScoutFileDat
{          
    private:
        QString* fileNmStrPtr;
        QVector<ScoutFuncDat*>* funcDatPtrVecPtr;
        QVector<ScoutVarDat*>* varDatPtrVecPtr;
        
        template<class X>
        QStringList* alphabetizeByName(X* funcOrVar);
        
    public:
        ScoutFileDat();
        void setFileNmStrPtr(QString* fileNmStrPtr);
        QString* getFileNmStrPtr();
        QString* getFileNmStrPtr();
        void pushToFuncDatPtrVecPtr(ScoutFuncDat* funcDatPtrVecPtr);
        ScoutFuncDat* popFromFuncDatPtrVecPtr();
        QVector<ScoutFuncDat*>* getFuncDatPtrVecPtr();
        void pushToVarDatPtrVecPtr(ScoutVarDat* varDatPtrVecPtr);
        ScoutVarDat* popFromVarDatPtrVecPtr();
        QVector<ScoutVarDat*>* getVarDatPtrVecPtr();
        
        QString* toString();
        ~ScoutFileDat();
};

#endif	/* SCOUT_LIB_DAT_H */