/* 
 * File:   ParseMake.h
 * Module: Reconfig
 * Author: James
 *
 * Created on August 3, 2015, 2:29 PM
 */

#ifndef PARSE_MAKE_H
#define	PARSE_MAKE_H

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

class ParseMake
{
    private:
        ;
        
    public:
        ParseMake();
        QString* toString();
        ~ParseMake();
};

#endif	/* PARSE_MAKE_H */