#include "MasterActions.h"


MasterActions::MasterActions(QWidget* parent) : QWidget(parent)
{
    runGuiPtr = new RunGui();
    openProjectGuiPtr = new OpenProjectGui();
    buildPtr = new Build();
    
    // North
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
    saveAllActionPtr->setStatusTip("Save All");
    connect(saveAllActionPtr, SIGNAL(triggered() ), this, SLOT(handleSaveAllActionSlot() ) );
    
    undoActionPtr = new QAction(QIcon("images/undo.jpg"), tr("&Undo"), this);
    undoActionPtr->setShortcut(QKeySequence::New);
    undoActionPtr->setStatusTip("Undo");
    connect(undoActionPtr, SIGNAL(triggered() ), this, SLOT(handleUndoActionSlot() ) );
    
    redoActionPtr = new QAction(QIcon("images/redo.jpg"), tr("&Redo"), this);
    redoActionPtr->setShortcut(QKeySequence::New);
    redoActionPtr->setStatusTip("Redo");
    connect(redoActionPtr, SIGNAL(triggered() ), this, SLOT(handleRedoActionSlot() ) );

    setProjectConfigActionPtr = new QAction(QIcon("images/generate.jpg"), tr("&set Project Configuration"), this);
    setProjectConfigActionPtr->setShortcut(QKeySequence::New);
    setProjectConfigActionPtr->setStatusTip("Configure");
    connect(setProjectConfigActionPtr, SIGNAL(triggered() ), this, SLOT(handleSetProjectConfigActionSlot() ) );
    
    buildActionPtr = new QAction(QIcon("images/build.jpg"), tr("&Build Project"), this);
    buildActionPtr->setShortcut(QKeySequence::New);
    buildActionPtr->setStatusTip("Build");
    connect(buildActionPtr, SIGNAL(triggered() ), this, SLOT(handleBuildActionSlot() ) );
    
    cleanAndBuildActionPtr = new QAction(QIcon("images/cleanAndBuild.jpg"), tr("&Clean and Build Project"), this);
    cleanAndBuildActionPtr->setShortcut(QKeySequence::New);
    cleanAndBuildActionPtr->setStatusTip("Clean and Build");
    connect(cleanAndBuildActionPtr, SIGNAL(triggered() ), this, SLOT(handleCleanAndBuildActionSlot() ) );
    
    configForRunActionPtr = new QAction(QIcon("images/configForRun.jpg"), tr("&Configure for Execution"), this);
    configForRunActionPtr->setShortcut(QKeySequence::New);
    configForRunActionPtr->setStatusTip("Configure for execution");
    connect(configForRunActionPtr, SIGNAL(triggered() ), this, SLOT(handleConfigForRunActionSlot() ) );
    
    runActionPtr = new QAction(QIcon("images/run.jpg"), tr("&Run Project"), this);
    runActionPtr->setShortcut(QKeySequence::New);
    runActionPtr->setStatusTip("Run Project");
    connect(runActionPtr, SIGNAL(triggered() ), this, SLOT(handleRunActionSlot() ) );
    
    debugActionPtr = new QAction(QIcon("images/debug.jpg"), tr("&Debug Project"), this);
    debugActionPtr->setShortcut(QKeySequence::New);
    debugActionPtr->setStatusTip("Debug");
    connect(debugActionPtr, SIGNAL(triggered() ), this, SLOT(handleDebugActionSlot() ) );
    
    gitActionPtr = new QAction(QIcon("images/github.jpeg"), tr("&Git/GitHub"), this);
    gitActionPtr->setShortcut(QKeySequence::New);
    gitActionPtr->setStatusTip("Git");
    connect(gitActionPtr, SIGNAL(triggered() ), this, SLOT(handleGitActionSlot() ) );

    // South
    outputSouthActionPtr = new QAction(QIcon("images/output.jpg"), tr("&Output"), this);
    outputSouthActionPtr->setShortcut(QKeySequence::New);
    outputSouthActionPtr->setStatusTip("Output");
    connect(outputSouthActionPtr, SIGNAL(triggered() ), this, SLOT(handleOutputSouthActionSlot() ) );
    
    terminalSouthActionPtr = new QAction(QIcon("images/terminal.jpg"), tr("&Output"), this);
    terminalSouthActionPtr->setShortcut(QKeySequence::New);
    terminalSouthActionPtr->setStatusTip("Terminal");
    connect(terminalSouthActionPtr, SIGNAL(triggered() ), this, SLOT(handleTerminalSouthActionSlot() ) );
    
    // East
    navEastActionPtr = new QAction(QIcon("images/navigator.jpg"), tr("&Output"), this);
    navEastActionPtr->setShortcut(QKeySequence::New);
    navEastActionPtr->setStatusTip("Navigator");
    connect(navEastActionPtr, SIGNAL(triggered() ), this, SLOT(handleNavEastActionSlot() ) );
    
    // West
    projectWestActionPtr = new QAction(QIcon("images/tree.jpg"), tr("&Output"), this);
    projectWestActionPtr->setShortcut(QKeySequence::New);
    projectWestActionPtr->setStatusTip("Project Tree");
    connect(projectWestActionPtr, SIGNAL(triggered() ), this, SLOT(handleProjectWestActionSlot() ) );
    
    
}


