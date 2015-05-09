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
#include <QProcess>

#include <iostream>

using namespace std;

class GenRosPkg : public QWidget
{
    Q_OBJECT
            
    private:
        const int PKG_NAME_LOC;
        QString* dirPathPtr;
        QStringList* argsLstPtr;
        QProcess* genRosPkgProcessPtr;
        
    private slots:
        ;
        
    public:
        GenRosPkg(QWidget* parent = 0);
        void setDirPathPtr(QString* dirPathPtr);
        QString* getDirPathPtr();
        void setArgsLstPtr(QStringList* argsLstPtr);
        QStringList* getArgsLstPtr();
        bool initRosPkg();
        bool testRosPkg();
        ~GenRosPkg();
};

#endif	/* GENROSPKG_H */