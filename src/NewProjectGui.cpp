#include "NewProjectGui.h"


NewProjectGui::NewProjectGui(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout(this);
    newProjectPage_1Ptr = new NewProjectPage_1();
    newProjectPage_2Ptr = new NewProjectPage_2();
    newProjectPage_3Ptr = new NewProjectPage_3();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    this->setLayout(outerLayout);
    /*
    //--------------------------------------------------------------------------
    QFile file("/home/james/NetBeansProjects/Hazel/src/qss/Dark.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    backBtn->setStyleSheet(styleSheet);
    //--------------------------------------------------------------------------
    */
}


void NewProjectGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewProjectGui::handleNextBtnSlot()
{
    swapNextPage();
}


void NewProjectGui::handleFinishBtnSlot()
{
    ;
}


void NewProjectGui::handleHelpBntSlot()
{
    ;
}


void NewProjectGui::handleCancelBtnSlot()
{
    this->close();
}


void NewProjectGui::initBtns()
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
    
    outerLayout->addWidget(newProjectPage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void NewProjectGui::swapBackPage()
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
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        default:
            cerr << "ERROR in switch at: NewProjectGui::swapBackPage()" << endl;
    }
}


void NewProjectGui::swapNextPage()
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
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
            break;
        default:
            cerr << "ERROR in switch at: NewProjectGui::swapNextPage()" << endl;
    }
}


void NewProjectGui::loadPage_1()
{
    outerLayout->addWidget(newProjectPage_1Ptr, 0, 0);
    newProjectPage_1Ptr->setVisible(true);
    newProjectPage_1Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_1()
{
    outerLayout->removeWidget(newProjectPage_1Ptr);
    newProjectPage_1Ptr->setVisible(false);
    newProjectPage_1Ptr->setEnabled(false);
}


void NewProjectGui::loadPage_2()
{
    outerLayout->addWidget(newProjectPage_2Ptr, 0, 0);
    newProjectPage_2Ptr->setVisible(true);
    newProjectPage_2Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_2()
{
    outerLayout->removeWidget(newProjectPage_2Ptr);
    newProjectPage_2Ptr->setVisible(false);
    newProjectPage_2Ptr->setEnabled(false);
}


void NewProjectGui::loadPage_3()
{
    outerLayout->addWidget(newProjectPage_3Ptr, 0, 0);
    newProjectPage_3Ptr->setVisible(true);
    newProjectPage_3Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_3()
{
    outerLayout->removeWidget(newProjectPage_3Ptr);
    newProjectPage_3Ptr->setVisible(false);
    newProjectPage_3Ptr->setEnabled(false);
}


NewProjectGui::~NewProjectGui()
{
    ;
}