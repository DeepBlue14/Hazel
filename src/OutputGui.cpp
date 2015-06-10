#include "OutputGui.h"


OutputGui::OutputGui(QWidget* parent) : QWidget(parent)
{
    outputTePtr = new QTextEdit("output text");
    outputTePtr->setEnabled(false);
    tabWidgetPtr = new QTabWidget();
    tabWidgetPtr->addTab(outputTePtr, "Output");
    tabWidgetPtr->setTabsClosable(true);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(tabWidgetPtr, 0, 0);
    
    
    this->setLayout(outerLayout);
}


void OutputGui::addTab(QWidget* tab, QString* tabName)
{
    tabPtrVec.push_back(tab);
    tabWidgetPtr->addTab(tab, *tabName);
}


QTabWidget* OutputGui::getTabWidget()
{
    return tabWidgetPtr;
}


OutputGui::~OutputGui()
{
    ;
}