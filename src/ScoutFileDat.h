/* 
 * File:   ScoutLibDat.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 2, 2015, 6:35 PM
 */

#ifndef SCOUT_FILE_DAT_H
#define	SCOUT_FILE_DAT_H

#include <QWidget>
#include <QString>
#include <QStringList>

#include <iostream>

#include "ScoutFuncDat.h"
#include "ScoutVarDat.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class ScoutFileDat : public QWidget
{          
    private:
        QString* fileNmStrPtr;
        QVector<ScoutFuncDat*>* funcDatPtrVecPtr;
        QVector<ScoutVarDat*>* varDatPtrVecPtr;
        
        template<class X>
        QVector<X*> alphabetizeByName(QVector<X*> scoutType);
        
    public:
        ScoutFileDat(QWidget* parent = 0);
        void setFileNmStrPtr(QString* fileNmStrPtr);
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

#endif	/* SCOUT_FILE_DAT_H */