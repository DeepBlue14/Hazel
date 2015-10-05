#include "FilePropGui.h"


FilePropGui::FilePropGui(QWidget* parent) : QWidget(parent)
{
    fileNameLblPtr = new QLabel("File name:");
    fileLocLblPtr = new QLabel("File location:");
    lastModdedLblPtr = new QLabel("Last modified:");
    fileNameLePtr = new QLineEdit();
    fileLocLePtr = new QLineEdit();
    lastModdedLePtr = new QLineEdit();
    
    fileNameStrPtr = new QString();
    fileLocStrPtr = new QString();
    lastModdedStrPtr = new QString();
        
    okBtnPtr = new QPushButton("OK");
        
    outerLayout = new QGridLayout();
    outerLayout->addWidget(fileNameLblPtr, 0, 0, Qt::AlignLeft);
    outerLayout->addWidget(fileNameLePtr, 0, 1);
    outerLayout->addWidget(fileLocLblPtr, 1, 0, Qt::AlignLeft);
    outerLayout->addWidget(fileLocLePtr, 1, 1);
    outerLayout->addWidget(lastModdedLblPtr, 2, 0, Qt::AlignLeft);
    outerLayout->addWidget(lastModdedLePtr, 2, 1);
    
    this->setLayout(outerLayout);
}


void FilePropGui::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* FilePropGui::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void FilePropGui::setFileLocStrPtr(QString* fileLocStrPtr)
{
    this->fileLocStrPtr = fileLocStrPtr;
}


QString* FilePropGui::getFileLocStrPtr()
{
    return fileLocStrPtr;
}


void FilePropGui::setLastModdedStrPtr(QString* lastModdedStrPtr)
{
    this->lastModdedStrPtr = lastModdedStrPtr;
}


QString* FilePropGui::getLastModdedStrPtr()
{
    return lastModdedStrPtr;
}


QString* FilePropGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


FilePropGui::~FilePropGui()
{
    ;
}