#include "ReconfigPage_3.h"


ReconfigPage_3::ReconfigPage_3(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout();
    
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