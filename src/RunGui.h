/* 
 * File:   ExecutionGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 21, 2015, 7:37 PM
 */

#ifndef RUN_GUI_H
#define	RUN_GUI_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "RunPage_1.h"
#include "RunPage_2.h"
#include "RunPage_3.h"
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

class RunGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE
        };
        
        Page currentPage;
        
        QString* launchFilePathStrPtr;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
        
        QGridLayout* outerLayoutPtr;
        QHBoxLayout* buttonLayout;
        
        RunPage_1* runPage_1Ptr;
        RunPage_2* runPage_2Ptr;
        RunPage_3* runPage_3Ptr;
        
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
        RunGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void initBtns();
        
        /**
         * 
         */
        void reset();
        
        /**
         * 
         * 
         * @param launchFilePathStrPtr
         */
        void setLaunchFilePathStrPtr(QString* launchFilePathStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getLaunchFilePathStrPtr();
        
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
         * 
         * @return 
         */
        RunPage_1* getRunPage_1Ptr();
        
        /**
         * 
         * 
         * @return 
         */
        RunPage_2* getRunPage_2Ptr();
        
        /**
         * 
         * 
         * @return 
         */
        RunPage_3* getRunPage_3Ptr();
        
        /**
         * Classic toString method
         * 
         * @return class and helper class data. 
         */
        QString* toString();    
        
        /**
         * Destructor.
         */
        ~RunGui();
};

#endif	/* RUN_GUI_H */