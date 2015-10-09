/* 
 * File:   Build.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Currently not in use
 * @deprecated
 * 
 * 
 * 
 * Ex: catkin_make --pkg turtlebot
 * Ex: catkin_make --pkg turtlebot package2
 *
 * Created on May 9, 2015, 9:29 PM
 */

#ifndef BUILD_H
#define	BUILD_H

#include <QDebug>
#include <QString>
#include <QStringList>
#include <QProcess>

#include <iostream>

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

class Build
{
    private:
        const QString* PKG_OPTION_STR_PTR;
        QStringList* pkgStrLstPtr;
        QProcess* buildProcessPtr;
        
    public:
        /**
         * Constructor.
         */
        Build();
        
        /**
         * Executes the build command.
         * @deprecated.
         */
        void runBuildCmd();
        
        /**
         * Destructor.
         */
        ~Build();
        
};

#endif	/* BUILD_H */