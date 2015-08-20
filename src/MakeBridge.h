/* 
 * File:   MakeBridge.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on August 3, 2015, 6:25 PM
 */

#ifndef MAKE_BRIDGE_H
#define	MAKE_BRIDGE_H

#include <QtXml>
#include <QFile>
#include <QIODevice>
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


class MakeBridget
{
    private:
        ;
        
    public:
        MakeBridge();
        QString* toString();
        ~MakeBridge();
        
};

#endif	/* MAKE_BRIDGE_H */