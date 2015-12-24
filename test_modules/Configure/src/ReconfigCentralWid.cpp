#include "ReconfigCentralWid.h"


ReconfigCentralWid::ReconfigCentralWid(QWidget* parent) : QWidget(parent)
{
    reconfigDashboardPtr = new ReconfigDashboard();
    initialSetupPagePtr = new InitialSetupPage();
    initialOutputPagePtr = new OutputPage();
    resultsPagePtr = new ResultsPage();
    convTypePagePtr = new ConvTypePage();
    convOptPagePtr = new ConvOptPage();
    subPagePtr = new SubPubPage();
    pubPagePtr = new SubPubPage();
    creationOutputPagePtr = new OutputPage();
    fileListingPagePtr = new FileListingPage();
    buildOutputPagePtr = new OutputPage();
    summaryPagePtr = new SummaryPage();
    
    currentPage = PAGE_ONE;
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(reconfigDashboardPtr, 0, 0);

    initBtns();
    
    this->setLayout(outerLayout);
}


/*void ReconfigCentralWid::handleScanBtnSlot()
{
    cout << "handleScanBtnSlot() triggered" << endl;
    currentMode = SCAN;
}


void ReconfigCentralWid::handleReconfigBtnSlot()
{
    cout << "handleReconfigBtnSlot() triggered" << endl;
    currentMode = RECONFIG;
}*/


void ReconfigCentralWid::handleBackBtnSlot()
{
    swapBackPage();
}


void ReconfigCentralWid::handleNextBtnSlot()
{
    swapNextPage();
}


void ReconfigCentralWid::handleFinishBtnSlot()
{
    //trigger mutators
}


void ReconfigCentralWid::handleHelpBntSlot()
{
    ;
}


void ReconfigCentralWid::handleCancelBtnSlot()
{
    this->close();
}

void ReconfigCentralWid::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    backBtn->setEnabled(false);
    nextBtn = new QPushButton("Next >", this);
    nextBtn->autoDefault();
    finishBtn = new QPushButton("Finish", this);
    finishBtn->setEnabled(false);
    helpBtn = new QPushButton("Help", this);
    cancelBtn = new QPushButton("Cancel", this);
    //hideBtns(true);
    
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(backBtn);
    buttonLayout->addWidget(nextBtn);
    buttonLayout->addWidget(finishBtn);
    buttonLayout->addWidget(helpBtn);
    buttonLayout->addWidget(cancelBtn);
    
    connect(backBtn, SIGNAL(released() ), this, SLOT(handleBackBtnSlot() ) );
    connect(nextBtn, SIGNAL(released() ), this, SLOT(handleNextBtnSlot() ) );
    connect(finishBtn, SIGNAL(released() ), this, SLOT(handleFinishBtnSlot() ) );
    connect(helpBtn, SIGNAL(released() ), this, SLOT(handleHelpBntSlot() ) );
    connect(cancelBtn, SIGNAL(released() ), this, SLOT(handleCancelBtnSlot() ) );
    
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void ReconfigCentralWid::swapBackPage()
{
    switch(currentPage)
    {
        case PAGE_TWO:
            unloadPage_2();
            loadPage_1();
            currentPage = PAGE_ONE;
            backBtn->setEnabled(false);
            nextBtn->setEnabled(true);
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_2();
            currentPage = PAGE_TWO;
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_3();
            currentPage = PAGE_THREE;
            /*if(currentMode == SCAN)
            {
                nextBtn->setEnabled(true);
                finishBtn->setEnabled(false);
            }*/
            break;
        case PAGE_FIVE:
            unloadPage_5();
            loadPage_4();
            currentPage = PAGE_FOUR;
            break;
        case PAGE_SIX:
            unloadPage_6();
            loadPage_5();
            currentPage = PAGE_FIVE;
            break;
        case PAGE_SEVEN:
            unloadPage_7();
            loadPage_6();
            currentPage = PAGE_SIX;
            break;
        case PAGE_EIGHT:
            unloadPage_8();
            loadPage_7();
            currentPage = PAGE_SEVEN;
            break;
        case PAGE_NINE:
            unloadPage_9();
            loadPage_8();
            currentPage = PAGE_EIGHT;
            break;
        case PAGE_TEN:
            unloadPage_10();
            loadPage_9();
            currentPage = PAGE_NINE;
            break;
        case PAGE_ELEVEN:
            unloadPage_11();
            loadPage_10();
            currentPage = PAGE_TEN;
            break;
        case PAGE_TWELVE:
            unloadPage_12();
            loadPage_11();
            currentPage = PAGE_ELEVEN;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        default:
            cerr << "ERROR in switch at: NewProjectGui::swapBackPage()" << endl;
    }
}


