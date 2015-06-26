#include <qt5/QtWidgets/qlistwidget.h>

#include "OptionPage_1.h"


OptionPage_1::OptionPage_1(QWidget* parent) : QWidget(parent)
{
    cssFileStrLstPtr = new QStringList();
    cssFileLstWigPtr = new QListWidget();
    scanForCssFiles();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(cssFileLstWigPtr, 0, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


QStringList* OptionPage_1::scanForCssFiles()
{
    QDir qssDir("./src/qss");
    *cssFileStrLstPtr = qssDir.entryList(QDir::Files/*, sort*/);
    initCssOptionLstWig();
}


void OptionPage_1::initCssOptionLstWig()
{
    cssFileLstWigPtr->addItems(*cssFileStrLstPtr);
}


OptionPage_1::~OptionPage_1()
{
    ;
}