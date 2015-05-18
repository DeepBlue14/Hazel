/* 
 * File:   Directory.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 8, 2015, 10:37 PM
 */

#ifndef DIRECTORY_H
#define	DIRECTORY_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QFile>
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
        DirType* dirTypePtr;
        QVector<QDir*> childDirsPtrVec;
        QVector<QFile*> childFilesPtrVec;
        
    private slots:
        ;
        
        
    public:
        Directory(QWidget* parent = 0);
        void setDirPtr(QDir* dirPtr);
        QDir* getDirPtr();
        void setDirTypePtr(DirType* dirTypePtr);
        DirType* getDirTypePtr();
        void pushBackToChildDirsPtrVec(QDir* dir);
        QVector<QDir*> getChildDirsPtrVec();
        void pushBackToChildFilesPtrVec(QFile* file);
        QVector<QFile*> getChildFilesPtrVec();
        QString* toString();
        ~Directory();
};

#endif	/* DIRECTORY_H */