#include "HelpPage_1.h"


HelpPage_1::HelpPage_1(QWidget* parent) : QWidget(parent)
{
    searchWidget = new SearchWidget();
    searchBtn = new QPushButton(tr("Go"));
    strLstPtr = new QStringList();
    fillList();
    listWidgetPtr = new QListWidget();
    listWidgetPtr->addItems(*strLstPtr);
    listWidgetPtr

    outerLayout = new QGridLayout();
    outerLayout->addWidget(searchWidget, 0, 0, Qt::AlignRight);
    outerLayout->addWidget(searchBtn, 0, 1, Qt::AlignLeft);
    outerLayout->addWidget(listWidgetPtr, 1, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


void HelpPage_1::fillList()
{
    strLstPtr->push_back("External Links");
    strLstPtr->push_back("New File");
    strLstPtr->push_back("New Project");
    strLstPtr->push_back("Importing Projects");
    strLstPtr->push_back("Building Projects");
    strLstPtr->push_back("Running Projects");
    strLstPtr->push_back("Custom Settings");
    strLstPtr->push_back("Arcitecture");
    strLstPtr->push_back("Simulations");
    strLstPtr->push_back("Send a bug report");
}


HelpPage_1::~HelpPage_1()
{
    ;
}