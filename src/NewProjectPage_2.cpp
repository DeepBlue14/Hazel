#include "NewProjectPage_2.h"


NewProjectPage_2::NewProjectPage_2(QWidget* parent) : QWidget(parent)
{
    projectNameLePtr = new QLineEdit(this);
    projectLocationLePtr = new QLineEdit(this);
    dirDialogPtr = new QFileDialog(this);
    locPbPtr = new QPushButton("Select", this);
    
    connect(locPbPtr, SIGNAL(released()), this, SLOT(handleLocPbPtrSlot()));
    
    locationLayout = new QGridLayout();
    locationLayout->addWidget(projectLocationLePtr, 0, 0);
    locationLayout->addWidget(locPbPtr, 0, 1);
    
    formLayout = new QFormLayout(this);
    formLayout->addRow(tr("&Package Name"), projectNameLePtr);
    formLayout->addRow(tr("Package Location"), locationLayout);
    
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


void NewProjectPage_2::handleLocPbPtrSlot()
{
    QString dirName = dirDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
}


NewProjectPage_2::~NewProjectPage_2()
{
    ;
}