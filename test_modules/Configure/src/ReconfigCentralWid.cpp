#include "ReconfigCentralWid.h"


ReconfigCentralWid::ReconfigCentralWid(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout();
    /*
    scanBtnPtr = new QPushButton(QIcon(RosEnv::imagesInstallLoc + "search.png"), "Scan");
    reconfigBtnPtr = new QPushButton(QIcon(RosEnv::imagesInstallLoc + "searchAndTransform.png"), "Reconfig");
    connect(scanBtnPtr, SIGNAL(released()), this, SLOT(handleScanBtnSlot()));
    connect(reconfigBtnPtr, SIGNAL(released()), this, SLOT(handleReconfigBtnSlot()));
    */
    reconfigDashboardPtr = new ReconfigDashboard();
    operationPagePtr = new OperationPage();
    reconfigPage_1Ptr = new ReconfigPage_1();
    reconfigPage_2Ptr = new ReconfigPage_2();
    reconfigPage_3Ptr = new ReconfigPage_3();
    reconfigPage_4Ptr = new ReconfigPage_4();
    reconfigPage_5Ptr = new ReconfigPage_5();
    
    currentPage = PAGE_ONE;
    
    outerLayout->addWidget(reconfigDashboardPtr/*reconfigPage_1Ptr*/, 0, 0);
    //outerLayout->addWidget(scanBtnPtr, 2, 0);
    //outerLayout->addWidget(reconfigBtnPtr, 3, 0);
    initBtns();
    
    this->setLayout(outerLayout);
}


void ReconfigCentralWid::handleScanBtnSlot()
{
    cout << "handleScanBtnSlot() triggered" << endl;
    //hideBtns(false);
}


void ReconfigCentralWid::handleReconfigBtnSlot()
{
    cout << "handleReconfigBtnSlot() triggered" << endl;
    //hideBtns(false);
}


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


/*void ReconfigCentralWid::hideBtns(bool hide)
{
    if(hide)
    {
        backBtn->setVisible(false);
        backBtn->setEnabled(false);
        nextBtn->setVisible(false);
        nextBtn->setEnabled(false);
        finishBtn->setVisible(false);
        finishBtn->setEnabled(false);
        helpBtn->setVisible(false);
        helpBtn->setEnabled(false);
        cancelBtn->setVisible(false);
        cancelBtn->setEnabled(false);
    }
    else
    {
        backBtn->setVisible(true);
        //backBtn->setEnabled(true);
        nextBtn->setVisible(true);
        nextBtn->setEnabled(true);
        finishBtn->setVisible(true);
        //finishBtn->setEnabled(true);
        helpBtn->setVisible(true);
        helpBtn->setEnabled(true);
        cancelBtn->setVisible(true);
        cancelBtn->setEnabled(true);
    }
}*/


void ReconfigCentralWid::swapBackPage()
{
    switch(currentPage)
    {
        case PAGE_TWO:
            unloadPage_2();
            loadPage_1();
            currentPage = PAGE_ONE;
            backBtn->setEnabled(false);
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
            break;
        case PAGE_FIVE:
            unloadPage_5();
            loadPage_4();
            currentPage = PAGE_FOUR;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
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
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_5();
            currentPage = PAGE_FIVE;
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
        default:
            cerr << "ERROR in switch at: NewProjectGui::swapNextPage()" << endl;
    }
}


void ReconfigCentralWid::loadPage_1()
{
    outerLayout->addWidget(reconfigDashboardPtr, 0, 0);
    reconfigDashboardPtr->setVisible(true);
    reconfigDashboardPtr->setEnabled(true);
    //reconfigPage_1Ptr->setVisible(true);
    //reconfigPage_1Ptr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_1()
{
    outerLayout->removeWidget(reconfigDashboardPtr);
    //reconfigPage_1Ptr->setVisible(false);
    //reconfigPage_1Ptr->setEnabled(false);
    reconfigDashboardPtr->setVisible(false);
    reconfigDashboardPtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_2()
{
    outerLayout->addWidget(operationPagePtr, 0, 0);
    //reconfigPage_2Ptr->setVisible(true);
    //reconfigPage_2Ptr->setEnabled(true);
    operationPagePtr->setVisible(true);
    operationPagePtr->setVisible(true);
}


void ReconfigCentralWid::unloadPage_2()
{
    outerLayout->removeWidget(operationPagePtr);
    //reconfigPage_2Ptr->setVisible(false);
    //reconfigPage_2Ptr->setEnabled(false);
    operationPagePtr->setVisible(false);
    operationPagePtr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_3()
{
    outerLayout->addWidget(reconfigPage_3Ptr, 0, 0);
    reconfigPage_3Ptr->setVisible(true);
    reconfigPage_3Ptr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_3()
{
    outerLayout->removeWidget(reconfigPage_3Ptr);
    reconfigPage_3Ptr->setVisible(false);
    reconfigPage_3Ptr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_4()
{
    outerLayout->addWidget(reconfigPage_4Ptr, 0, 0);
    reconfigPage_4Ptr->setVisible(true);
    reconfigPage_4Ptr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_4()
{
    outerLayout->removeWidget(reconfigPage_4Ptr);
    reconfigPage_4Ptr->setVisible(false);
    reconfigPage_4Ptr->setEnabled(false);
}


void ReconfigCentralWid::loadPage_5()
{
    outerLayout->addWidget(reconfigPage_5Ptr, 0, 0);
    reconfigPage_5Ptr->setVisible(true);
    reconfigPage_5Ptr->setEnabled(true);
}


void ReconfigCentralWid::unloadPage_5()
{
    outerLayout->removeWidget(reconfigPage_5Ptr);
    reconfigPage_5Ptr->setVisible(false);
    reconfigPage_5Ptr->setEnabled(false);
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