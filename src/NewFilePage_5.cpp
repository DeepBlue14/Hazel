#include "NewFilePage_5.h"

NewFilePage_5::NewFilePage_5(QWidget* parent) : QWidget(parent)
{
    fileNameLePtr = new QLineEdit();
    fileExtsStrLstPtr = new QStringList();
    fileExtCbPtr = new QComboBox();
    defaultFileExtChbPtr = new QCheckBox();
    projectLePtr = new QLineEdit();
    locCbPtr = new QComboBox();
    folderLePtr = new QLineEdit();
    folderDialogPtr = new QFileDialog();
    folderPbPtr = new QPushButton("Browse...");
    createdFileLePtr = new QLineEdit();
    
    fileNameStrPtr = new QString("NewFile");
    projectStrPtr = new QString("ProjectName");
    locStrPtr = new QString("/home/james/NetBeansProjects/ride/");
    folderStrPtr = new QString("/home/james/NetBeansProjects/ride/NewFile.cpp");
    createdFileStrPtr = new QString("");
    
    folderLayoutPtr = new QGridLayout();
    folderLayoutPtr->addWidget(folderLePtr, 0, 0);
    folderLayoutPtr->addWidget(folderPbPtr, 0, 1);
    
    formLayoutPtr = new QFormLayout();
    formLayoutPtr->addRow(tr("File &Name:"), fileNameLePtr);
    formLayoutPtr->addRow(tr("&Extension:"), fileExtCbPtr);
    formLayoutPtr->addRow(tr(""), defaultFileExtChbPtr);
    formLayoutPtr->addRow(tr("&Project:"), projectLePtr);
    formLayoutPtr->addRow(tr("Loca&tion"), locCbPtr);
    formLayoutPtr->addRow(tr("Folder"), folderLayoutPtr);
    formLayoutPtr->addRow(tr("&Created File:"), createdFileLePtr);
    
    initCore();
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addLayout(formLayoutPtr, 0, 0);
    
    this->setLayout(outerLayoutPtr);
}


void NewFilePage_5::handleFolderPbPtrSlot()
{
    QString dirName = folderDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
    
    createdFileLePtr->setText(dirName + "/" + fileNameLePtr->text() + fileExtCbPtr->currentText() );
    locStrPtr = new QString(dirName);
}


void NewFilePage_5::initCore()
{
    fileExtsStrLstPtr->push_back(".h");
    fileExtsStrLstPtr->push_back(".hpp");
    fileExtsStrLstPtr->push_back(".c");
    fileExtsStrLstPtr->push_back(".cpp");
    fileExtCbPtr->addItems(*fileExtsStrLstPtr);
    connect(folderPbPtr, SIGNAL(released()), this, SLOT(handleFolderPbPtrSlot()));
}


void NewFilePage_5::setFileNameStrPtr()
{
    if(fileNameLePtr->text() != "")
    {
        fileNameStrPtr = new QString(fileNameLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setFileNameStrPtr()" << endl;
    }
}


QString* NewFilePage_5::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void NewFilePage_5::setFileExtStrPtr()
{
    fileExtStrPtr = new QString(fileExtCbPtr->currentText() );
}


QString* NewFilePage_5::getFileExtStrPtr()
{
    return fileExtStrPtr;
}


void NewFilePage_5::setProjectStrPtr()
{
    if(projectLePtr->text() != "")
    {
        projectStrPtr = new QString(projectLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setProjectStrPtr()" << endl;
    }
}


QString* NewFilePage_5::getProjectStrPtr()
{
    return projectStrPtr;
}


void NewFilePage_5::setLocStrPtr()
{
    if(locCbPtr->currentText() != "")
    {
        cout << "LOC stub at NewFilPage_4::setLocStrPtr()" << endl;
        //this->locStrPtr = new QString(locCbPtr->currentText() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setLocStrPtr()" << endl;
    }
}


QString* NewFilePage_5::getLocStrPtr()
{
    return locStrPtr;
}


void NewFilePage_5::setFolderStrPtr()
{
    if(folderLePtr->text() != "")
    {
        folderStrPtr = new QString(folderLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setFolderStrPtr()" << endl;
    }
}


QString* NewFilePage_5::getFolderStrPtr()
{
    return folderStrPtr;
}


void NewFilePage_5::setCreatedFileStrPtr()
{
    if(createdFileLePtr->text() != "")
    {
        createdFileStrPtr = new QString(createdFileLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setCreatedFileStrPtr()" << endl;
    }
}


QString* NewFilePage_5::getCreatedFileStrPtr()
{
    return createdFileStrPtr;
}


void NewFilePage_5::triggerMutators()
{
    setFileNameStrPtr();
    setFileExtStrPtr();
    setProjectStrPtr();
    setLocStrPtr();
    setFolderStrPtr();
    setCreatedFileStrPtr();
}


QString* NewFilePage_5::toString()
{
    QString* tmp = new QString("File Name: ");
    tmp->append(getFileNameStrPtr() );
    tmp->append("\nProject Name: ");
    tmp->append(getProjectStrPtr() );
    tmp->append("\nLocation: ");
    tmp->append(getLocStrPtr() );
    tmp->append("\nFolder: ");
    tmp->append(getFolderStrPtr() );
    tmp->append("\nCreated File: ");
    tmp->append(getCreatedFileStrPtr() );
    
    return tmp;
}


NewFilePage_5::~NewFilePage_5()
{
    ;
}