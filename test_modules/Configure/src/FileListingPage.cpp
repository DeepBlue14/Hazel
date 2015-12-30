#include "FileListingPage.h"


FileListingPage::FileListingPage(QWidget* parent) : QWidget(parent)
{
    titleLblPtr = new QLabel();
    
    packageLstWidPtr = new QListWidget();
    makeLstWidPtr = new QListWidget();
    packagePbPtr = new QPushButton("Start");
    makePbPtr = new QPushButton("Start");
    
    editorGuiPtr = new EditorGui();
    
    connect(packagePbPtr, SIGNAL(pressed()), this, SLOT(handlePkgSlot()));
    connect(makePbPtr, SIGNAL(pressed()), this, SLOT(handleMakeSlot()));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(titleLblPtr, 0, 0);
    outerLayout->addWidget(packageLstWidPtr, 1, 0);
    outerLayout->addWidget(makeLstWidPtr, 1, 1);
    outerLayout->addWidget(packagePbPtr, 2, 0);
    outerLayout->addWidget(makePbPtr, 2, 1);
    
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


void FileListingPage::setTitleLblText(QString* text)
{
    titleLblPtr->setText(*text);
}


QString* FileListingPage::getTitleLblPtr()
{
    return new QString(titleLblPtr->text() );
}


QString* FileListingPage::toString()
{
    return new QString("***METHOD STUB***");
}


FileListingPage::~FileListingPage()
{
    ;
}