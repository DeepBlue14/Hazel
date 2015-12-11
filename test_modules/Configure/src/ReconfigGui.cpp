#include "ReconfigGui.h"


ReconfigGui::ReconfigGui(QMainWindow* parent) : QMainWindow(parent)
{
    reconfigActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "search.png"), tr("&Search"), this);
    findPkgTypeActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "searchAndTransform.png"), tr("&Search and Transform"), this);
    toolBarPtr = new QToolBar();
    toolBarPtr->addAction(reconfigActPtr);
    toolBarPtr->addAction(findPkgTypeActPtr);
    
    reconfigCentralWidPtr = new ReconfigCentralWid();
    
    this->setCentralWidget(reconfigCentralWidPtr);
    this->addToolBar(Qt::TopToolBarArea, toolBarPtr);
}


QString* ReconfigGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ReconfigGui::~ReconfigGui()
{
    ;
}