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
    
    fileNameStrPtr = new QString("newfile");
    projectStrPtr = new QString();
    locStrPtr = new QString();
    folderStrPtr = new QString();
    createdFileStrPtr = new QString();
    
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
    fileExtsStrLstPtr->push_back("cpp");
    fileExtsStrLstPtr->push_back("c");
    fileExtCbPtr->addItems(*fileExtsStrLstPtr);
    connect(folderPbPtr, SIGNAL(released()), this, SLOT(handleFolderPbPtrSlot()));
}


void NewFilePage_4::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* NewFilePage_4::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void NewFilePage_4::setProjectStrPtr(QString* projectStrPtr)
{
    this->projectStrPtr = projectStrPtr;
}


QString* NewFilePage_4::getProjectStrPtr()
{
    return projectStrPtr;
}


void NewFilePage_4::setLocStrPtr(QString* locStrPtr)
{
    this->locStrPtr = locStrPtr;
}


QString* NewFilePage_4::getLocStrPtr()
{
    return locStrPtr;
}


void NewFilePage_4::setFolderStrPtr(QString* folderStrPtr)
{
    this->folderStrPtr = folderStrPtr;
}


QString* NewFilePage_4::getFolderStrPtr()
{
    return folderStrPtr;
}


void NewFilePage_4::setCreatedFileStrPtr(QString* createdFileStrPtr)
{
    this->createdFileStrPtr = createdFileStrPtr;
}


QString* NewFilePage_4::getCreatedFileStrPtr()
{
    return createdFileStrPtr;
}


NewFilePage_4::~NewFilePage_4()
{
    ;
}