#include "OutputPage.h"


OutputPage::OutputPage(QWidget* parent) : QWidget(parent)
{
    titleLblPtr = new QLabel("Unnamed Label");
    outputTe = new QTextEdit();
    outputTe->setEnabled(false);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(titleLblPtr, 0, 0);
    outerLayout->addWidget(outputTe, 1, 0);
    
    this->setLayout(outerLayout);
}


void OutputPage::setTitleLblPtr(QLabel* titleLblPtr)
{
    this->titleLblPtr = titleLblPtr;
}
        
        
QLabel* OutputPage::getTitleLblPtr()
{
    return titleLblPtr;
}
        
        
void OutputPage::setTitleLblText(QString* text)
{
    titleLblPtr->setText(*text);
}
    
QString* OutputPage::getTitleLblText()
{
    return new QString(titleLblPtr->text() );
}
        
        
QString* OutputPage::toString()
{
    return new QString("***METHOD STUB***");
}


OutputPage::~OutputPage()
{
    ;
}