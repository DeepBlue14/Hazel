#include "NewWorkspacePage_2.h"


NewWorkspacePage_2::NewWorkspacePage_2(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select for package generation</b>");
    
    workspaceNameStrPtr = new QString("null");
    workspaceLocStrPtr = new QString("null");
    //workspaceTypeStrPtr = new QString("null");
        
    workspaceNameLePtr = new QLineEdit(this);
    workspaceLocLePtr = new QLineEdit(this);
    dirDialogPtr = new QFileDialog(this);
    locPbPtr = new QPushButton("Select", this);
    
    connect(locPbPtr, SIGNAL(released()), this, SLOT(handleLocPbPtrSlot()));
    
    locationLayout = new QGridLayout();
    locationLayout->addWidget(workspaceLocLePtr, 0, 0);
    locationLayout->addWidget(locPbPtr, 0, 1);
    
    formLayout = new QFormLayout(this);
    formLayout->addWidget(titlePtr);
    formLayout->addRow(tr("&Workspace Name"), workspaceNameLePtr);
    formLayout->addRow(tr("Workspace Location"), locationLayout);
    
    verifyCbPtr = new QCheckBox();
    
    formLayout->addRow(tr("&Verify"), verifyCbPtr);
    
    this->setLayout(formLayout);
}


void NewWorkspacePage_2::handleLocPbPtrSlot()
{
    QString dirName = dirDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
    
    workspaceLocLePtr->setText(dirName);
}


void NewWorkspacePage_2::setWorkspaceNameStrPtr()
{
    if(workspaceNameLePtr->text() != "")
    {
        workspaceNameStrPtr = new QString(workspaceNameLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_2::setWorkspaceNameStrPtr()" << endl;
    }
}


QString* NewWorkspacePage_2::getWorkspaceNameStrPtr()
{
    return workspaceNameStrPtr;
}


void NewWorkspacePage_2::setWorkspaceLocStrPtr()
{ cout << "*** " << workspaceLocLePtr->text().toStdString() << " ***" << endl;
    if(workspaceLocLePtr->text() != "")
    {
        workspaceLocStrPtr = new QString(workspaceLocLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_2::setWorkspaceLocStrPtr()" << endl;
    }
}


QString* NewWorkspacePage_2::getWorkspaceLocStrPtr()
{
    return workspaceLocStrPtr;
}


QString* NewWorkspacePage_2::toString()
{
    QString* tmp = new QString("Workspace Name: ");
    tmp->append(getWorkspaceNameStrPtr() );
    tmp->append("\nWorkspace Location: ");
    tmp->append(getWorkspaceLocStrPtr() );
    //tmp->append("Verify? ");
    
    
    return tmp;
}


void NewWorkspacePage_2::triggerMutators()
{
    setWorkspaceNameStrPtr();
    setWorkspaceLocStrPtr();
    //setWorkspaceTypeStrPtr();
}


NewWorkspacePage_2::~NewWorkspacePage_2()
{
    ;
}
