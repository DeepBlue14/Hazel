/* 
 * File:   SplashScreen.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 18, 2015, 3:16 PM
 */

#ifndef SPLASH_SCREEN_H
#define	SPLASH_SCREEN_H

#include <QSplashScreen>

class SplashScreen : public QSplashScreen
{
    private:
        QPixmap* logoPixmapPtr;
        
    public:
        SplashScreen();
        ~SplashScreen();
};

#endif	/* SPLASH_SCREEN_H */