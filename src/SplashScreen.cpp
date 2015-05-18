#include "SplashScreen.h"


SplashScreen::SplashScreen()
{
    logoPixmapPtr = new QPixmap(":/images/splash.png");
    this->setPixmap(*logoPixmapPtr);
    this->showMessage(QObject::tr("Loading..."),
            Qt::AlignCenter,
            Qt::blue);
}


SplashScreen::~SplashScreen()
{
    ;
}