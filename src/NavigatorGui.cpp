#include "NavigatorGui.h"


NavigatorGui::NavigatorGui(QWidget* parent) : QWidget(parent)
{
    listWidgetPtr = new QListWidget();
    searchWidgetPtr = new SearchWidget();
    activateSearchBtn = new QPushButton("Go");
    fileStrPtr = new QString();
    masterTabWidgetPtr = new QTabWidget();
        
    outerLayout = new QGridLayout();
    outerLayout->addWidget(searchWidgetPtr, 0, 0);
    outerLayout->addWidget(activateSearchBtn, 0, 1);
    outerLayout->addWidget(listWidgetPtr, 1, 0, 1, 0);
    
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