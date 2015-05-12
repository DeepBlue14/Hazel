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

#include <iostream>

using namespace std;

class Directories
{
    private:
        ;
        
    public:
        Directories();
        void createDir();
        void closeDir();
        void deleteDir();
        
        void createNode();
        void createPackage();
        ~Directories();
};

#endif	/* DIRECTORIES_H */

