#include <qt4/QtCore/qstring.h>

#include "NewProjectPage_2.h"


NewProjectPage_2::NewProjectPage_2(QWidget* parent) : QWidget(parent)
{
    projectNameStrPtr = new QString("");
    projectLocStrPtr = new QString("");
    projectTypeStrPtr = new QString("");
        
    projectNameLePtr = new QLineEdit(this);
    projectLocLePtr = new QLineEdit(this);
    dirDialogPtr = new QFileDialog(this);
    locPbPtr = new QPushButton("Select", this);
    
    connect(locPbPtr, SIGNAL(released()), this, SLOT(handleLocPbPtrSlot()));
    
    locationLayout = new QGridLayout();
    locationLayout->addWidget(projectLocLePtr, 0, 0);
    locationLayout->addWidget(locPbPtr, 0, 1);
    
    formLayout = new QFormLayout(this);
    formLayout->addRow(tr("&Package Name"), projectNameLePtr);
    formLayout->addRow(tr("Package Location"), locationLayout);
    
    projectTypeStrList = new QStringList();
    projectTypeStrList->push_back("C/C++");
    projectTypeStrList->push_back("Python");
    projectTypeStrList->push_back("Java");
    projectTypeStrList->push_back("Lisp");
    
    projectTypeLwPtr = new QListWidget(this);
    projectTypeLwPtr->addItems(*projectTypeStrList);
    formLayout->addRow(tr("&Type"), projectTypeLwPtr);
    
    this->setLayout(formLayout);
}


void NewProjectPage_2::handleLocPbPtrSlot()
{
    QString dirName = dirDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
}


void NewProjectPage_2::setProjectNameStrPtr()
{
    if(projectNameLePtr->text() != "")
    {
        projectNameStrPtr = new QString(projectNameLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewProjectPage_2::setProjectNameStrPtr()" << endl;
    }
}


QString* NewProjectPage_2::getProjectNameStrPtr()
{
    return projectNameStrPtr;
}


void NewProjectPage_2::setProjectLocStrPtr()
{
    if(projectLocLePtr->text() != "")
    {
        projectLocStrPtr = new QString(projectLocLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewProjectPage_2::setProjectLocStrPtr()" << endl;
    }
}


QString* NewProjectPage_2::getProjectLocStrPtr()
{
    return projectLocStrPtr;
}


void NewProjectPage_2::setProjectTypeStrPtr()
{
    if(projectTypeLwPtr->selectedItems().size() != 0)
    {
        projectTypeStrPtr = new QString(projectTypeLwPtr->currentItem()->text() );
    }
    else
    {
        cerr << "Invalid input at NewProjectPage_2::setProjectTypeStrPtr()" << endl;
    }
}


QString* NewProjectPage_2::getProjectTypeStrPtr()
{
    return projectTypeStrPtr;
}


QString* NewProjectPage_2::toString()
{
    QString* tmp = new QString("Project Name: ");
    tmp->append(getProjectNameStrPtr() );
    tmp->append("\nProject Location: ");
    tmp->append(getProjectLocStrPtr() );
    tmp->append("\nProject Type: ");
    tmp->append(getProjectTypeStrPtr() );
    
    return tmp;
}


void NewProjectPage_2::triggerMutators()
{
    setProjectNameStrPtr();
    setProjectLocStrPtr();
    setProjectTypeStrPtr();
}


NewProjectPage_2::~NewProjectPage_2()
{
    ;
}