void MasterActions::handleNewFileActionSlot()
{
    newFileGuiPtr = new NewFileGui();
    newFileGuiPtr->setNorthTabWidgetPtr(northTabWidgetPtr);
    newFileGuiPtr->show();
}

void MasterActions::handleNewTerminalActionSlot()
{
    cout << "New Terminal activated" << endl;
    
    Terminal* term = new Terminal();
    northTabWidgetPtr->addTab(term, tr("RosTerm"));
    northTabWidgetPtr->setCurrentIndex( (northTabWidgetPtr->children().size() - 1) );
    term->start();
}


void MasterActions::handleNewProjectActionSlot()
{
    newProjectGuiPtr = new NewProjectGui();
    newProjectGuiPtr->show();
}


void MasterActions::handleOpenProjectActionSlot()
{
    openProjectGuiPtr->show();
}


void MasterActions::handleSaveAllActionSlot()
{
    SaveAll::save();
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
    cout << "At MasterActions::handleBuildActionSlot(), assuming that only"
         << " one project has been opened/created" << endl;
   /*QProcess* build = new QProcess();
    build->execute(*getNewProjectGuiPtr()->getAbsPathToProjBuildFileStrPtr() );
    build->waitForFinished();*/
    RProcess* rprocess = new RProcess();
    //rprocess->execute("catkin_make");
    rprocess->startDetached("catkin_make");
    
    cout << "finished" << endl;
}


void MasterActions::handleCleanAndBuildActionSlot()
{
    cout << "At MasterActions::handleCleanAndBuildActionSlot(), assuming that ros workspace"
         << "\nis two directories above project root dir" << endl;
    QProcess* build = new QProcess();
    build->setWorkingDirectory("./../../" + *openProjectGuiPtr->getProjectStrPtr() );
    build->start("catkin_make");
}


void MasterActions::handleConfigForRunActionSlot()
{
    runGuiPtr->reset();
    runGuiPtr->show();
}


void MasterActions::handleRunActionSlot()
{
    ;
}


void MasterActions::handleDebugActionSlot()
{
    ;
}


void MasterActions::handleGitActionSlot()
{
    ;
}


// South
void MasterActions::handleOutputSouthActionSlot()
{
    if(getSouthTabWidgetPtr()->isVisible() )
    {
        getSouthTabWidgetPtr()->hide();
    }
    else
    {
        getSouthTabWidgetPtr()->show();
    }
}


void MasterActions::handleTerminalSouthActionSlot()
{
    cout << "New Terminal activated" << endl;
    
    Terminal* term = new Terminal();
    southTabWidgetPtr->addTab(term, tr("RosTerm"));
    
    term->start();
}


// East
void MasterActions::handleNavEastActionSlot()
{
    if(getEastWidgetPtr()->isVisible() )
    {
        getEastWidgetPtr()->hide();
    }
    else
    {
        getEastWidgetPtr()->show();
    }
}


// West
void MasterActions::handleProjectWestActionSlot()
{
    if(getWestWidgetPtr()->isVisible() )
    {
        getWestWidgetPtr()->hide();
    }
    else
    {
        getWestWidgetPtr()->show();
    }
}


