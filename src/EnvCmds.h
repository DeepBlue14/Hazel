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

#ifndef ENVCMDS_H
#define	ENVCMDS_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

class EnvCmds : public QWidget
{
    Q_OBJECT
            
    private:   
        QString* pkgPathPtr;
        QStringList* argsLstPtr;
        QProcess* genRosPkgProcessPtr;

        QVector<QDir*>* pkgPtrVecPtr;
        
    private slots:
        ;
        
    public:
        EnvCmds(QWidget* parent = 0);
        void setPkgPathPtr(QString* dirPathPtr);
        QString* getPkgPathPtr();
        void setArgsLstPtr(QStringList* argsLstPtr);
        QStringList* getArgsLstPtr();
        void addToPkgPtrVecPtr(QDir* pkg);//---
        QDir* subFromPkgPtrVecPtr(QDir* pkg);
        QVector<QDir*>* getPkgPtrVecPtr();//---
        bool initRosPkg();
        bool testRosPkg();
        ~EnvCmds();
};

#endif	/* ENVCMDS_H */

