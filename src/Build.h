/* 
 * File:   Build.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
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

using namespace std;

class Build
{
    private:
        const QString* PKG_OPTION_STR_PTR;
        QStringList* pkgStrLstPtr;
        QProcess* buildProcessPtr;
        
    public:
        Build();
        void runBuildCmd();
        ~Build();
        
};

#endif	/* BUILD_H */