void MasterActions::initActions()
{
    ;
}


void MasterActions::setNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr)
{
    this->northTabWidgetPtr = northTabWidgetPtr;
}


QTabWidget* MasterActions::getNorthTabWidgetPtr()
{
    return northTabWidgetPtr;
}


void MasterActions::setSouthTabWidgetPtr(QTabWidget* southTabWidgetPtr)
{
    this->southTabWidgetPtr = southTabWidgetPtr;
}


QTabWidget* MasterActions::getSouthTabWidgetPtr()
{
    return southTabWidgetPtr;
}


void MasterActions::setHighlighter(Highlighter* highlighter)
{
    this->highlighter = highlighter;
}


Highlighter* MasterActions::getHighlighter()
{
    return highlighter;
}


void MasterActions::setNewFileGuiPtr(NewFileGui* newFileGuiPtr)
{
    this->newFileGuiPtr = newFileGuiPtr;
}


NewFileGui* MasterActions::getNewFileGuiPtr()
{
    return newFileGuiPtr;
}


void MasterActions::setNewProjectGuiPtr(NewProjectGui* newProjectGuiPtr)
{
    this->newProjectGuiPtr = newProjectGuiPtr;
}


NewProjectGui* MasterActions::getNewProjectGuiPtr()
{
    return newProjectGuiPtr;
}


void MasterActions::setTerminalPtr(Terminal* terminalPtr)
{
    this->terminalPtr = terminalPtr;
}


Terminal* MasterActions::getTerminalPtr()
{
    return terminalPtr;
}


void MasterActions::setRunGuiPtr(RunGui* runGuiPtr)
{
    this->runGuiPtr = runGuiPtr;
}


RunGui* MasterActions::getRunGuiPtr()
{
    return runGuiPtr;
}


void MasterActions::setOpenProjectGuiPtr(OpenProjectGui* openProjectGuiPtr)
{
    this->openProjectGuiPtr = openProjectGuiPtr;
}


OpenProjectGui* MasterActions::getOpenProjectGuiPtr()
{
    return openProjectGuiPtr;
}


void MasterActions::setWestWidgetPtr(FileTreeGui* fileTreeGuiPtr)
{
    this->westWidgetPtr = fileTreeGuiPtr;
    fileTreeGuiPtr->setNorthTabWidgetPtr(getNorthTabWidgetPtr() );
    cout << cct::yellow("move line at: MasterActions::setWestWidgetPtr(...)") << endl;
}


FileTreeGui* MasterActions::getWestWidgetPtr()
{
    return westWidgetPtr;
}


void MasterActions::setEastWidgetPtr(NavigatorGui* eastWidgetPtr)
{
    this->eastWidgetPtr = eastWidgetPtr;
}


NavigatorGui* MasterActions::getEastWidgetPtr()
{
    return eastWidgetPtr;
}


void MasterActions::setBuildPtr(Build* buildPtr)
{
    this->buildPtr = buildPtr;
}


Build* MasterActions::getBuildPtr()
{
    return buildPtr;
}


// Accessors and Mutators for actions
void MasterActions::setNewFileActionPtr(QAction* newFileActionPtr)
{
    this->newFileActionPtr = newFileActionPtr;
}


QAction* MasterActions::getNewFileActionPtr()
{
    return newFileActionPtr;
}


void MasterActions::setNewTerminalActionPtr(QAction* newTerminalActionPtr)
{
    this->newTerminalActionPtr = newTerminalActionPtr;
}


QAction* MasterActions::getNewTerminalActionPtr()
{
    return newTerminalActionPtr;
}


void MasterActions::setNewProjectActionPtr(QAction* newProjectActionPtr)
{
    this->newProjectActionPtr = newProjectActionPtr;
}


QAction* MasterActions::getNewProjectActionPtr()
{
    return newProjectActionPtr;
}


void MasterActions::setOpenProjectActionPtr(QAction* openProjectActionPtr)
{
    this->openProjectActionPtr = openProjectActionPtr;
}


QAction* MasterActions::getOpenProjectActionPtr()
{
    return openProjectActionPtr;
}


