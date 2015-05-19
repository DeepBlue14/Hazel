#include "CentralGui.h"


CentralGui::CentralGui(QWidget* parent) : QWidget(parent)
{
    centralTabsPtr = new TabGui();
    fileTreeGuiPtr = new FileTreeGui();
    outputGuiPtr = new OutputGui();
    
    
    QSplitter* splitter0 = new QSplitter();
    splitter0->setOrientation(Qt::Horizontal);
    splitter0->addWidget(fileTreeGuiPtr);
    splitter0->addWidget(centralTabsPtr);
    
    QSplitter* splitter1 = new QSplitter();
    splitter1->setOrientation(Qt::Vertical);
    splitter1->addWidget(splitter0);
    splitter1->addWidget(outputGuiPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter1, 1, 0, 1, 2);
    
    this->setLayout(outerLayout);
}


TabGui* CentralGui::getCentralTabsPtr()
{
    return centralTabsPtr;
}


CentralGui::~CentralGui()
{
    ;
}