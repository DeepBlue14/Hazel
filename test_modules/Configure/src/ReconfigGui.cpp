#include "ReconfigGui.h"


ReconfigGui::ReconfigGui(QMainWindow* parent) : QMainWindow(parent)
{
    reconfigActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "search.png"), tr("&Search"), this);
    findPkgTypeActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "searchAndTransform.png"), tr("&Search and Transform"), this);
    toolBarPtr = new QToolBar();
    toolBarPtr->addAction(reconfigActPtr);
    toolBarPtr->addAction(findPkgTypeActPtr);
    toolBarPtr->setVisible(false);
    
    reconfigCentralWidPtr = new ReconfigCentralWid();
    
    connect(reconfigActPtr, SIGNAL(triggered()), this, SLOT(handleReconfigActPtrSlot()));
    connect(findPkgTypeActPtr, SIGNAL(triggered()), this, SLOT(handleFindPkgTypeActPtrSlot()));
    
    this->setCentralWidget(reconfigCentralWidPtr);
    this->addToolBar(Qt::TopToolBarArea, toolBarPtr);
}


void ReconfigGui::handleReconfigActPtrSlot()
{
    cout << "handleReconfigActPtrSlot() pressed" << endl;
    //reconfigCentralWidPtr->hideBtns(false);
    //toolBarPtr->setVisible(false);
    toolBarPtr->setEnabled(false);
    reconfigCentralWidPtr->swapNextPage(); // FIXME:
}


void ReconfigGui::handleFindPkgTypeActPtrSlot()
{
    cout << "handleFindPkgTypeActPtrSlot() pressed" << endl;
    //reconfigCentralWidPtr->hideBtns(false);
    //toolBarPtr->setVisible(false);
    toolBarPtr->setEnabled(false);
    reconfigCentralWidPtr->swapNextPage(); // FIXME:
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