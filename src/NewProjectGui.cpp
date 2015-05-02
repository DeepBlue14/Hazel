#include "NewProjectGui.h"


NewProjectGui::NewProjectGui(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QGridLayout(this);
    
    initProjectTypeLw();
    initBtns();
    
    this->setLayout(outerLayout);
}


void NewProjectGui::initProjectTypeLw()
{   
    projectTypeStrList = new QStringList();
    projectTypeStrList->push_back("C/C++");
    projectTypeStrList->push_back("Python");
    projectTypeStrList->push_back("Java");
    projectTypeStrList->push_back("Lisp");
    
    projectTypeLw = new QListWidget(this);
    projectTypeLw->addItems(*projectTypeStrList);
    
    outerLayout->addWidget(projectTypeLw, 0, 0, Qt::AlignCenter);
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