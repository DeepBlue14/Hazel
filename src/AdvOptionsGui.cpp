#include "AdvOptionsGui.h"


AdvOptionsGui::AdvOptionsGui(QWidget* parent) : QWidget(parent)
{
    QStringList* optionsStrLstPtr = new QStringList();
    optionsStrLstPtr->push_back("ROS");
    optionsStrLstPtr->push_back("C/C++ Compiler");
    optionsStrLstPtr->push_back("Linker");
    optionsStrLstPtr->push_back("Python Interpreter");
    optionsStrLstPtr->push_back("Run");
    optionsLwPtr = new QListWidget();
    optionsLwPtr->addItems(*optionsStrLstPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(optionsLwPtr, 0, 0, Qt::AlignLeft);
    
    initBtns();
    
    this->setLayout(outerLayout);
}


void AdvOptionsGui::handleOkBtnSlot()
{
    
}


void AdvOptionsGui::handleCancelBtnSlot()
{
    
}


void AdvOptionsGui::handleApplyBtnSlot()
{
    
}


void AdvOptionsGui::handleHelpBtnSlot()
{
    
}


void AdvOptionsGui::initBtns()
{
    okBtn = new QPushButton("OK");
    cancelBtn = new QPushButton("Cancel");
    applyBtn = new QPushButton("Apply");
    helpBtn = new QPushButton("Help");
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(okBtn);
    buttonLayout->addWidget(cancelBtn);
    buttonLayout->addWidget(applyBtn);
    buttonLayout->addWidget(helpBtn);
    
    connect(okBtn, SIGNAL(released() ), this, SLOT(handleOkBtnSlot() ) );
    connect(cancelBtn, SIGNAL(released() ), this, SLOT(handleCancelBtnSlot() ) );
    connect(applyBtn, SIGNAL(released() ), this, SLOT(handleapplyBtnSlot() ) );
    connect(helpBtn, SIGNAL(released() ), this, SLOT(handleHelpBtnSlot() ) );
    
    //outerLayout->addWidget(advOptPage_1, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


QString* AdvOptionsGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


AdvOptionsGui::~AdvOptionsGui()
{
    ;
}