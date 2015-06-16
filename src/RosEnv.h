/* 
 * File:   RosEnv.h
 * Author: james
 *
 * Created on June 16, 2015, 12:50 PM
 */

#ifndef ROSENV_H
#define	ROSENV_H

#include <QWidget>
#include <QString>

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

namespace RosEnv
{
    extern QString absPathToRosWs;
}

#endif	/* ROSENV_H */

