/* 
 * File:   ReconfigCentralWid.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains the central widget of the Reconfig
 *                   module's main window.
 *
 * Created on September 25, 2015, 3:59 PM
 * Last Modified: 
 */

#ifndef RECONFIG_CENTRAL_WID_H
#define	RECONFIG_CENTRAL_WID_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "ReconfigDashboard.h"
#include "InitialSetupPage.h"
#include "ResultsPage.h"
#include "OutputPage.h"
#include "ConvTypePage.h"
#include "ConvOptPage.h"
#include "SubPubPage.h"
#include "FileListingPage.h"
#include "SummaryPage.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class ReconfigCentralWid : public QWidget
{
    Q_OBJECT
            
    private:
        
        
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE,
            PAGE_FOUR,
            PAGE_FIVE,
            PAGE_SIX,
            PAGE_SEVEN,
            PAGE_EIGHT,
            PAGE_NINE,
            PAGE_TEN,
            PAGE_ELEVEN,
            PAGE_TWELVE
        };
        
        Page currentPage;
        
        QPushButton* scanBtnPtr;
        QPushButton* reconfigBtnPtr;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
        
        ReconfigDashboard* reconfigDashboardPtr;
        InitialSetupPage* initialSetupPagePtr;
        OutputPage* initialOutputPagePtr;
        ResultsPage* resultsPagePtr;
        ConvTypePage* convTypePagePtr;
        ConvOptPage* convOptPagePtr;
        SubPubPage* subPagePtr;
        SubPubPage* pubPagePtr;
        OutputPage* creationOutputPagePtr;
        FileListingPage* fileListingPagePtr;
        OutputPage* buildOutputPagePtr;
        SummaryPage* summaryPagePtr;
        
        
        QHBoxLayout* buttonLayout;
        QGridLayout* outerLayout;
        
    private slots:
        //void handleScanBtnSlot();
        
        //void handleReconfigBtnSlot();
        
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
        ReconfigCentralWid(QWidget* parent = 0);
        
        /**
         * 
         */
        void initBtns();
        
        
        //void hideBtns(bool hide);
        
        /**
         * 
         */
        void swapBackPage();
        
        /**
         * 
         */
        void swapNextPage();
        
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
         */
        void loadPage_5();
        
        /**
         * 
         */
        void unloadPage_5();
        
        /**
         * 
         */
        void loadPage_6();
        
        /**
         * 
         */
        void unloadPage_6();
        
        /**
         * 
         */
        void loadPage_7();
        
        /**
         * 
         */
        void unloadPage_7();
        
        /**
         * 
         */
        void loadPage_8();
        
        /**
         * 
         */
        void unloadPage_8();
        
        /**
         * 
         */
        void loadPage_9();
        
        /**
         * 
         */
        void unloadPage_9();
        
        /**
         * 
         */
        void loadPage_10();
        
        /**
         * 
         */
        void unloadPage_10();
        
        /**
         * 
         */
        void loadPage_11();
        
        /**
         * 
         */
        void unloadPage_11();
        
        /**
         * 
         */
        void loadPage_12();
        
        /**
         * 
         */
        void unloadPage_12();
        
        /**
         * Classic toString method.
         * 
         * @return class data. 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~ReconfigCentralWid();
};

#endif	/* RECONFIG_CENTRAL_WID_H */