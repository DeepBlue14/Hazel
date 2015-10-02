#include "RunSetupGui.h"


RunSetupGui::RunSetupGui(QWidget* parent) : QWidget(parent)
{
    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/ride/images/project2.jpg") );
    this->setWindowTitle("Ride");
    
    outerLayoutPtr = new QGridLayout();
    runPage_1Ptr = new RunSetupPage_1();
    runPage_2Ptr = new RunSetupPage_2();
    runPage_3Ptr = new RunSetupPage_3();
    
    currentPage = PAGE_ONE;

    initBtns();
    
    this->setLayout(outerLayoutPtr);
}


void RunSetupGui::handleBackBtnSlot()
{
    swapBackPage();
}


void RunSetupGui::handleNextBtnSlot()
{
    swapNextPage();
}


void RunSetupGui::handleFinishBtnSlot()
{
    if(*runPage_1Ptr->getRunOptionPtr() == "Launch File")
    {
        setLaunchFilePathStrPtr(runPage_2Ptr->getLaunchFileStrPtr() );
    }
    else if (*runPage_1Ptr->getRunOptionPtr() == "Individual Nodes")
    {
        cerr << "setting run node stuff has not been done" << endl;
    }
    else
    {
        cerr << "Invalid option at RunGui::handleFinishBtnSlot()" << endl;
    }
}


void RunSetupGui::handleHelpBntSlot()
{
    ;
}


void RunSetupGui::handleCancelBtnSlot()
{
    this->close();
}


void RunSetupGui::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    backBtn->setEnabled(false);
    nextBtn = new QPushButton("Next >", this);
    finishBtn = new QPushButton("Finish", this);
    finishBtn->setEnabled(false);
    helpBtn = new QPushButton("Help", this);
    cancelBtn = new QPushButton("Cancel", this);
    
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
    
    outerLayoutPtr->addWidget(runPage_1Ptr, 0, 0);
    outerLayoutPtr->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void RunSetupGui::reset()
{
    if(currentPage != PAGE_ONE)
    {
        swapBackPage();    
    }
}


void RunSetupGui::setLaunchFilePathStrPtr(QString* launchFilePathStrPtr)
{
    this->launchFilePathStrPtr = launchFilePathStrPtr;
}


QString* RunSetupGui::getLaunchFilePathStrPtr()
{
    return launchFilePathStrPtr;
}


void RunSetupGui::swapBackPage()
{
    switch(currentPage)
    {
        case PAGE_TWO:
            unloadPage_2();
            loadPage_1();
            currentPage = PAGE_ONE;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_1();
            currentPage = PAGE_ONE;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapBackPage()" << endl;
    }
}


void RunSetupGui::swapNextPage()
{
    switch(currentPage)
    {
        case PAGE_ONE:
            unloadPage_1();
            
            if(*runPage_1Ptr->getRunOptionPtr() == "Launch File")
            {
                loadPage_2();
                currentPage = PAGE_TWO;
                
                backBtn->setEnabled(true);
                nextBtn->setEnabled(false);
                finishBtn->setEnabled(true);
            }
            else if (*runPage_1Ptr->getRunOptionPtr() == "Individual Nodes")
            {
                loadPage_3();
                currentPage = PAGE_THREE;
                
                backBtn->setEnabled(true);
                nextBtn->setEnabled(false);
                finishBtn->setEnabled(true);
            }
            else
            {
                cerr << "Error at RunGui::SwapNextPage(); " << runPage_1Ptr->getRunOptionPtr()->toStdString() << endl;
            }
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapNextPage()" << endl;
    }
}


void RunSetupGui::loadPage_1()
{
    outerLayoutPtr->addWidget(runPage_1Ptr, 0, 0);
    runPage_1Ptr->setVisible(true);
    runPage_1Ptr->setEnabled(true);
}


void RunSetupGui::unloadPage_1()
{
    outerLayoutPtr->removeWidget(runPage_1Ptr);
    runPage_1Ptr->setVisible(false);
    runPage_1Ptr->setEnabled(false);
}


void RunSetupGui::loadPage_2()
{
    outerLayoutPtr->addWidget(runPage_2Ptr, 0, 0);
    runPage_2Ptr->setVisible(true);
    runPage_2Ptr->setEnabled(true);
}


void RunSetupGui::unloadPage_2()
{
    outerLayoutPtr->removeWidget(runPage_2Ptr);
    runPage_2Ptr->setVisible(false);
    runPage_2Ptr->setEnabled(false);
}


void RunSetupGui::loadPage_3()
{
    outerLayoutPtr->addWidget(runPage_3Ptr, 0, 0);
    runPage_3Ptr->setVisible(true);
    runPage_3Ptr->setEnabled(true);
}


void RunSetupGui::unloadPage_3()
{
    outerLayoutPtr->removeWidget(runPage_3Ptr);
    runPage_3Ptr->setVisible(false);
    runPage_3Ptr->setEnabled(false);
}


RunSetupPage_1* RunSetupGui::getRunPage_1Ptr()
{
    return runPage_1Ptr;
}


RunSetupPage_2* RunSetupGui::getRunPage_2Ptr()
{
    return runPage_2Ptr;
}


RunSetupPage_3* RunSetupGui::getRunPage_3Ptr()
{
    return runPage_3Ptr;
}


QString* RunSetupGui::toString()
{
    QString* tmp = new QString("RunGui");
    
    return tmp;
}


RunSetupGui::~RunSetupGui()
{
    ;
}