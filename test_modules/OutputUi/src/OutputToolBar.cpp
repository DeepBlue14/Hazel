#include "OutputToolBar.h"

OutputToolbar::OutputToolbar(AbstractOutputToolBar* parent) : AbstractOutputToolBar(parent)
{
    initActions();
    
    
}


void OutputToolbar::handleTermActPtrSlot()
{
    cout << "@ OutputToolbar::handleTermActPtrSlot()" << endl;
}


void OutputToolbar::initActions()
{
    termActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&New File"), this);
    termActPtr->setShortcut(QKeySequence::New);
    termActPtr->setStatusTip("New File");
    connect(termActPtr, SIGNAL(triggered() ), this, SLOT(handleTermActPtrSlot() ) );
    this->getActions()->push_back(termActPtr);
}


void OutputToolbar::initBtnConnecter()
{
    ;
}


QString* OutputToolbar::toString()
{
    return new QString("***METHOD STUB***");
}


OutputToolbar::~OutputToolbar()
{
    ;
}