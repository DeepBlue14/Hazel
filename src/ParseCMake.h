/* 
 * File:   ParseCMake.h
 * Author: James
 *
 * Created on August 3, 2015, 2:29 PM
 */

#ifndef PARSE_CMAKE_H
#define	PARSE_CMAKE_H

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

class ParseCMake
{
    private:
        ;
        
    public:
        ParseCMake();
        QString* toString();
        ~ParseCMake();
        
        
};

#endif	/* PARSE_CMAKE_H */