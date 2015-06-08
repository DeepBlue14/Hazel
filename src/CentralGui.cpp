#include "CentralGui.h"


CentralGui::CentralGui(QWidget* parent) : QWidget(parent)
{
    centralTabsPtr = new TabGui();
    fileTreeGuiPtr = new FileTreeGui();
    navigatorGuiPtr = new NavigatorGui();
    outputGuiPtr = new OutputGui();
    
    QSplitter* splitter0 = new QSplitter();
    splitter0->setOrientation(Qt::Horizontal);
    splitter0->addWidget(fileTreeGuiPtr);
    splitter0->addWidget(centralTabsPtr);
    splitter0->addWidget(navigatorGuiPtr);
    
    QSplitter* splitter1 = new QSplitter();
    splitter1->setOrientation(Qt::Vertical);
    splitter1->addWidget(splitter0);
    splitter1->addWidget(outputGuiPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter1, 1, 0, 1, 2);
    
    this->setLayout(outerLayout);
}


void CentralGui::setCentralTabsPtr(TabGui* centralTabsPtr)
{
    this->centralTabsPtr = centralTabsPtr;
}


TabGui* CentralGui::getCentralTabsPtr()
{
    return centralTabsPtr;
}


void CentralGui::setFileTreeGuiPtr(FileTreeGui* fileTreeGuiPtr)
{
    this->fileTreeGuiPtr = fileTreeGuiPtr;
}


FileTreeGui* CentralGui::getFileTreeGuiPtr()
{
    return fileTreeGuiPtr;
}


void CentralGui::setNavigatorGuiPtr(NavigatorGui* navigatorGuiPtr)
{
    this->navigatorGuiPtr = navigatorGuiPtr;
}


NavigatorGui* CentralGui::getNavigatorGuiPtr()
{
    return navigatorGuiPtr;
}


void CentralGui::setOutputGuiPtr(OutputGui* outputGuiPtr)
{
    this->outputGuiPtr = outputGuiPtr;
}


OutputGui* CentralGui::getOutputGuiPtr()
{
    return outputGuiPtr;
}


void CentralGui::passMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    fileTreeGuiPtr->setMasterTabWidgetPtr(masterTabWidgetPtr);
}


CentralGui::~CentralGui()
{
    ;
}