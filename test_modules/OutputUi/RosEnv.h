/* 
 * File:   RosEnv.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Namespace to contain data utilized by the IDE.
 *
 * Created on June 16, 2015, 12:50 PM
 */

#ifndef ROS_ENV_H
#define	ROS_ENV_H

#include <QWidget>
#include <QString>

#include <iostream>

using namespace std;

namespace RosEnv
{
    extern QString absPathToRosWs;
    extern QString rideInstallLoc; // Location where RIDE is installed
    extern QString imagesInstallLoc;
    extern QString sigilHome; // the value of $HOME
    
    enum RosDistro
    {
        FUERTE = 0,
        GROOVY,
        HYDRO,
        INDIGO,
        JADE
    };
}

#endif	/* ROS_ENV_H */