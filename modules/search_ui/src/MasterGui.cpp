#include "MasterGui.h"


MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    searchResultsLwPtr = new QListWidget();
    searchLePtr = new QLineEdit();
    searchBtnPtr = new QPushButton("Search");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(searchResultsLwPtr, 0, 0, 1, 0);
    outerLayout->addWidget(searchLePtr, 1, 0);
    outerLayout->addWidget(searchBtnPtr, 1, 1);
    
    this->setLayout(outerLayout);
}


QString* MasterGui::toString()
{
    return new QString("***METHOD STUB***");
}


MasterGui::~MasterGui()
{
    ;
}