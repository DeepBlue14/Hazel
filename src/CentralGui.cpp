#include "CentralGui.h"


CentralGui::CentralGui(QWidget* parent) : QWidget(parent)
{
    centralTabsPtr = new CentralTabs();
    fileTreeGuiPtr = new FileTreeGui();
    outputGuiPtr = new OutputGui();
    
    //centralTabsPtr.
    
    
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(fileTreeGuiPtr, 0, 0);
    outerLayout->addWidget(centralTabsPtr, 0, 1);
    outerLayout->addWidget(outputGuiPtr, 1, 0, 1, 2);
    
    this->setLayout(outerLayout);
}


CentralTabs* CentralGui::getCentralTabsPtr()
{
    return centralTabsPtr;
}


CentralGui::~CentralGui()
{
    ;
}