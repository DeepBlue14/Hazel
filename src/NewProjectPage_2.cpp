#include "NewProjectPage_2.h"


NewProjectPage_2::NewProjectPage_2(QWidget* parent) : QWidget(parent)
{
    projectNameStrPtr = new QString("");
    projectLocStrPtr = new QString("NULL");
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
    
    projectTypeLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    projectTypeLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/project201.png"), "C/C++"));
    projectTypeLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/project201.png"), "Python"));
    projectTypeLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/project201.png"), "Java"));
    projectTypeLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/project201.png"), "Lisp"));
    
    projectTypeLwPtr = new QListWidget(this);
    for(size_t i = 0; i < projectTypeLstWidItemPtrVecPtr->size(); i++)
    {
        projectTypeLwPtr->addItem(projectTypeLstWidItemPtrVecPtr->at(i) );
    }
    formLayout->addRow(tr("&Type"), projectTypeLwPtr);
    
    this->setLayout(formLayout);
}


void NewProjectPage_2::handleLocPbPtrSlot()
{
    QString dirName = dirDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
    
    projectLocLePtr->setText(dirName);
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
{ cout << "*** " << projectLocLePtr->text().toStdString() << " ***" << endl;
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