/* 
 * File:   GenRosPkg.h
 * Author: james
 *
 * Created on May 8, 2015, 10:37 PM
 */

#ifndef GENROSPKG_H
#define	GENROSPKG_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

class GenRosPkg : public QWidget
{
    Q_OBJECT
            
    private:
        const int PKG_NAME_LOC;
        QString* pkgPathPtr;
        QStringList* argsLstPtr;
        QProcess* genRosPkgProcessPtr;

        QVector<QDir*>* pkgPtrVecPtr;
        
    private slots:
        ;
        
    public:
        GenRosPkg(QWidget* parent = 0);
        void setPkgPathPtr(QString* dirPathPtr);
        QString* getPkgPathPtr();
        void setArgsLstPtr(QStringList* argsLstPtr);
        QStringList* getArgsLstPtr();
        void addToPkgPtrVecPtr(QDir* pkg);//---
        QDir* subFromPkgPtrVecPtr(QDir* pkg);
        QVector<QDir*>* getPkgPtrVecPtr();//---
        bool initRosPkg();
        bool testRosPkg();
        ~GenRosPkg();
};

#endif	/* GENROSPKG_H */