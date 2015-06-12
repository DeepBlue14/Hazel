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