void MasterActions::setSaveAllActionPtr(QAction* saveAllActionPtr)
{
    this->saveAllActionPtr = saveAllActionPtr;
}


QAction* MasterActions::getSaveAllActionPtr()
{
    return saveAllActionPtr;
}


void MasterActions::setUndoActionPtr(QAction* undoActionPtr)
{
    this->undoActionPtr = undoActionPtr;
}


QAction* MasterActions::getUndoActionPtr()
{
    return undoActionPtr;
}


void MasterActions::setRedoActionPtr(QAction* redoActionPtr)
{
    this->redoActionPtr = redoActionPtr;
}


QAction* MasterActions::getRedoActionPtr()
{
    return redoActionPtr;
}


void MasterActions::setSetProjectConfigActionPtr(QAction* setProjectConfigActionPtr)
{
    this->setProjectConfigActionPtr = setProjectConfigActionPtr;
}


QAction* MasterActions::getSetProjectConfigActionPtr()
{
    return setProjectConfigActionPtr;
}


void MasterActions::setBuildActionPtr(QAction* buildActionPtr)
{
    this->buildActionPtr = buildActionPtr;
}


QAction* MasterActions::getBuildActionPtr()
{
    return buildActionPtr; 
}


void MasterActions::setCleanAndBuildActionPtr(QAction* cleanAndBuildActionPtr)
{
    this->cleanAndBuildActionPtr = cleanAndBuildActionPtr;
}


QAction* MasterActions::getCleanAndBuildActionPtr()
{
    return cleanAndBuildActionPtr;
}


void MasterActions::setConfigForRunActionPtr(QAction* configForRunActionPtr)
{
    this->configForRunActionPtr = configForRunActionPtr;
}


QAction* MasterActions::getConfigForRunActionPtr()
{
    return configForRunActionPtr;
}


void MasterActions::setRunActionPtr(QAction* runActionPtr)
{
    this->runActionPtr = runActionPtr;
}


QAction* MasterActions::getRunActionPtr()
{
    return runActionPtr;
}


void MasterActions::setDebugActionPtr(QAction* degugActionPtr)
{
    this->debugActionPtr = debugActionPtr;
}


QAction* MasterActions::getDebugActionPtr()
{
    return debugActionPtr;
}


void MasterActions::setGitActionPtr(QAction* gitActionPtr)
{
    this->gitActionPtr = gitActionPtr;
}


QAction* MasterActions::getGitActionPtr()
{
    return gitActionPtr;
}


// South
void MasterActions::setOutputSouthActionPtr(QAction* outputSouthActionPtr)
{
    this->outputSouthActionPtr = outputSouthActionPtr;
}


QAction* MasterActions::getOutputSouthActionPtr()
{
    return outputSouthActionPtr;
}


void MasterActions::setTerminalSouthActionPtr(QAction* terminalSouthActionPtr)
{
    this->terminalSouthActionPtr = terminalSouthActionPtr;
}


QAction* MasterActions::getTerminalSouthActionPtr()
{
    return terminalSouthActionPtr;
}


// East
void MasterActions::setNavEastActionPtr(QAction* navWestActionPtr)
{
    this->navEastActionPtr = navWestActionPtr;
}


QAction* MasterActions::getNavEastActionPtr()
{
    return navEastActionPtr;
}


// West
void MasterActions::setProjectWestActionPtr(QAction* projectWestActionPtr)
{
    this->projectWestActionPtr = projectWestActionPtr;
}


QAction* MasterActions::getProjectWestActionPtr()
{
    return projectWestActionPtr;
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
void MasterActions::connectToConfigForRunAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleConfigForRunActionSlot() ) );
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
void MasterActions::connectToGitAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleGitActionSlot() ) );
}


// South
template<class X>
void MasterActions::connectToOutputSouthAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleOutputSouthActionSlot() ) );
}


template<class X>
void MasterActions::connectToTerminalSouthAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleTerminalSouthActionSlot() ) );
}


// East
template<class X>
void MasterActions::connectToNavEastAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNavEastActionSlot() ) );
}


// West
template<class X>
void MasterActions::connectToProjectWestAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleProjectWestActionSlot() ) );
}


MasterActions::~MasterActions()
{
    ;
}