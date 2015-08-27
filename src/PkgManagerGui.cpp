#include "PkgManagerGui.h"


PkgManagerGui::PkgManagerGui(QWidget* parent) : QWidget(parent)
{
    tabWidgetPtr = new QTabWidget();
    
    searchLePtr = new QLineEdit();
    searchLePtr->setMaximumWidth(100);
    
    rosVersionsStrLstPtr = new QStringList();
    rosVersionsStrLstPtr->push_back("Fuerte");
    rosVersionsStrLstPtr->push_back("Groovy");
    rosVersionsStrLstPtr->push_back("Hydro");
    rosVersionsStrLstPtr->push_back("Indigo");
    rosVersionsStrLstPtr->push_back("Jade");

    rosVersionCbPtr = new QComboBox();
    rosVersionCbPtr->addItems(*rosVersionsStrLstPtr);
    rosVersionCbPtr->setCurrentIndex(3);
    rosVersionCbPtr->setMaximumWidth(100);
    
    installBtnPtr = new QPushButton("Install");
    installBtnPtr->setEnabled(false);
    exitBtnPtr = new QPushButton("Exit");
    helpBtnPtr = new QPushButton("Help");
    
    rightHLayout = new QHBoxLayout();
    rightHLayout->addWidget(rosVersionCbPtr);
    rightHLayout->addWidget(searchLePtr);
    
    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(installBtnPtr);
    btnLayout->addWidget(exitBtnPtr);
    btnLayout->addWidget(helpBtnPtr);
    
    installedTab = new PkgManagerTabs();
    availableTab = new PkgManagerTabs();
    tabWidgetPtr->addTab(installedTab, tr("&Installed") );
    tabWidgetPtr->addTab(availableTab, tr("&Available") );
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(tabWidgetPtr, 0, 0, 1, 1);
    outerLayout->addLayout(rightHLayout, 1, 0, Qt::AlignLeft);
    outerLayout->addLayout(btnLayout, 2, 0, Qt::AlignRight);
    
    
    
    this->setLayout(outerLayout);
}


QString* PkgManagerGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


PkgManagerGui::~PkgManagerGui()
{
    ;
}