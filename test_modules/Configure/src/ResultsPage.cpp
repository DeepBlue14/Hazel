#include "ResultsPage.h"


ResultsPage::ResultsPage(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout();
    
    this->setLayout(outerLayout);
}


QString* ResultsPage::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


ResultsPage::~ResultsPage()
{
    ;
}