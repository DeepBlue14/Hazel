#include "MasterActions.h"


MasterActions::MasterActions(QWidget* parent) : QWidget(parent)
{
    newFileActionPtr = new QAction(QIcon("images/newFile.jpg"), tr("&New File"), this);
    newFileActionPtr->setShortcut(QKeySequence::New);
    newFileActionPtr->setStatusTip("New File");
    connect(newFileActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewFileActionSlot() ) );
    
    newTerminalActionPtr = new QAction(QIcon("images/terminal.jpg"), tr("&New Terminal"), this);
    newTerminalActionPtr->setShortcut(QKeySequence::New);
    newTerminalActionPtr->setStatusTip("New Terminal");
    connect(newTerminalActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewTerminalActionSlot() ) );
    
    newProjectActionPtr = new QAction(QIcon("images/newProject.jpg"), tr("&New Project"), this);
    newProjectActionPtr->setShortcut(QKeySequence::New);
    newProjectActionPtr->setStatusTip("New Project");
    connect(newProjectActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewProjectActionSlot() ) );
    
    openProjectActionPtr = new QAction(QIcon("images/openProject.jpg"), tr("&Open Project"), this);
    openProjectActionPtr->setShortcut(QKeySequence::New);
    openProjectActionPtr->setStatusTip("Open Existing Project");
    connect(openProjectActionPtr, SIGNAL(triggered() ), this, SLOT(handleOpenProjectActionSlot() ) );
    
    
    saveAllActionPtr = new QAction(QIcon("images/save.jpg"), tr("&Save All"), this);
    saveAllActionPtr->setShortcut(QKeySequence::New);
    saveAllActionPtr->setStatusTip("Open Existing Project");
    connect(saveAllActionPtr, SIGNAL(triggered() ), this, SLOT(handleSaveAllActionSlot() ) );
    
    
    undoActionPtr = new QAction(QIcon("images/undo.jpg"), tr("&Undo"), this);
    undoActionPtr->setShortcut(QKeySequence::New);
    undoActionPtr->setStatusTip("Open Existing Project");
    connect(undoActionPtr, SIGNAL(triggered() ), this, SLOT(handleUndoActionSlot() ) );
    
    
    redoActionPtr = new QAction(QIcon("images/redo.jpg"), tr("&Redo"), this);
    redoActionPtr->setShortcut(QKeySequence::New);
    redoActionPtr->setStatusTip("Open Existing Project");
    connect(redoActionPtr, SIGNAL(triggered() ), this, SLOT(handleRedoActionSlot() ) );
    

    setProjectConfigActionPtr = new QAction(QIcon("images/generate.jpg"), tr("&set Project Configuration"), this);
    setProjectConfigActionPtr->setShortcut(QKeySequence::New);
    setProjectConfigActionPtr->setStatusTip("Open Existing Project");
    connect(setProjectConfigActionPtr, SIGNAL(triggered() ), this, SLOT(handleSetProjectConfigActionSlot() ) );
    
    
    buildActionPtr = new QAction(QIcon("images/build.jpg"), tr("&Build Project"), this);
    buildActionPtr->setShortcut(QKeySequence::New);
    buildActionPtr->setStatusTip("Open Existing Project");
    connect(buildActionPtr, SIGNAL(triggered() ), this, SLOT(handleBuildActionSlot() ) );
    
    
    cleanAndBuildActionPtr = new QAction(QIcon("images/cleanAndBuild.jpg"), tr("&Clean and Build Project"), this);
    cleanAndBuildActionPtr->setShortcut(QKeySequence::New);
    cleanAndBuildActionPtr->setStatusTip("Open Existing Project");
    connect(cleanAndBuildActionPtr, SIGNAL(triggered() ), this, SLOT(handleCleanAndBuildActionSlot() ) );
    
    
    runActionPtr = new QAction(QIcon("images/run.jpg"), tr("&Run Project"), this);
    runActionPtr->setShortcut(QKeySequence::New);
    runActionPtr->setStatusTip("Open Existing Project");
    connect(runActionPtr, SIGNAL(triggered() ), this, SLOT(handleRunActionSlot() ) );
    
    
    debugActionPtr = new QAction(QIcon("images/debug.jpg"), tr("&Debug Project"), this);
    debugActionPtr->setShortcut(QKeySequence::New);
    debugActionPtr->setStatusTip("Open Existing Project");
    connect(debugActionPtr, SIGNAL(triggered() ), this, SLOT(handleDebugActionSlot() ) );
    
    
    profileProjActionPtr = new QAction(QIcon("images/profile.jpg"), tr("&Profile Project"), this);
    profileProjActionPtr->setShortcut(QKeySequence::New);
    profileProjActionPtr->setStatusTip("Open Existing Project");
    connect(profileProjActionPtr, SIGNAL(triggered() ), this, SLOT(handleProfileProjActionSlot() ) );



}


