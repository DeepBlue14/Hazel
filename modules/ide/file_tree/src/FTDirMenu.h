/* 
 * File:   FTDirMenu.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for directories listed in the
 *                   tree view.
 *
 * Created on January 6, 2016, 2:53 PM
 * Last Modified on January 6, 2016, 2:53 PM
 */

#ifndef FT_DIR_MENU_H
#define FT_DIR_MENU_H

#include <QMenu>

#include <iostream>

#include "RosEnv.h"
#include "DirPropGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class FTDirMenu : public QMenu
{
    Q_OBJECT

public:
    /**
     * Constructor.
     */
    explicit FTDirMenu();

    /**
     * Initialize the directory menu.
     */
    void initMenu();

    /**
     * Accessor.
     * 
     * @return 
     */
    QMenu* getMenu();


    void setDirNameStrPtr(QString* dirNameStrPtr);
    QString* getDirNameStrPtr();
    void setDirLocStrPtr(QString* dirLocStrPtr);
    QString* getDirLocStrPtr();
    void setLastModdedStrPtr(QString* lastModdedStrPtr);
    QString* getLastModdedStrPtr();

    /**
     * Destructor.
     */
    virtual ~FTDirMenu();
    
    
private slots:
    void handleCMakeListsMenuSlot();
    void handlePackageMenuSlot();
    void handleCHeaderMenuSlot();
    void handleCSourceMenuSlot();
    void handlePyMenuSlot();
    void handleCfgMenuSlot();
    void handleScriptMenuSlot();
    void handleLaunchMenuSlot();

    void handleNewDirMenuSlot();
    void handleDeleteMenuSlot();
    void handleRenameMenuSlot();
    void handlePropertiesMenuSlot();
    
    
private:
    QMenu* menu;

    QAction* cMakeListsAct;
    QAction* packageAct;
    QAction* cHeaderAct;
    QAction* cSourceAct;
    QAction* pyAct;
    QAction* cfgAct;
    QAction* scriptAct;
    QAction* launchAct;

    QAction* newDirAct;
    QAction* deleteAct;
    QAction* renameAct;
    QAction* propertiesAct;

    QString* dirNameStrPtr;
    QString* dirLocStrPtr;
    QString* lastModdedStrPtr;

    DirPropGui* dirPropGuiPtr;
    
    
};

#endif /* FT_DIR_MENU_H */