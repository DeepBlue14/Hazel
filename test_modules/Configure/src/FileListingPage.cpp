#include "FileListingPage.h"


FileListingPage::FileListingPage(QWidget* parent) : QWidget(parent)
{
    packageLstWidPtr = new QListWidget();
    makeLstWidPtr = new QListWidget();
    packagePbPtr = new QPushButton("Start");
    makePbPtr = new QPushButton("Start");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(packageLstWidPtr, 0, 0);
    outerLayout->addWidget(makeLstWidPtr, 0, 1);
    outerLayout->addWidget(packagePbPtr, 1, 0);
    outerLayout->addWidget(makePbPtr, 1, 1);
    
    this->setLayout(outerLayout);
}


QString* FileListingPage::toString()
{
    return new QString("***METHOD STUB***");
}


FileListingPage::~FileListingPage()
{
    ;
}