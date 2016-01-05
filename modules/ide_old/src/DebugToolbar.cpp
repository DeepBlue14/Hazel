#include "DebugToolbar.h"


DebugToolbar::DebugToolbar(QToolBar* parent) : QToolBar(parent)
{
    actionPtrVecPtr = new QVector<QAction*>();
    
    initActions();
    
    
}


void DebugToolbar::handleStartActPtrSlot()
{
    cout << "@ DebugToolbar::handleStartActPtrSlot()" << endl;
}


void DebugToolbar::handleStopActPtrSlot()
{
    cout << "@ DebugToolbar::handleStopActPtrSlot()" << endl;
}


void DebugToolbar::handlePauseActPtrSlot()
{
    cout << "@ DebugToolbar::handlePauseActPtrSlot()" << endl;
}


void DebugToolbar::handleStepIntoActPtrSlot()
{
    cout << "@ DebugToolbar::handleStepIntoActPtrSlot()" << endl;
}


void DebugToolbar::handleStepOverActPtrSlot()
{
    cout << "@ DebugToolbar::handleStepOverActPtrSlot()" << endl;
}


void DebugToolbar::initActions()
{
    startActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "placeholder.jpg"), tr("&New File"), this);
    startActPtr->setShortcut(QKeySequence::New);
    startActPtr->setStatusTip("New File");
    connect(startActPtr, SIGNAL(triggered() ), this, SLOT(handleStartActPtrSlot() ) );
    actionPtrVecPtr->push_back(startActPtr);
    
    stopActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "placeholder.jpg"), tr("&New File"), this);
    stopActPtr->setShortcut(QKeySequence::New);
    stopActPtr->setStatusTip("New File");
    connect(stopActPtr, SIGNAL(triggered() ), this, SLOT(handleStopActPtrSlot() ) );
    actionPtrVecPtr->push_back(stopActPtr);
    
    pauseActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "placeholder.jpg"), tr("&New File"), this);
    pauseActPtr->setShortcut(QKeySequence::New);
    pauseActPtr->setStatusTip("New File");
    connect(pauseActPtr, SIGNAL(triggered() ), this, SLOT(handlePauseActPtrSlot() ) );
    actionPtrVecPtr->push_back(pauseActPtr);
    
    stepIntoActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "placeholder.jpg"), tr("&New File"), this);
    stepIntoActPtr->setShortcut(QKeySequence::New);
    stepIntoActPtr->setStatusTip("New File");
    connect(stepIntoActPtr, SIGNAL(triggered() ), this, SLOT(handleStepIntoActPtrSlot() ) );
    actionPtrVecPtr->push_back(stepIntoActPtr);
    
    stepOverActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "placeholder.jpg"), tr("&New File"), this);
    stepOverActPtr->setShortcut(QKeySequence::New);
    stepOverActPtr->setStatusTip("New File");
    connect(stepOverActPtr, SIGNAL(triggered() ), this, SLOT(handleStepOverActPtrSlot() ) );
    actionPtrVecPtr->push_back(stepOverActPtr);
    
    
}


QString* DebugToolbar::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


QVector<QAction*>* DebugToolbar::getActions()
{
    return actionPtrVecPtr;
}


DebugToolbar::~DebugToolbar()
{
    ;
}