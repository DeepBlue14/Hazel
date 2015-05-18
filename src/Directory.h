/* 
 * File:   GenRosPkg.h
 * Author: james
 *
 * Created on May 8, 2015, 10:37 PM
 */

#ifndef DIRECTORY_H
#define	DIRECTORY_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

class Directory : public QWidget
{
    Q_OBJECT
            
    private:
        enum DirType
        {
            NODE,
            SRC,
            INCLUDE,
            BUILD,
            DEVEL,
            OTHER
        };
        
        QDir* dirPtr;
        DirType* dirType;
        
        
    private slots:
        ;
        
        
    public:
        Directory(QWidget* parent = 0);
        void setDirPtr(QDir* dirPtr);
        QDir* getDirPtr();
        ~Directory();
};

#endif	/* DIRECTORY_H */