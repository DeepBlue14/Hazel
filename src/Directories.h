/* 
 * File:   Directories.h
 * Author: James Kuczynski
 *
 * Created on May 12, 2015, 11:35 AM
 */

#ifndef DIRECTORIES_H
#define	DIRECTORIES_H

#include <QDir>
#include <QFile>
#include <QVector>
#include <QString>

#include <iostream>

using namespace std;

class Directories
{
    private:
        QVector<QDir*>* dirPtrVecPtr;
        QVector<QDir*>* nodePtrVecPtr;
        QVector<QDir*>* pkgPtrVecPtr;
        
    public:
        Directories();
        void createDir(QString* dirName);
        bool closeDir(QString* dirName);
        bool deleteDir(QString* dirName);
        
        void createNode(QString* nodeName);
        bool closeNode(QString* nodeName);
        bool deleteNode(QString* nodeName);
        
        void createPackage(QString* pkgName);
        bool closePackage(QString* pkgName);
        bool deletePackage(QString* pkgName);
        
        bool addDirToVecPtr(QDir* dirName);
        bool subDirFromVecPtr(QDir* dirName);
        bool getDirVecPtr();
        
        bool addNodeToVecPtr(QDir* nodeName);
        bool subNodeFromVecPtr(QDir* nodeName);
        bool getNodeVecPtr();
        
        bool addPkgToVecPtr(QDir* pkgName);
        bool subPkgFromVecPtr(QDir* pkgName);
        bool getPkgVecPtr();
        
        
        
        ~Directories();
};

#endif	/* DIRECTORIES_H */