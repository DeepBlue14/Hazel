#include "CentralTabs.h"


CentralTabs::CentralTabs(QWidget* parent) : QWidget(parent)
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
void CentralTabs::addTab(TabType* tabType)
{
    ;
}


QTabWidget* CentralTabs::getTabWidget()
{
    return tabWidget;
}


CentralTabs::~CentralTabs()
{
    ;
}