
#include "RunToolbar.h"

RunToolbar::RunToolbar(QToolBar* parent) : QToolBar(parent)
{
    actionPtrVecPtr = new QVector<QAction*>();
    
    initActions();
    
    
    
}


void RunToolbar::handleHideActPtrSlot()
{
    cout << "@ RunToolbar::handleHideActPtrSlot()" << endl;
}


void RunToolbar::handleTermActPtrSlot()
{
    cout << "@ RunToolbar::handleTermActPtrSlot()" << endl;
}


void RunToolbar::initActions()
{
    hideActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "Run.jpg"), tr("&New File"), this);
    hideActPtr->setShortcut(QKeySequence::New);
    hideActPtr->setStatusTip("New File");
    connect(hideActPtr, SIGNAL(triggered() ), this, SLOT(handleHideActPtrSlot() ) );
    actionPtrVecPtr->push_back(hideActPtr);
    
    termActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&New File"), this);
    termActPtr->setShortcut(QKeySequence::New);
    termActPtr->setStatusTip("New File");
    connect(termActPtr, SIGNAL(triggered() ), this, SLOT(handleTermActPtrSlot() ) );
    actionPtrVecPtr->push_back(termActPtr);
}


QVector<QAction*>* RunToolbar::getActions()
{
    return actionPtrVecPtr;
}


QString* RunToolbar::toString()
{
    return new QString("***METHOD STUB***");
}


RunToolbar::~RunToolbar()
{
    ;
}