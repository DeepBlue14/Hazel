#include "OptionGui.h"


OptionGui::OptionGui(QWidget* parent) : QWidget(parent)
{
    optionPage_1Ptr = new OptionPage_1();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(optionPage_1Ptr);
    
    this->setLayout(outerLayout);
}


OptionGui::~OptionGui()
{
    ;
}