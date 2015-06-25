#include "FTProjectMenu.h"


FTProjectMenu::FTProjectMenu()
{
    ;
}


void FTProjectMenu::initMenu()
{
    QMenu* openMenu = this->addMenu("New...");
    this->addAction("Close project");
}


FTProjectMenu::~FTProjectMenu()
{
    ;
}