void ReconfigCentralWid::swapNextPage()
{
    switch(currentPage)
    {
        case PAGE_ONE:
            unloadPage_1();
            loadPage_2();
            currentPage = PAGE_TWO;
            backBtn->setEnabled(true);
            break;
        case PAGE_TWO:
            unloadPage_2();
            loadPage_3();
            currentPage = PAGE_THREE;
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_4();
            currentPage = PAGE_FOUR;
            
            if(initialSetupPagePtr->getCurrentMode() == InitialSetupPage::SCAN)
            {
                nextBtn->setEnabled(false);
                finishBtn->setEnabled(true);
            }
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_5();
            currentPage = PAGE_FIVE;
            break;
        case PAGE_FIVE:
            unloadPage_5();
            loadPage_6();
            currentPage = PAGE_SIX;
            break;
        case PAGE_SIX:
            unloadPage_6();
            loadPage_7();
            currentPage = PAGE_SEVEN;
            break;
        case PAGE_SEVEN:
            unloadPage_7();
            loadPage_8();
            currentPage = PAGE_EIGHT;
            break;
        case PAGE_EIGHT:
            unloadPage_8();
            loadPage_9();
            currentPage = PAGE_NINE;
            break;
        case PAGE_NINE:
            unloadPage_9();
            loadPage_10();
            currentPage = PAGE_TEN;
            break;
        case PAGE_TEN:
            unloadPage_10();
            loadPage_11();
            currentPage = PAGE_ELEVEN;
            break;
        case PAGE_ELEVEN:
            unloadPage_11();
            loadPage_12();
            currentPage = PAGE_TWELVE;
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
            break;
        default:
            cerr << "ERROR in switch at: NewProjectGui::swapNextPage()" << endl;
    }
}


void ReconfigCentralWid::loadPage_1()
{
    outerLayout->addWidget(reconfigDashboardPtr, 0, 0);
    reconfigDashboardPtr->setVisible(true);
    reconfigDashboardPtr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_1()
{
    outerLayout->removeWidget(reconfigDashboardPtr);
    reconfigDashboardPtr->setVisible(false);
    reconfigDashboardPtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_2()
{
    outerLayout->addWidget(initialSetupPagePtr, 0, 0);
    initialSetupPagePtr->setVisible(true);
    initialSetupPagePtr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_2()
{
    outerLayout->removeWidget(initialSetupPagePtr);
    initialSetupPagePtr->setVisible(false);
    initialSetupPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_3()
{
    outerLayout->addWidget(initialOutputPagePtr, 0, 0);
    initialOutputPagePtr->setVisible(true);
    initialOutputPagePtr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_3()
{
    outerLayout->removeWidget(initialOutputPagePtr);
    initialOutputPagePtr->setVisible(false);
    initialOutputPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_4()
{
    outerLayout->addWidget(resultsPagePtr, 0, 0);
    resultsPagePtr->setVisible(true);
    resultsPagePtr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_4()
{
    outerLayout->removeWidget(resultsPagePtr);
    resultsPagePtr->setVisible(false);
    resultsPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_5()
{
    outerLayout->addWidget(convTypePagePtr, 0, 0);
    convTypePagePtr->setVisible(true);
    convTypePagePtr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_5()
{
    outerLayout->removeWidget(convTypePagePtr);
    convTypePagePtr->setVisible(false);
    convTypePagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_6()
{
    outerLayout->addWidget(convOptPagePtr, 0, 0);
    convOptPagePtr->setVisible(true);
    convOptPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_6()
{
    outerLayout->removeWidget(convOptPagePtr);
    convOptPagePtr->setVisible(false);
    convOptPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_7()
{
    outerLayout->addWidget(subPagePtr, 0, 0);
    subPagePtr->setVisible(true);
    subPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_7()
{
    outerLayout->removeWidget(subPagePtr);
    subPagePtr->setVisible(false);
    subPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_8()
{
    outerLayout->addWidget(pubPagePtr, 0, 0);
    pubPagePtr->setVisible(true);
    pubPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_8()
{
    outerLayout->removeWidget(pubPagePtr);
    pubPagePtr->setVisible(false);
    pubPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_9()
{
    outerLayout->addWidget(creationOutputPagePtr, 0, 0);
    creationOutputPagePtr->setVisible(true);
    creationOutputPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_9()
{
    outerLayout->removeWidget(creationOutputPagePtr);
    creationOutputPagePtr->setVisible(false);
    creationOutputPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_10()
{
    outerLayout->addWidget(fileListingPagePtr, 0, 0);
    fileListingPagePtr->setVisible(true);
    fileListingPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_10()
{
    outerLayout->removeWidget(fileListingPagePtr);
    fileListingPagePtr->setVisible(false);
    fileListingPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_11()
{
    outerLayout->addWidget(buildOutputPagePtr, 0, 0);
    buildOutputPagePtr->setVisible(true);
    buildOutputPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_11()
{
    outerLayout->removeWidget(buildOutputPagePtr);
    buildOutputPagePtr->setVisible(false);
    buildOutputPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_12()
{
    outerLayout->addWidget(summaryPagePtr, 0, 0);
    summaryPagePtr->setVisible(true);
    summaryPagePtr->setEnabled(true);
}
        

void ReconfigCentralWid::unloadPage_12()
{
    outerLayout->removeWidget(summaryPagePtr);
    summaryPagePtr->setVisible(false);
    summaryPagePtr->setEnabled(false);
}


QString* ReconfigCentralWid::toString()
{
    QString* tmp = new QString();
    tmp->append("***Method stub***");
    
    return tmp;
}


ReconfigCentralWid::~ReconfigCentralWid()
{
    ;
}