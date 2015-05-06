#include "OutputGui.h"


OutputGui::OutputGui(QWidget* parent) : QWidget(parent)
{
    outputTePtr = new QTextEdit("output text");
    outputTePtr->setEnabled(false);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTePtr, 0, 0);
    
    
    this->setLayout(outerLayout);
}


OutputGui::~OutputGui()
{
    ;
}