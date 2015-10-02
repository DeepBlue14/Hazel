#include "CentralGui.h"


CentralGui::CentralGui(QWidget* parent) : QWidget(parent)
{
    northGuiPtr = new TabGui();
    fileTreeGuiPtr = new FileTreeGui();
    runPanelGuiPtr = new RunPanelGui();
    navigatorGuiPtr = new NavigatorGui();
    southGuiPtr = new OutputGui();
    
    QSplitter* splitter0 = new QSplitter();
    splitter0->setOrientation(Qt::Horizontal);
    splitter0->addWidget(fileTreeGuiPtr);
    splitter0->addWidget(northGuiPtr);

    QSplitter* splitter0sub1 = new QSplitter();
    splitter0sub1->setOrientation(Qt::Vertical);
    splitter0sub1->addWidget(runPanelGuiPtr);
    splitter0sub1->addWidget(navigatorGuiPtr);
    splitter0->addWidget(splitter0sub1);
    QSplitter* splitter1 = new QSplitter();
    splitter1->setOrientation(Qt::Vertical);
    splitter1->addWidget(splitter0);
    splitter1->addWidget(southGuiPtr);   
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter1, 1, 0, 1, 2);
    
    this->setLayout(outerLayout);
}


void CentralGui::setNorthGuiPtr(TabGui* centralTabsPtr)
{
    this->northGuiPtr = centralTabsPtr;
}


TabGui* CentralGui::getNorthGuiPtr()
{
    return northGuiPtr;
}


void CentralGui::setFileTreeGuiPtr(FileTreeGui* fileTreeGuiPtr)
{
    this->fileTreeGuiPtr = fileTreeGuiPtr;
}


FileTreeGui* CentralGui::getFileTreeGuiPtr()
{
    return fileTreeGuiPtr;
}


void CentralGui::setRunPanelGuiPtr(RunPanelGui* runPanelGuiPtr)
{
    this->runPanelGuiPtr = runPanelGuiPtr;
}


RunPanelGui* CentralGui::getRunPanelGuiPtr()
{
    return runPanelGuiPtr;
}


void CentralGui::setNavigatorGuiPtr(NavigatorGui* navigatorGuiPtr)
{
    this->navigatorGuiPtr = navigatorGuiPtr;
}


NavigatorGui* CentralGui::getNavigatorGuiPtr()
{
    return navigatorGuiPtr;
}


void CentralGui::setSouthGuiPtr(OutputGui* outputGuiPtr)
{
    this->southGuiPtr = outputGuiPtr;
}


OutputGui* CentralGui::getSouthGuiPtr()
{
    return southGuiPtr;
}


void CentralGui::passNorthTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    fileTreeGuiPtr->setNorthTabWidgetPtr(masterTabWidgetPtr);
}


void CentralGui::passSouthTabWidgetPtr(QTabWidget* southTabWidgetPtr)
{
    cerr << "CentralGui::passSouthTabWidgetPtr(...) has NOT been implemented yet!";
}


QString* CentralGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***METHOD STUB***");
    
    return tmp;
}


CentralGui::~CentralGui()
{
    ;
}