#include "MasterGui.h"

MasterGui::MasterGui(QMainWindow* parent) : QMainWindow(parent)
{
    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/ride/images/project2.jpg") );
    this->setWindowTitle("Ride");
      
    masterActions = new MasterActions();
    masterToolBars = new MasterToolBars();
    //openingGui = new OpeningGui();
    masterMenus = new MasterMenus();
    centralGui = new CentralGui();
    centralGui->passMasterTabWidgetPtr(masterActions->getMasterTabWidgetPtr() );
    
    masterToolBars->setMasterActionsPtr(masterActions);
    masterMenus->setMasterActionsPtr(masterActions);
    
    initMenus();
    initToolBars();

    this->setCentralWidget(centralGui);
    masterActions->setMasterTabWidgetPtr(centralGui->getCentralTabsPtr()->getTabWidget());
    
    
    this->resize(1000, 800);
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
    masterToolBars->initNorthGroupOneToolBar(groupOneToolBarPtr);
    
    groupTwoToolBarPtr = addToolBar(tr("Undo") );
    masterToolBars->initNorthGroupTwoToolBar(groupTwoToolBarPtr);
    
    groupThreeToolBarPtr = addToolBar(tr("Debug") );
    masterToolBars->initNorthGroupThreeToolBar(groupThreeToolBarPtr);

}


MasterGui::~MasterGui()
{
    ;
}