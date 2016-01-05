/* 
 * File:   PkgScanner.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: This class scans specified pre-existing programs...
 * 
 * References:
 *      http://stackoverflow.com/questions/8052460/recursively-iterate-over-all-the-files-in-a-directory-and-its-subdirectories-in
 * 
 * Created on December 22, 2015, 5:33 PM
 * Last Modified: 
 */

#ifndef PKG_SCANNER_H
#define PKG_SCANNER_H

#include <QDir>
#include <QDirIterator>
#include <QFile>
#include <QVector>
#include <QStringList>
#include <QString>
#include <QDebug>

class PkgScanner
{
    private:
        QString* pkgRootStrPtr;
        QString* makeFileStrPtr;
        QString* pkgFileStrPtr;
        QVector<QFile*>* hFilePtrVecPtr;
        QVector<QFile*>* cFilePtrVecPtr;
        QVector<QFile*>* pyFilePtrVecPtr;
        
        
    public:
        PkgScanner();
        void scan();
        void setPkgRootStrPtr(QString* pkgRootStrPtr);
        QString* getPkgRootStrPtr();
        QString* toString();
        ~PkgScanner();
};

#endif /* PKG_SCANNER_H */