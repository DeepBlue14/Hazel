#include "MasterGui.h"


MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    outputTePtr = new QTextEdit();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTePtr, 0, 0);
    
    this->setLayout(outerLayout);
}


MasterGui::~MasterGui()
{
    ;
}


QString* MasterGui::toString()
{
    return new QString("***METHOD STUB***");
}