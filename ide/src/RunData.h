/* 
 * File:   RunData.h
 * Module: Run
 * Author: James Kuczynski
 * File Description: This file contains a namespace which contains the current
 *                    data for the "run" command--what nodes to launch,
 *                    etc.  When a "run" signal is fired by the user, every
 *                    selected node will be launched.
 *
 * Created on November 20, 2015, 2:00 PM
 */

#ifndef RUN_DATA_H
#define	RUN_DATA_H

#include <QVector>
#include <QString>

#include <iostream>

#include "ExeData.h"
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

namespace RunData
{
    extern QVector<ExeData*> nodeVec;
}

#endif	/* RUN_DATA_H */