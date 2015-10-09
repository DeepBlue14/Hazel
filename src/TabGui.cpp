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
    //!!!HACK!!!
    
    if(tabWidget->tabText(index).contains(".") )
    {
        cout << "attempting to close FILE type" << endl;
    }
    else
    {
        cout << "attempting to close generic tab" << endl;
    }
    tabWidget->removeTab(index);
    cout << "closing tab" << endl;
}

// !!!This is never called (I think)!!!
template<class GenericTab>
void TabGui::addTab(GenericTab* tab, TabType tabType)
{
    cout << "adding tab @ TabGui::addTab(...)" << endl;
    tabTypeVec.push_back(tabType);
}


QTabWidget* TabGui::getTabWidget()
{
    return tabWidget;
}


QString* TabGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


TabGui::~TabGui()
{
    ;
}