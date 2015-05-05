#include "MasterGui.h"

MasterGui::MasterGui(QMainWindow* parent) : QMainWindow(parent)
{
    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/Hazel/images/hazel.xpm") );
    this->setWindowTitle("Hazel IDE");
    
    masterActions = new MasterActions();
    masterToolBars = new MasterToolBars();
    openingGui = new OpeningGui();
    masterMenus = new MasterMenus();
    
    masterToolBars->setMasterActionsPtr(masterActions);
    masterMenus->setMasterActionsPtr(masterActions);
    
    initMenus();
    initToolBars();
    
    newProjectGui = new NewProjectGui();
    //----------------
    tabWidget = new QTabWidget();
    //tabWidget->setTabShape(QTabWidget::Triangular);
    tabWidget->setTabsClosable(true);
    tabWidget->addTab(openingGui, tr("Start Page"));
    masterActions->setMasterTabWidgetPtr(tabWidget);
    //tabWidget->addTab(editor, tr("File1"));
    
    this->setCentralWidget(tabWidget);
    //----------------
    
    
    this->resize(500, 600);
}


void MasterGui::initMenus()
{
    fileMenuPtr = menuBar()->addMenu(tr("&File") );
    masterMenus->initFileMenuPtr(fileMenuPtr); 
    
    editMenuPtr = menuBar()->addMenu(tr("&Edit") );
    masterMenus->initEditMenuPtr(editMenuPtr);
    
    viewMenuPtr = menuBar()->addMenu(tr("&View") );
    masterMenus->initViewMenuPtr(viewMenuPtr);
    
    navigateMenuPtr = menuBar()->addMenu(tr("&Navigate") );
    masterMenus->initNavigateMenuPtr(navigateMenuPtr);
    
    sourceMenuPtr = menuBar()->addMenu(tr("&Source") );
    masterMenus->initSourceMenuPtr(sourceMenuPtr);
    
    refactorMenuPtr = menuBar()->addMenu(tr("&Refactor") );
    masterMenus->initRefactorMenuPtr(refactorMenuPtr);
    
    runMenuPtr = menuBar()->addMenu(tr("&Run") );
    masterMenus->initRunMenuPtr(runMenuPtr);
    
    debugMenuPtr = menuBar()->addMenu(tr("&Debug") );
    masterMenus->initDebugMenuPtr(debugMenuPtr);
    
    profileMenuPtr = menuBar()->addMenu(tr("&Profile") );
    masterMenus->initProfileMenuPtr(profileMenuPtr);
    
    teamMenuPtr = menuBar()->addMenu(tr("&Team") );
    masterMenus->initTeamMenuPtr(teamMenuPtr);
    
    toolsMenuPtr = menuBar()->addMenu(tr("&Tools") );
    masterMenus->initToolsMenuPtr(toolsMenuPtr);
    
    windowMenuPtr = menuBar()->addMenu(tr("&Window") );
    masterMenus->initWindowMenuPtr(windowMenuPtr);
    
    helpMenuPtr = menuBar()->addMenu(tr("&Help") );
    masterMenus->initHelpMenuPtr(helpMenuPtr);
    
}


void MasterGui::initToolBars()
{
    groupOneToolBarPtr = addToolBar(tr("New File") );
    masterToolBars->initGroupOneToolBar(groupOneToolBarPtr);
    
    groupTwoToolBarPtr = addToolBar(tr("Undo") );
    masterToolBars->initGroupTwoToolBar(groupTwoToolBarPtr);
    
    groupThreeToolBarPtr = addToolBar(tr("Debug") );
    masterToolBars->initGroupThreeToolBar(groupThreeToolBarPtr);

}


MasterGui::~MasterGui()
{
    ;
}