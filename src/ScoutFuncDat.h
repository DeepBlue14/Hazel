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
    Q_OBJECT
            
    private:
        QString* funcNmStrPtr;
        QString* funcRetnStrPtr;
        QStringList* paramsStrLstPtr;
        
    public:
        ScoutFuncDat();
        //...passthrough methods
        ~ScoutFuncDat();
};

#endif	/* SCOUT_FUNC_DAT_H */