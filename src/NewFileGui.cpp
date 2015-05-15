#include "NewFileGui.h"

NewFileGui::NewFileGui(QWidget* parent) : QWidget(parent)
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


void NewFileGui::handleFolderPbPtrSlot()
{
    QString dirName = folderDialogPtr->getExistingDirectory(this, tr("&Open Directory"),
            "/home",
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks);
}


void NewFileGui::initCore()
{
    fileExtsStrLstPtr->push_back("cpp");
    fileExtsStrLstPtr->push_back("c");
    fileExtCbPtr->addItems(*fileExtsStrLstPtr);
    connect(folderPbPtr, SIGNAL(released()), this, SLOT(handleFolderPbPtrSlot()));
}


void NewFileGui::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* NewFileGui::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void NewFileGui::setProjectStrPtr(QString* projectStrPtr)
{
    this->projectStrPtr = projectStrPtr;
}


QString* NewFileGui::getProjectStrPtr()
{
    return projectStrPtr;
}


void NewFileGui::setLocStrPtr(QString* locStrPtr)
{
    this->locStrPtr = locStrPtr;
}


QString* NewFileGui::getLocStrPtr()
{
    return locStrPtr;
}


void NewFileGui::setFolderStrPtr(QString* folderStrPtr)
{
    this->folderStrPtr = folderStrPtr;
}


QString* NewFileGui::getFolderStrPtr()
{
    return folderStrPtr;
}


void NewFileGui::setCreatedFileStrPtr(QString* createdFileStrPtr)
{
    this->createdFileStrPtr = createdFileStrPtr;
}


QString* NewFileGui::getCreatedFileStrPtr()
{
    return createdFileStrPtr;
}


NewFileGui::~NewFileGui()
{
    ;
}