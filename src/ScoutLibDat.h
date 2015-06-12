/* 
 * File:   ScoutLibDat.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 2, 2015, 11:27 PM
 */

#ifndef SCOUT_LIB_DAT_H
#define	SCOUT_LIB_DAT_H

#include <QWidget>
#include <QString>
#include <QVector>

#include <iostream>

#include "ScoutFileDat.h"
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

class ScoutLibDat : public QWidget
{
    private:
        QVector<ScoutFileDat*>* filePtrVecPtr;
        
    public:
        ScoutLibDat(QWidget* parent = 0);
        void pushToFilePtrVecPtr(ScoutFileDat* scoutFileDat);
        ScoutFileDat* popFromFilePtrVecPtr();
        QVector<ScoutFileDat*>* getFilePtrVecPtr();
        QString* toString();
        ~ScoutLibDat();
};

#endif	/* SCOUT_LIB_DAT_H */