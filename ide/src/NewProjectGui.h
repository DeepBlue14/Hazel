/* 
 * File:   NewProjectPage_1.h
 * Module: NewProject
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEW_PROJECT_H
#define	NEW_PROJECT_H

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

#include "NewProjectPage_1.h"
#include "NewProjectPage_2.h"
#include "NewProjectPage_3.h"
#include "NewProjectPage_4.h"
#include "RFile.h"
#include "FileTreeGui.h"

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class NewProjectGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE,
            PAGE_FOUR
        };
    
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
    
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewProjectGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void initBtns();
        
        /**
         * 
         */
        void swapNextPage();
        
        /**
         * 
         */
        void swapBackPage();
        
        /**
         * 
         */
        void loadPage_1();
        
        /**
         * 
         */
        void unloadPage_1();
        
        /**
         * 
         */
        void loadPage_2();
        
        /**
         * 
         */
        void unloadPage_2();
        
        /**
         * 
         */
        void loadPage_3();
        
        /**
         * 
         */
        void unloadPage_3();
        
        /**
         * 
         */
        void loadPage_4();
        
        /**
         * 
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
        ~NewProjectGui();
    
};

#endif	/* NEW_PROJECT_H */