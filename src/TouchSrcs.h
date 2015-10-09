/* 
 * File:   TouchSrcs.h
 * Module: Reconfig
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on August 3, 2015, 7:24 PM
 */

#ifndef TOUCH_SRCS_H
#define	TOUCH_SRCS_H

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

class TouchSrcs
{
    private:
        ;
        
    public:
        TouchSrcs();
        QString* toString();
        ~TouchSrcs();
};

#endif	/* TOUCH_SRCS_H */