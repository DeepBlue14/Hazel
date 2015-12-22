#include "SummaryPage.h"


SummaryPage::SummaryPage(QWidget* parent) : QWidget(parent)
{
    titleLblPtr = new QLabel("Final Results Summary");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(titleLblPtr, 0, 0);
    
    this->setLayout(outerLayout);
}


QString* SummaryPage::toString()
{
    return new QString("***METHOD STUB***");
}


SummaryPage::~SummaryPage()
{
    ;
}