#include "OpenProjectGui.h"


OpenProjectGui::OpenProjectGui(QWidget* parent) : QWidget(parent)
{
    projectLePtr = new QLineEdit();
    projectFileDialogPtr = new QFileDialog();
    fileDialogPbPtr = new QPushButton("Select...");
    openProjectPbPtr = new QPushButton(tr("&Open Project"));
    cancelPbPtr = new QPushButton("Cancel");
    buttonLayoutPtr = new QHBoxLayout();
    buttonLayoutPtr->addWidget(openProjectPbPtr);
    buttonLayoutPtr->addWidget(cancelPbPtr);
    
    connect(fileDialogPbPtr, SIGNAL(released()), this, SLOT(handleFileDialogPbPtrSlot()));
    connect(openProjectPbPtr, SIGNAL(released()), this, SLOT(handleOpenProjectPbPtrSlot()));
    connect(cancelPbPtr, SIGNAL(released()), this, SLOT(handleCancelPbPtrSlot()));
    
    projectStrPtr = new QString();
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(projectLePtr, 0, 0);
    outerLayoutPtr->addWidget(fileDialogPbPtr, 0, 1);
    outerLayoutPtr->addLayout(buttonLayoutPtr, 1, 1, Qt::AlignRight);
    
    this->setLayout(outerLayoutPtr);
}


void OpenProjectGui::handleFileDialogPbPtrSlot()
{
    QString fileName = projectFileDialogPtr->getExistingDirectory(this, tr("&Open Directory"), "/home");
    projectLePtr->setText(fileName);
}


void OpenProjectGui::handleOpenProjectPbPtrSlot()
{
    setProjectStrPtr(new QString(projectLePtr->text() ) );
    this->close();
    FileTreeGui::setProjectRootAbsPathStrPtr(getProjectStrPtr() );
    FileTreeGui::refresh();
}


void OpenProjectGui::handleCancelPbPtrSlot()
{
    projectLePtr->setText("");
    setProjectStrPtr(new QString("") );
    this->close();
}


void OpenProjectGui::setProjectStrPtr(QString* projectStrPtr)
{
    this->projectStrPtr = projectStrPtr;
}


QString* OpenProjectGui::getProjectStrPtr()
{
    return projectStrPtr;
}


OpenProjectGui::~OpenProjectGui()
{
    ;
}