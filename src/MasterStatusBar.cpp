#include "MasterStatusBar.h"
      
QProgressBar* MasterStatusBar::progressBar;

MasterStatusBar::MasterStatusBar(QWidget* parent) : QWidget(parent)
{
    MasterStatusBar::progressBar = new QProgressBar();
    MasterStatusBar::progressBar->setValue(0);
    MasterStatusBar::progressBar->setMinimum(0);
    MasterStatusBar::progressBar->setMaximum(0);
    MasterStatusBar::progressBar->setFormat("Hello");
    MasterStatusBar::progressBar->setMaximumHeight(20);
    MasterStatusBar::progressBar->setMaximumWidth(200);
    MasterStatusBar::progressBar->setVisible(false);
    
    widLayoutPtr = new QHBoxLayout();
    widLayoutPtr->addWidget(progressBar, Qt::AlignRight);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(widLayoutPtr, 0, 1, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


void MasterStatusBar::setProgressBar(QProgressBar* progressBar)
{
    MasterStatusBar::progressBar = progressBar;
}


QProgressBar* MasterStatusBar::getProgressBar()
{
    return MasterStatusBar::progressBar;
}


QString* MasterStatusBar::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


MasterStatusBar::~MasterStatusBar()
{
    
}