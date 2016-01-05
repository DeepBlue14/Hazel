#include "HelpGui.h"


HelpGui::HelpGui(QWidget* parent) : QWidget(parent)
{
    helpPage_1Ptr = new HelpPage_1();
    helpPage_2Ptr = new HelpPage_2();
    helpPage_3Ptr = new HelpPage_3();
    helpPage_4Ptr = new HelpPage_4();

    currentPage = PAGE_ONE;

    outerLayout = new QGridLayout();
    
    initBtns();

    this->setLayout(outerLayout);
}


void HelpGui::handleBackBtnSlot()
{
    ;
}


void HelpGui::handleNextBtnSlot()
{
    ;
}


void HelpGui::handleFinishBtnSlot()
{
    ;
}


void HelpGui::handleHelpBntSlot()
{
    ;
}


void HelpGui::handleCancelBtnSlot()
{
    ;
}


void HelpGui::initBtns()
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

    outerLayout->addWidget(helpPage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void HelpGui::swapNextPage()
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
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
        default:
            cerr << "ERROR in switch at: HelpGui::swapBackPage()" << endl;
    }
}


void HelpGui::swapBackPage()
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
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
        default:
            cerr << "ERROR in switch at: HelpGui::swapNextPage()" << endl;
    }
}


void HelpGui::loadPage_1()
{
    outerLayout->addWidget(helpPage_1Ptr, 0, 0);
    helpPage_1Ptr->setVisible(true);
    helpPage_1Ptr->setEnabled(true);
}


void HelpGui::unloadPage_1()
{
    outerLayout->removeWidget(helpPage_1Ptr);
    helpPage_1Ptr->setVisible(false);
    helpPage_1Ptr->setEnabled(false);
}


void HelpGui::loadPage_2()
{
    outerLayout->addWidget(helpPage_2Ptr, 0, 0);
    helpPage_2Ptr->setVisible(true);
    helpPage_2Ptr->setEnabled(true);
}


void HelpGui::unloadPage_2()
{
    outerLayout->removeWidget(helpPage_2Ptr);
    helpPage_2Ptr->setVisible(false);
    helpPage_2Ptr->setEnabled(false);
}


void HelpGui::loadPage_3()
{
    outerLayout->addWidget(helpPage_3Ptr, 0, 0);
    helpPage_3Ptr->setVisible(true);
    helpPage_3Ptr->setEnabled(true);
}


void HelpGui::unloadPage_3()
{
    outerLayout->removeWidget(helpPage_3Ptr);
    helpPage_3Ptr->setVisible(false);
    helpPage_3Ptr->setEnabled(false);
}


void HelpGui::loadPage_4()
{
    outerLayout->addWidget(helpPage_4Ptr, 0, 0);
    helpPage_4Ptr->setVisible(true);
    helpPage_4Ptr->setEnabled(true);
}


void HelpGui::unloadPage_4()
{
    outerLayout->removeWidget(helpPage_4Ptr);
    helpPage_4Ptr->setVisible(false);
    helpPage_4Ptr->setEnabled(false);
}


QString* HelpGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


HelpGui::~HelpGui()
{
    ;
}