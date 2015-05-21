#include "NewFilePage_4.h"

NewFilePage_4::NewFilePage_4(QWidget* parent) : QWidget(parent)
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
    
    fileNameStrPtr = new QString("");
    projectStrPtr = new QString("");
    locStrPtr = new QString("");
    folderStrPtr = new QString("");
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


void NewFilePage_4::handleFolderPbPtrSlot()
{
    QString dirName = folderDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
}


void NewFilePage_4::initCore()
{
    fileExtsStrLstPtr->push_back(".h");
    fileExtsStrLstPtr->push_back(".hpp");
    fileExtsStrLstPtr->push_back(".c");
    fileExtsStrLstPtr->push_back(".cpp");
    fileExtCbPtr->addItems(*fileExtsStrLstPtr);
    connect(folderPbPtr, SIGNAL(released()), this, SLOT(handleFolderPbPtrSlot()));
}


void NewFilePage_4::setFileNameStrPtr()
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


QString* NewFilePage_4::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void NewFilePage_4::setFileExtStrPtr()
{
    fileExtStrPtr = fileExtCbPtr->currentText();
}


QString NewFilePage_4::getFileExtStrPtr()
{
    return fileExtStrPtr;
}


void NewFilePage_4::setProjectStrPtr()
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


QString* NewFilePage_4::getProjectStrPtr()
{
    return projectStrPtr;
}


void NewFilePage_4::setLocStrPtr()
{
    if(locCbPtr->currentText() != "")
    {
        this->locStrPtr = new QString(locCbPtr->currentText() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_4::setLocStrPtr()" << endl;
    }
}


QString* NewFilePage_4::getLocStrPtr()
{
    return locStrPtr;
}


void NewFilePage_4::setFolderStrPtr()
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


QString* NewFilePage_4::getFolderStrPtr()
{
    return folderStrPtr;
}


void NewFilePage_4::setCreatedFileStrPtr()
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


QString* NewFilePage_4::getCreatedFileStrPtr()
{
    return createdFileStrPtr;
}


void NewFilePage_4::triggerMutators()
{
    setFileNameStrPtr();
    setProjectStrPtr();
    setLocStrPtr();
    setFolderStrPtr();
    setCreatedFileStrPtr();
}


QString* NewFilePage_4::toString()
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


NewFilePage_4::~NewFilePage_4()
{
    ;
}