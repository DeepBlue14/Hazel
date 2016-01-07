#include "DirPropGui.h"


DirPropGui::DirPropGui(QWidget* parent) : QWidget(parent)
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
    
    dirNameStrPtr = new QString("null");
    dirLocStrPtr = new QString("null");
    lastModdedStrPtr = new QString("null");
    
    childrenModelPtr = new QFileSystemModel();
    treeViewPtr = new QTreeView();
    okBtnPtr = new QPushButton("OK");
        
    outerLayout = new QGridLayout();
    outerLayout->addWidget(fileNameLblPtr, 0, 0, Qt::AlignLeft);
    outerLayout->addWidget(fileNameLePtr, 0, 1);
    outerLayout->addWidget(fileLocLblPtr, 1, 0, Qt::AlignLeft);
    outerLayout->addWidget(fileLocLePtr, 1, 1);
    outerLayout->addWidget(lastModdedLblPtr, 2, 0, Qt::AlignLeft);
    outerLayout->addWidget(lastModdedLePtr, 2, 1);
    
    QGridLayout* trueOuterLayout = new QGridLayout();
    trueOuterLayout->addLayout(outerLayout, 0, 0, Qt::AlignLeft);
    trueOuterLayout->addWidget(treeViewPtr, 0, 1, 3, 1);
    
    this->setLayout(trueOuterLayout);
}


void DirPropGui::fillUiComponents()
{
    fileNameLePtr->setText(*dirNameStrPtr);
    fileLocLePtr->setText(*dirLocStrPtr);
    lastModdedLePtr->setText(*lastModdedStrPtr);

    childrenModelPtr->setRootPath(*dirLocStrPtr);
    treeViewPtr->setModel(childrenModelPtr);
    QModelIndex idx = childrenModelPtr->index(*dirLocStrPtr);
    treeViewPtr->setRootIndex(idx);
    treeViewPtr->show();
}


void DirPropGui::setDirNameStrPtr(QString* fileNameStrPtr)
{
    this->dirNameStrPtr = fileNameStrPtr;
}


QString* DirPropGui::getDirNameStrPtr()
{
    return dirNameStrPtr;
}


void DirPropGui::setDirLocStrPtr(QString* fileLocStrPtr)
{
    this->dirLocStrPtr = fileLocStrPtr;
}


QString* DirPropGui::getDirLocStrPtr()
{
    return dirLocStrPtr;
}


void DirPropGui::setLastModdedStrPtr(QString* lastModdedStrPtr)
{
    this->lastModdedStrPtr = lastModdedStrPtr;
}


QString* DirPropGui::getLastModdedStrPtr()
{
    return lastModdedStrPtr;
}


QString* DirPropGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


DirPropGui::~DirPropGui()
{
    ;
}