#include "FileListingPage.h"


FileListingPage::FileListingPage(QWidget* parent) : QWidget(parent)
{
    packageLstWidPtr = new QListWidget();
    makeLstWidPtr = new QListWidget();
    packagePbPtr = new QPushButton("Start");
    makePbPtr = new QPushButton("Start");
    
    editorGuiPtr = new EditorGui();
    
    connect(packagePbPtr, SIGNAL(pressed()), this, SLOT(handlePkgSlot()));
    connect(makePbPtr, SIGNAL(pressed()), this, SLOT(handleMakeSlot()));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(packageLstWidPtr, 0, 0);
    outerLayout->addWidget(makeLstWidPtr, 0, 1);
    outerLayout->addWidget(packagePbPtr, 1, 0);
    outerLayout->addWidget(makePbPtr, 1, 1);
    
    this->setLayout(outerLayout);
}


void FileListingPage::handleMakeSlot()
{
    cout << "@ Configure::FileListingPage::handleMakeSlot()" << endl;
    editorGuiPtr->show();
}


void FileListingPage::handlePkgSlot()
{
    cout << "@ Configure::FileListingPage::handlePkgSlot()" << endl;
    editorGuiPtr->show();
}


QString* FileListingPage::toString()
{
    return new QString("***METHOD STUB***");
}


FileListingPage::~FileListingPage()
{
    ;
}