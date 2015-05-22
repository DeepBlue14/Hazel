#include "RunPage_2.h"


RunPage_2::RunPage_2(QWidget* parent) : QWidget(parent)
{
    launchFileLePtr = new QLineEdit();
    selectLaunchFilePbPtr = new QPushButton();
        
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(launchFileLePtr, 0, 0);
    outerLayoutPtr->addWidget(selectLaunchFilePbPtr, 0, 1);
    
    this->setLayout(outerLayoutPtr);
}


RunPage_2::~RunPage_2()
{
    ;
}