#include "NewProjectGui.h"


NewProjectGui::NewProjectGui(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout(this);
    
    initProjectTypeCb();
    initBtns();
    
    this->setLayout(outerLayout);
}


void NewProjectGui::initProjectTypeCb()
{   
    projectTypeStrList = new QStringList();
    projectTypeStrList->push_back("C/C++");
    projectTypeStrList->push_back("Python");
    projectTypeStrList->push_back("Java");
    projectTypeStrList->push_back("Lisp");
    
    projectTypeCb = new QComboBox(this);
    projectTypeCb->addItems(*projectTypeStrList);
    projectTypeCb->setMaxVisibleItems(5);
    
    outerLayout->addWidget(projectTypeCb, 0, 0, Qt::AlignCenter);
}


void NewProjectGui::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    nextBtn = new QPushButton("Next >", this);
    finishBtn = new QPushButton("Finish", this);
    helpBtn = new QPushButton("Help", this);
    cancelBtn = new QPushButton("Cancel", this);
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(backBtn);
    buttonLayout->addWidget(nextBtn);
    buttonLayout->addWidget(finishBtn);
    buttonLayout->addWidget(helpBtn);
    buttonLayout->addWidget(cancelBtn);
    
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


NewProjectGui::~NewProjectGui()
{
    ;
}