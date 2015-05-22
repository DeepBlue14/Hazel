#include "RunPage_1.h"


RunPage_1::RunPage_1(QWidget* parent) : QWidget(parent)
{
    buttonGroupPtr = new QButtonGroup();
    buttonGroupPtr->addButton(new QRadioButton(tr("Launch File")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Individual Nodes")));
    
    outerLayoutPtr = new QGridLayout();
    
    for(size_t i = 0; i < buttonGroupPtr->buttons().size(); i++)
    {
        outerLayoutPtr->addWidget(buttonGroupPtr->buttons().at(i), i, 0);
    }
        
    this->setLayout(outerLayoutPtr);
}


RunPage_1::~RunPage_1()
{
    ;
}