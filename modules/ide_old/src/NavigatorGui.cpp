#include "NavigatorGui.h"


NavigatorGui::NavigatorGui(QWidget* parent) : QWidget(parent)
{
    listWidgetPtr = new QListWidget();
    searchWidgetPtr = new SearchWidget();
    activateSearchBtn = new QPushButton("Go");
    fileStrPtr = new QString();
    westTabWidgetPtr = new QTabWidget();
        
    outerLayout = new QGridLayout();
    outerLayout->addWidget(listWidgetPtr, 0, 0, 1, 0);
    outerLayout->addWidget(searchWidgetPtr, 1, 0);
    outerLayout->addWidget(activateSearchBtn, 1, 1);

    this->setLayout(outerLayout);
}


void NavigatorGui::loadData()
{
    ;
}


void NavigatorGui::setWestTabWidgetPtr(QTabWidget* westTabWidgetPtr)
{
    this->westTabWidgetPtr = westTabWidgetPtr;
}


QTabWidget* NavigatorGui::getWestTabWidgetPtr()
{
    return westTabWidgetPtr;
}


QString* NavigatorGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


NavigatorGui::~NavigatorGui()
{
    ;
}