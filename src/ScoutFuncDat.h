/* 
 * File:   ScoutFuncDat.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 2, 2015, 7:03 PM
 */

#ifndef SCOUT_FUNC_DAT_H
#define	SCOUT_FUNC_DAT_H

#include <QWidget>
#include <QString>
#include <QStringList>

#include <iostream>
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

class ScoutFuncDat : public QWidget
{
    private:
        QString* funcNmStrPtr;
        QString* funcRetnStrPtr;
        QStringList* paramsStrLstPtr;
        
    public:
        ScoutFuncDat(QWidget* parent = 0);
        void setFuncNmStrPtr(QString* funcNmStrPtr);
        QString* getFuncNmStrPtr();
        void setFuncRetnStrPtr(QString* funcRetnStrPtr);
        QString* getFuncRetnStrPtr();
        void pushBackToParamsStrLstPtr(QString* paramStrPtr);
        QString* popBackFromParamsStrLstPtr();
        QStringList* getParamsStrLstPtr();
        QString* toString();
        ~ScoutFuncDat();
};

#endif	/* SCOUT_FUNC_DAT_H */