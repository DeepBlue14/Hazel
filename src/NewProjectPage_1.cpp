#include <qt4/QtGui/qlabel.h>
#include <qt4/QtGui/qlineedit.h>

#include "NewProjectPage_1.h"


NewProjectPage_1::NewProjectPage_1(QWidget* parent) : QWidget(parent)
{
    projectNameLePtr = new QLineEdit(this);
    projectLocationLePtr = new QLineEdit(this);
    formLayout = new QFormLayout(this);
    formLayout->addRow(tr("&Package Name"), projectNameLePtr);
    formLayout->addRow(tr("&Package Location"), projectLocationLePtr);
    
    projectTypeStrList = new QStringList();
    projectTypeStrList->push_back("C/C++");
    projectTypeStrList->push_back("Python");
    projectTypeStrList->push_back("Java");
    projectTypeStrList->push_back("Lisp");
    
    projectTypeLw = new QListWidget(this);
    projectTypeLw->addItems(*projectTypeStrList);
    formLayout->addRow(tr("&Type"), projectTypeLw);
    
    this->setLayout(formLayout);
}


NewProjectPage_1::~NewProjectPage_1()
{
    ;
}