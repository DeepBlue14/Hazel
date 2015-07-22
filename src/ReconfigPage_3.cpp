#include "ReconfigPage_3.h"


ReconfigPage_3::ReconfigPage_3(QWidget* parent) : QWidget(parent)
{
    outputTe = new QTextEdit();
    outputTe->setEnabled(false);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(outputTe);
    
    this->setLayout(outerLayout);
}


QString* ReconfigPage_3::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


ReconfigPage_3::~ReconfigPage_3()
{
    ;
}