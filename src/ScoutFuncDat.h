/* 
 * File:   ScoutFuncDat.h
 * Author: james
 *
 * Created on June 2, 2015, 7:03 PM
 */

#ifndef SCOUT_FUNC_DAT_H
#define	SCOUT_FUNC_DAT_H

#include <QWidget>
#include <QString>
#include <QStringList>

class ScoutFuncDat
{
    private:
        QString* funcNmStrPtr;
        QString* funcRetnStrPtr;
        QStringList* paramsStrLstPtr;
        
    public:
        ScoutFuncDat();
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