#include "MasterStatusBar.h"
       

MasterStatusBar::MasterStatusBar(QWidget* parent) : QWidget(parent)
{
    progressBar = new QProgressBar();
    progressBar->setValue(0);
    progressBar->setMinimum(0);
    progressBar->setMaximum(0);
    progressBar->setFormat("Hello");
    progressBar->setMaximumHeight(20);
    progressBar->setMaximumWidth(200);
    widLayoutPtr = new QHBoxLayout();
    widLayoutPtr->addWidget(progressBar, Qt::AlignRight);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(widLayoutPtr, 0, 1, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


MasterStatusBar::~MasterStatusBar()
{
    
}