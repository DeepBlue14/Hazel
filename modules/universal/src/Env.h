/* 
 * File:   RosEnv.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Namespace to contain data utilized by the IDE.
 *
 * Created on June 16, 2015, 12:50 PM
 */

#ifndef ENV_H
#define	ENV_H

#include <QWidget>
#include <QProcess>
#include <QString>

#include <iostream>

using namespace std;

namespace env
{
    extern void init();
    
    extern QString absPathToRosWs; //absolute path to the ROS workspace
    extern QString rideInstallLoc; // Location where RIDE is installed
    extern QString imagesInstallLoc; //
    extern QString sigilHome; // the value of $HOME
    extern QString username; //i.e. "james"
    
    enum RosDistro
    {
        FUERTE = 0,
        GROOVY,
        HYDRO,
        INDIGO,
        JADE,
        KINETIC
    };
    
    
}

#endif	/* ENV_H */