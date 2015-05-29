#include "TabGui.h"


TabGui::TabGui(QWidget* parent) : QWidget(parent)
{
    openingGui = new OpeningGui();
    
    tabWidget = new QTabWidget();
    tabWidget->setTabsClosable(true);
    tabWidget->setMovable(true);
    //tabWidget->setElideMode...
    tabWidget->addTab(openingGui, tr("Start Page"));
    
    connect(tabWidget, SIGNAL(tabCloseRequested(int )), this, SLOT(handleCloseTabSlot(int )));

    outerLayout = new QGridLayout();
    outerLayout->addWidget(tabWidget, 0, 0);
    
    this->setLayout(outerLayout);
}


void TabGui::handleCloseTabSlot(int index)
{
    tabWidget->removeTab(index);
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