#include "OptionGui.h"


OptionGui::OptionGui(QWidget* parent) : QWidget(parent)
{
    optionPage_1Ptr = new OptionPage_1();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(optionPage_1Ptr, 0, 0, Qt::AlignCenter);
    initBtns();
    
    this->setLayout(outerLayout);
}


void OptionGui::handleOkBtnSlot()
{
    ;
}


void OptionGui::handleApplyBtnSlot()
{
    ;
}


void OptionGui::handleCancelBtnSlot()
{
    ;
}


void OptionGui::handleHelpBtnSlot()
{
    ;
}


void OptionGui::initBtns()
{
    okBtn = new QPushButton("OK");
    applyBtn = new QPushButton("Apply");
    cancelBtn = new QPushButton("Cancel");
    helpBtn = new QPushButton("Help");
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(okBtn);
    buttonLayout->addWidget(applyBtn);
    buttonLayout->addWidget(cancelBtn);
    buttonLayout->addWidget(helpBtn);
    
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignRight);
}


OptionGui::~OptionGui()
{
    ;
}