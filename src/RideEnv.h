/* 
 * File:   EnvCmds.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 * 
 * 
 *
 * Created on May 17, 2015, 9:51 PM
 */

#ifndef RIDE_ENV_H
#define	RIDE_ENV_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

class RideEnv
{ 
    private:
        QString* catkinWsStrPtr;
        QStringList* nodeStrLstPtr;
    
    public:
    RideEnv();
    ;
    ~RideEnv();
};

#endif	/* RIDE_ENV_H */