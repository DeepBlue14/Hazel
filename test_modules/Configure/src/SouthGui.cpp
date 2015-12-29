#include "SouthGui.h"


SouthGui::SouthGui(QWidget* parent) : QWidget(parent)
{
    outputTePtr = new QTextEdit();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTePtr);
    
    this->setLayout(outerLayout);
}


QString* SouthGui::toString()
{
    return new QString("***METHOD STUB***");
}


SouthGui::~SouthGui()
{
    ;
}