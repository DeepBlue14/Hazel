/* 
 * File:   FTFileMenu.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for files listed in the
 *                   tree view.
 *
 * Created on January 6, 2016, 2:53 PM
 * Last Modified on January 6, 2016, 2:53 PM
 */

#ifndef FT_File_MENU_H
#define	FT_File_MENU_H

#include <QMenu>

#include <iostream>

#include "FilePropGui.h"
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

class FTFileMenu : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     */
    explicit FTFileMenu(QWidget* parent = 0);

    /**
     * Inits the menu for a file.
     */
    void initMenu();

    /**
     * 
     * 
     * @return 
     */
    QMenu* getMenu();


    void setFileNameStrPtr(QString* fileNameStrPtr);


    QString* getFileNameStrPtr();


    void setFileLocStrPtr(QString* fileLocStrPtr);


    QString* getFileLocStrPtr();


    void setLastModdedStrPtr(QString* lastModdedStrPtr);


    QString* getLastModdedStrPtr();
    

    /**
     * Destructor.
     */
    virtual ~FTFileMenu();
    
    
private slots:
    void handleOpenMenuSlot();
    void handleHideMenuSlot();
    void handleDeleteMenuSlot();
    void handleRenameMenuSlot();
    void handleRefactorMenuSlot();
    void handleAddMenuSlot();
    void handleCommitMenuSlot();
    void handleRemoveMenuSlot();
    void handlePropertiesMenuSlot();
    
    
private:
    QMenu* menu;
    QAction* openAct;
    QAction* hideAct;
    QAction* deleteAct;
    QAction* renameAct;
    QAction* refactorAct;
    QAction* addAct;
    QAction* commitAct;
    QAction* removeAct;
    QAction* propertiesAct;

    QString* fileNameStrPtr;
    QString* fileLocStrPtr;
    QString* lastModdedStrPtr;

    FilePropGui* filePropGuiPtr;
    
    
    
};

#endif	/* FT_File_MENU_H */