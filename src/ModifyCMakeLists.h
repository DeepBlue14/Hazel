/* 
 * File:   ModifyCMakeLists.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Note: Inherit from class RideFile? or have-a child of RideFile?
 * 
 * Created on May 30, 2015, 11:34 PM
 */

#ifndef MODIFY_CMAKELISTS_H
#define	MODIFY_CMAKELISTS_H

#include <QWidget>
#include <QIODevice>
#include <QDir>
#include <QFile>
#include <QString>

#include <iostream>

#include "RFile.h"

using namespace std;

class ModifyCMakeLists : public RFile
{
    private:
        ;
        
    public:
        ModifyCMakeLists();
        void addFirstSource(QString* absPathToCML, QString* fileNameAndExt);
        void addNextSource(QString* absPathToCML, QString* fileNameAndExt);
        void rmSource(QString* absPathToCML, QString* fileNameAndExt);
        ~ModifyCMakeLists();
};

#endif	/* MODIFY_CMAKELISTS_H */