/* 
 * File:   SplashScreen.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 18, 2015, 3:16 PM
 */

#ifndef SPLASH_SCREEN_H
#define	SPLASH_SCREEN_H

#include <QSplashScreen>

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

class SplashScreen : public QSplashScreen
{
    private:
        QPixmap* logoPixmapPtr;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        SplashScreen();
        
        /**
         * 
         */
        ~SplashScreen();
};

#endif	/* SPLASH_SCREEN_H */