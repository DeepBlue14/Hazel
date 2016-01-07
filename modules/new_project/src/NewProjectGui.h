/* 
 * File:   NewProjectGui.h
 * Module: new_project
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 22, 2015, 12:25 AM
 * Last Modified 1/05/2016
 */

#ifndef NEW_PROJECT_GUI_H
#define	NEW_PROJECT_GUI_H

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
#include "NewProjectPage_1.h"
#include "NewProjectPage_2.h"
#include "NewProjectPage_3.h"
#include "NewProjectPage_4.h"
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

class NewProjectGui : public QWidget
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
    explicit NewProjectGui(QWidget* parent = 0);

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
     * @param projectRootStrPtr
     */
    void genRideProjDepends(QProcess* process, QString* projectRootStrPtr);

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
    virtual ~NewProjectGui();
    
    
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

    NewProjectPage_1* newProjectPage_1Ptr;
    NewProjectPage_2* newProjectPage_2Ptr;
    NewProjectPage_3* newProjectPage_3Ptr;
    NewProjectPage_4* newProjectPage_4Ptr;

    QString* absPathToProjBuildFileStrPtr;
    QString* absPathToProjRunFileStrPtr;
    QString* absPathToProjLaunchFileStrPtr;
    QString* absPathToProjCreateFileStrPtr;
    
};

#endif	/* NEW_PROJECT_GUI_H */