void MasterActions::handleNewFileActionSlot()
{
    newFileGuiPtr = new NewFileGui();
    //newFileGuiPtr->show();
    cout << "New File activated" << endl;
    
    
    QFont font;
    font.setFamily("Monospace");
    font.setFixedPitch(true);
    font.setPointSize(10);
    font.setWeight(10);

    File* editor = new File();
    editor->setFont(font);

    highlighter = new Highlighter(editor->document() );

    QFile file("mainwindow.h");
    if (file.open(QFile::ReadOnly | QFile::Text) )
        editor->setPlainText(file.readAll() );
    
    masterTabWidgetPtr->addTab(editor, tr("File1"));
}


void MasterActions::handleNewTerminalActionSlot()
{
    cout << "New Terminal activated" << endl;
    
    Terminal* term = new Terminal();
    masterTabWidgetPtr->addTab(term, tr("RosTerm"));
    term->start();
}


void MasterActions::handleNewProjectActionSlot()
{
    newProjectGuiPtr = new NewProjectGui();
    newProjectGuiPtr->show();
}


void MasterActions::handleOpenProjectActionSlot()
{
    ;
}


void MasterActions::handleSaveAllActionSlot()
{
    ;
}


void MasterActions::handleUndoActionSlot()
{
    ;
}


void MasterActions::handleRedoActionSlot()
{
    ;
}


void MasterActions::handleSetProjectConfigActionSlot()
{
    ;
}


void MasterActions::handleBuildActionSlot()
{
    ;
}


void MasterActions::handleCleanAndBuildActionSlot()
{
    ;
}


void MasterActions::handleRunActionSlot()
{
    ;
}


void MasterActions::handleDebugActionSlot()
{
    ;
}


void MasterActions::handleProfileProjActionSlot()
{
    ;
}


void MasterActions::initActions()
{
    ;
}


void MasterActions::setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    this->masterTabWidgetPtr = masterTabWidgetPtr;
}


QTabWidget* MasterActions::getMasterTabWidgetPtr()
{
    return masterTabWidgetPtr;
}


QAction* MasterActions::getNewFileActionPtr()
{
    return newFileActionPtr;
}


QAction* MasterActions::getNewTerminalActionPtr()
{
    return newTerminalActionPtr;
}


QAction* MasterActions::getNewProjectActionPtr()
{
    return newProjectActionPtr;
}


QAction* MasterActions::getOpenProjectActionPtr()
{
    return openProjectActionPtr;
}


QAction* MasterActions::getSaveAllActionPtr()
{
    return saveAllActionPtr;
}


QAction* MasterActions::getUndoActionPtr()
{
    return undoActionPtr;
}


QAction* MasterActions::getRedoActionPtr()
{
    return redoActionPtr;
}


QAction* MasterActions::getSetProjectConfigActionPtr()
{
    return setProjectConfigActionPtr;
}


QAction* MasterActions::getBuildActionPtr()
{
    return buildActionPtr; 
}


QAction* MasterActions::getCleanAndBuildActionPtr()
{
    return cleanAndBuildActionPtr;
}


QAction* MasterActions::getRunActionPtr()
{
    return runActionPtr;
}


QAction* MasterActions::getDebugActionPtr()
{
    return debugActionPtr;
}


QAction* MasterActions::getProfileProjActionPtr()
{
    return profileProjActionPtr;
}


template<class X>
void MasterActions::connectToNewFileAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewFileActionSlot() ) );
}


template<class X>
void MasterActions::connectToNewTerminalAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewTerminalActionSlot() ) );
}


template<class X>
void MasterActions::connectToNewProjectAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewProjectActionSlot() ) );
}


template<class X>
void MasterActions::connectToOpenProjectAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleOpenProjectActionSlot() ) );
}


template<class X>
void MasterActions::connectToSaveAllAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleSaveAllActionSlot() ) );
}


template<class X>
void MasterActions::connectToUndoAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleUndoActionSlot() ) );
}


template<class X>
void MasterActions::connectToRedoAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleRedoActionSlot() ) );
}


template<class X>
void MasterActions::connectToSetProjectConfigAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleSetProjectConfigActionSlot() ) );
}


template<class X>
void MasterActions::connectToBuildAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleBuildActionSlot() ) );
}


template<class X>
void MasterActions::connectToCleanAndBuildAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleCleanAndBuildActionSlot() ) );
}


template<class X>
void MasterActions::connectToRunAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleRunActionSlot() ) );
}


template<class X>
void MasterActions::connectToDebugAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleDebugActionSlot() ) );
}


template<class X>
void MasterActions::connectToProfileProjAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleProfileActionSlot() ) );
}


MasterActions::~MasterActions()
{
    ;
}