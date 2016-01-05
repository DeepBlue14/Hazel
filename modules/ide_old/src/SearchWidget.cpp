#include "SearchWidget.h"


SearchWidget::SearchWidget(QWidget* parent) : QLineEdit(parent)
{
    ;
}


QVector<QPair<int, int>*>* SearchWidget::searchCurrFileFor(QString* word)
{
    ;
}

        
QVector<SearchType*>* SearchWidget::searchAllOpenFilesFor(QString* word)
{
    ;
}

        
QVector<SearchType*>* SearchWidget::searchAllSrcFilesInProjFor(QString* word)
{
    ;
}

        
QVector<SearchType*>* SearchWidget::searchAllFilesInProjFor(QString* word)
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