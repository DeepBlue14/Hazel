#include "SearchGui.h"


SearchGui::SearchGui(QWidget* parent) : QLineEdit(parent)
{
    ;
}


void SearchGui::setSearchInputStrPtr(QString* searchInputStrPtr)
{
    this->searchInputStrPtr = searchInputStrPtr;
}


QString* SearchGui::getSearchInputStrPtr()
{
    return searchInputStrPtr;
}


SearchGui::~SearchGui()
{
    ;
}