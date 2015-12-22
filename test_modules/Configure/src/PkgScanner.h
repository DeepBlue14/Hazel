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

class PkgScanner
{
    private:
        ;
        
    public:
        PkgScanner();
        QString* toString();
        ~PkgScanner();
};

#endif /* PKG_SCANNER_H */