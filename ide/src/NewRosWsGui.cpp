#include "NewRosWsGui.h"


NewRosWsGui::NewRosWsGui(QWidget* parent) : QWidget(parent)
{
    this->setWindowIcon(QIcon(RosEnv::imagesInstallLoc + "project2.jpg") );
    this->setWindowTitle("Ride");
    
    outerLayout = new QGridLayout();
    
    newRosWsPage_1Ptr = new NewRosWsPage_1();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    
    
    this->setLayout(outerLayout);
}


void NewRosWsGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewRosWsGui::handleNextBtnSlot()
{
    swapNextPage();
}


void NewRosWsGui::handleFinishBtnSlot()
{
    ;
}


void NewRosWsGui::handleHelpBntSlot()
{
    ;
}


void NewRosWsGui::handleCancelBtnSlot()
{
    this->close();
}


void NewRosWsGui::initBtns()
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
    
    outerLayout->addWidget(newRosWsPage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}
        
        
void NewRosWsGui::swapNextPage()
{
    ;
}
        
        
void NewRosWsGui::swapBackPage()
{
    ;
}
        
        
void NewRosWsGui::loadPage_1()
{
    ;
}
        
        
void NewRosWsGui::unloadPage_1()
{
    ;
}


QString* NewRosWsGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


NewRosWsGui::~NewRosWsGui()
{
    ;
}