#include "MasterStatusBar.h"


MasterStatusBar::MasterStatusBar()
{
    initProgressBarPtr();
}


void MasterStatusBar::initProgressBarPtr()
{
    progressBarPtr = new QProgressBar();
    progressBarPtr->setMaximum(0);
    progressBarPtr->setMinimum(0);
}


MasterStatusBar::~MasterStatusBar()
{
    ;
}