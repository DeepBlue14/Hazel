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


SearchWidget::~SearchWidget()
{
    ;
}