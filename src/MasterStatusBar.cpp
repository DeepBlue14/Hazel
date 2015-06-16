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


QString* MasterStatusBar::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


MasterStatusBar::~MasterStatusBar()
{
    ;
}