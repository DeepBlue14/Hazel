/* 
 * File:   RosEnv.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file contains the current system environment, and is
 *                   updated by previous commands.
 *
 * Created on July 22, 2015, 3:53 PM
 */

#ifndef ENVIRONMENT_H
#define	ENVIRONMENT_H

#include <QWidget>
#include <QString>

#include <iostream>

using std::cout;
using std::endl;

namespace Environment
{
    extern bool sourceEnv;
    extern QString absPathToRosWs;
}

#endif	/* ENVIRONMENT_H */