#include "NavigatorGui.h"


NavigatorGui::NavigatorGui(QWidget* parent) : QWidget(parent)
{
    listWidgetPtr = new QListWidget();
    searchWidgetPtr = new SearchWidget();
    activateSearchBtn = new QPushButton("Go");
    fileStrPtr = new QString();
    masterTabWidgetPtr = new QTabWidget();
        
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


void NavigatorGui::setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    this->masterTabWidgetPtr = masterTabWidgetPtr;
}


QTabWidget* NavigatorGui::getMasterTabWidgetPtr()
{
    return masterTabWidgetPtr;
}


NavigatorGui::~NavigatorGui()
{
    ;
}