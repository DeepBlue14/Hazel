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

#ifndef RIDE_NS_H
#define	RIDE_NS_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

namespace RideNs
{ 
    QString* workspacePathStrPtr;
    QString* pkgPathStrPtr;
    QString* launchFilePathStrPtr;
    QStringList* argsLstPtr;
    QProcess* processPtr;
    QVector<QDir*>* pkgPtrVecPtr;
    bool ptrsWereInited;
    
    void initPtrs();
    void setPkgPathPtr(QString* dirPathPtr);
    QString* getPkgPathPtr();
    void setArgsLstPtr(QStringList* argsLstPtr);
    QStringList* getArgsLstPtr();
    void genRideProjConfigs();
    void addToPkgPtrVecPtr(QDir* pkg);//---
    QDir* subFromPkgPtrVecPtr(QDir* pkg);
    QVector<QDir*>* getPkgPtrVecPtr();//---
    bool sourceEnv();
    bool initRosPkg();
    bool testRosPkg();
    bool catkin_make();
};

#endif	/* RIDE_NS_H */