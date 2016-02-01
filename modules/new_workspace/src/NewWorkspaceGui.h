/* 
 * File:   NewWorkspaceGui.h
 * Module: new_Workspace
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 22, 2015, 12:25 AM
 * Last Modified 1/05/2016
 */

#ifndef NEW_WORKSPACE_GUI_H
#define	NEW_WORKSPACE_GUI_H

#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QStringList>
#include <QByteArray>
#include <QFile>
#include <QIcon>
#include <QProcess>
#include <QString>
#include <QGridLayout>
#include <QHBoxLayout>

#include <iostream>

#include "RosEnv.h"
#include "NewWorkspacePage_1.h"
#include "NewWorkspacePage_2.h"
#include "NewWorkspacePage_3.h"
#include "NewWorkspacePage_4.h"
//#include "RFile.h"
//#include "FileTreeGui.h"
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

class NewWorkspaceGui : public QWidget
{
    Q_OBJECT

public:
    enum Page {
        PAGE_ONE,
        PAGE_TWO,
        PAGE_THREE,
        PAGE_FOUR
    };

    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewWorkspaceGui(QWidget* parent = 0);

    /**
     * 
     */
    void initBtns();

    /**
     * Unloads the current page and loads the next page.
     */
    void swapNextPage();

    /**
     * Unloads the current page and loads the previous page.
     */
    void swapBackPage();

    /**
     * Loads the page 1 UI elements.
     */
    void loadPage_1();

    /**
     * Unloads the page 1 UI elements.
     */
    void unloadPage_1();

    /**
     * Loads the page 2 UI elements.
     */
    void loadPage_2();

    /**
     * Unloads the page 2 UI elements.
     */
    void unloadPage_2();

    /**
     * Loads the page 3 UI elements.
     */
    void loadPage_3();

    /**
     * Unloads the page 3 UI elements.
     */
    void unloadPage_3();

    /**
     * Loads the page 4 UI elements.
     */
    void loadPage_4();

    /**
     * Unloads the page 4 UI elements.
     */
    void unloadPage_4();

    /**
     * 
     * 
     * @param process
     * @param WorkspaceRootStrPtr
     */
    void genRideProjDepends(QProcess* process, QString* WorkspaceRootStrPtr);

    /**
     * 
     * 
     * @param absPathToProjBuildFileStrPtr
     */
    void setAbsPathToProjBuildFileStrPtr(QString* absPathToProjBuildFileStrPtr);

    /**
     * 
     * 
     * @return 
     */
    QString* getAbsPathToProjBuildFileStrPtr();

    /**
     * 
     * 
     * @param absPathToProjRunFileStrPtr
     */
    void setAbsPathToProjRunFileStrPtr(QString* absPathToProjRunFileStrPtr);

    /**
     * 
     * 
     * @return 
     */
    QString* getAbsPathToProjRunFileStrPtr();

    /**
     * 
     * 
     * @param absPathToProjLaunchFileStrPtr
     */
    void setAbsPathToProjLaunchFileStrPtr(QString* absPathToProjLaunchFileStrPtr);

    /**
     * 
     * 
     * @return 
     */
    QString* getAbsPathToProjLaunchFileStrPtr();

    /**
     * Classic toString method.
     * 
     * @return class data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewWorkspaceGui();
    
    
private slots:
    /**
     * 
     */
    void handleBackBtnSlot();

    /**
     * 
     */
    void handleNextBtnSlot();

    /**
     * 
     */
    void handleFinishBtnSlot();

    /**
     * 
     */
    void handleHelpBntSlot();

    /**
     * 
     */
    void handleCancelBtnSlot();
    
    
private:
    Page currentPage;

    QPushButton* backBtn;
    QPushButton* nextBtn;
    QPushButton* finishBtn;
    QPushButton* helpBtn;
    QPushButton* cancelBtn;

    QGridLayout* outerLayout;
    QHBoxLayout* buttonLayout;

    NewWorkspacePage_1* newWorkspacePage_1Ptr;
    NewWorkspacePage_2* newWorkspacePage_2Ptr;
    NewWorkspacePage_3* newWorkspacePage_3Ptr;
    NewWorkspacePage_4* newWorkspacePage_4Ptr;

    QString* absPathToProjBuildFileStrPtr;
    QString* absPathToProjRunFileStrPtr;
    QString* absPathToProjLaunchFileStrPtr;
    QString* absPathToProjCreateFileStrPtr;
    
};

#endif	/* NEW_WORKSPACE_GUI_H */
