#include "ReconfigPage_4.h"


ReconfigPage_4::ReconfigPage_4(QWidget* parent) : QWidget(parent)
{
    outputTe = new QTextEdit();
    outputTe->setEnabled(false);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTe);
    
    this->setLayout(outerLayout);
}


ReconfigPage_4::~ReconfigPage_4()
{
    ;
}