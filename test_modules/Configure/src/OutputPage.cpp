#include "OutputPage.h"


OutputPage::OutputPage(QWidget* parent) : QWidget(parent)
{
    outputTe = new QTextEdit();
    outputTe->setEnabled(false);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTe);
    
    this->setLayout(outerLayout);
}


OutputPage::~OutputPage()
{
    ;
}