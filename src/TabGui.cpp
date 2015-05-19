#include "TabGui.h"


TabGui::TabGui(QWidget* parent) : QWidget(parent)
{
    openingGui = new OpeningGui();
    
    tabWidget = new QTabWidget();
    tabWidget->setTabsClosable(true);
    tabWidget->addTab(openingGui, tr("Start Page"));

    outerLayout = new QGridLayout();
    outerLayout->addWidget(tabWidget, 0, 0);
    
    this->setLayout(outerLayout);
}


template<class TabType>
void TabGui::addTab(TabType* tabType)
{
    ;
}


QTabWidget* TabGui::getTabWidget()
{
    return tabWidget;
}


TabGui::~TabGui()
{
    ;
}