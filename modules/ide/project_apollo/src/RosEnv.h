/* 
 * File:   RosEnv.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Namespace to contain data utilized by the IDE.
 *
 * Created on January 6, 2016, 3:14 PM
 * Last Modified on January 6, 2016, 3:14 PM
 */

#ifndef ROS_ENV_H
#define	ROS_ENV_H

#include <QWidget>
#include <QString>

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