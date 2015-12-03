#include "OutputToolBar.h"

OutputToolbar::OutputToolbar(QToolBar* parent) : QToolBar(parent)
{
    actionPtrVecPtr = new QVector<QAction*>();
    
    initActions();
    
    
    
}


void OutputToolbar::handleHideActPtrSlot()
{
    cout << "@ OutputToolbar::handleHideActPtrSlot()" << endl;
}


void OutputToolbar::handleTermActPtrSlot()
{
    cout << "@ OutputToolbar::handleTermActPtrSlot()" << endl;
}


void OutputToolbar::initActions()
{
    hideActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "output.jpg"), tr("&New File"), this);
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


QVector<QAction*>* OutputToolbar::getActions()
{
    return actionPtrVecPtr;
}


QString* OutputToolbar::toString()
{
    return new QString("***METHOD STUB***");
}


OutputToolbar::~OutputToolbar()
{
    ;
}