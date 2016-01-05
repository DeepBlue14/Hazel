/* 
 * File:   ModifyPackage.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class modifies existing ROS manifest.xml files.
 *
 * Created on May 30, 2015, 11:34 PM
 */

#ifndef MODIFY_MANIFEST_H
#define	MODIFY_MANIFEST_H

#include <QWidget>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif





#endif	/* MODIFY_MANIFEST_H */