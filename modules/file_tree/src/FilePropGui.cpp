#include "FilePropGui.h"


FilePropGui::FilePropGui(QWidget* parent) : QWidget(parent)
{
    fileNameLblPtr = new QLabel("File name:");
    fileLocLblPtr = new QLabel("File location:");
    lastModdedLblPtr = new QLabel("Last modified:");
    
    fileNameLePtr = new QLineEdit();
    fileNameLePtr->setEnabled(false);
    fileLocLePtr = new QLineEdit();
    fileLocLePtr->setEnabled(false);
    lastModdedLePtr = new QLineEdit();
    lastModdedLePtr->setEnabled(false);
    
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


void FilePropGui::fillUiComponents()
{
    cout << "setting text: 2" << fileNameStrPtr->toStdString() << endl;
    fileNameLePtr->setText(*fileNameStrPtr);
    fileLocLePtr->setText(*fileLocStrPtr);
    updateLastModded(); //need to update, in case the file was modified after this object was init'ed
    lastModdedLePtr->setText(*lastModdedStrPtr);
    
}


void FilePropGui::setFileNameStrPtr(QString* fileNameStrPtr)
{
    cout << "setting text: 1" << fileNameStrPtr->toStdString() << endl;
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


void FilePropGui::updateLastModded()
{
    QFileInfo info(*fileLocStrPtr);
    this->setLastModdedStrPtr(new QString(info.lastModified().toString()) );
    cout << "date: " << info.lastModified().toString().toStdString() << endl;
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