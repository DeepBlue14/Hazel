#include "SearchWidget.h"


SearchWidget::SearchWidget(QWidget* parent) : QLineEdit(parent)
{
    ;
}


void SearchWidget::setSearchInputStrPtr()
{
    searchInputStrPtr = new QString(this->text() );
}


QString* SearchWidget::getSearchInputStrPtr()
{
    return searchInputStrPtr;
}


QString* SearchWidget::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


SearchWidget::~SearchWidget()
{
    ;
}