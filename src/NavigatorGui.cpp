#include "NavigatorGui.h"


NavigatorGui::NavigatorGui(QWidget* parent) : QWidget(parent)
{
    splitterPtr = new QSplitter();
    listWidgetPtr = new QListWidget(splitterPtr);
    searchWidgetPtr = new SearchWidget();
    activateSearchBtn = new QPushButton("Go");
    fileStrPtr = new QString();
    masterTabWidgetPtr = new QTabWidget();
        
    splitterPtr->setOrientation(Qt::Vertical);
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitterPtr, 0, 0);
    
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