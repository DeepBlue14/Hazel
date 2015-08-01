/* 
 * File:   ModifyCMakeLists.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class modifies an existing CMakeLists.txt file.
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
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class ModifyCMakeLists : public RFile
{
    private:
        ;
        
    public:
        /**
         * Constructor.
         */
        ModifyCMakeLists();
        
        /**
         * 
         * 
         * @param absPathToCML
         * @param fileNameAndExt
         */
        void addFirstSource(QString* absPathToCML, QString* fileNameAndExt);
        
        /**
         * 
         * 
         * @param absPathToCML
         * @param fileNameAndExt
         */
        void addNextSource(QString* absPathToCML, QString* fileNameAndExt);
        
        /**
         * 
         * 
         * @param absPathToCML
         * @param fileNameAndExt
         */
        void rmSource(QString* absPathToCML, QString* fileNameAndExt);
        
        /**
         * Destructor.
         */
        ~ModifyCMakeLists();
};

#endif	/* MODIFY_CMAKELISTS_H */