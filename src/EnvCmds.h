/* 
 * File:   EnvCmds.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 * 
 * Note: Change this class to an namespace?
 *
 * Created on May 17, 2015, 9:51 PM
 */

#ifndef ENV_CMDS_H
#define	ENV_CMDS_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

namespace EnvCmds
{ 
    QString* pkgPathStrPtr;
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
};

#endif	/* ENV_CMDS_H */