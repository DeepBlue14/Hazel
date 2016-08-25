#include "ProjPropGui.h"


ProjPropGui::ProjPropGui(QWidget* parent) : QWidget(parent)
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
    
    ProjNameStrPtr = new QString("null");
    ProjLocStrPtr = new QString("null");
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


void ProjPropGui::fillUiComponents()
{
    fileNameLePtr->setText(*ProjNameStrPtr);
    fileLocLePtr->setText(*ProjLocStrPtr);
    lastModdedLePtr->setText(*lastModdedStrPtr);

    childrenModelPtr->setRootPath(*ProjLocStrPtr);
    treeViewPtr->setModel(childrenModelPtr);
    QModelIndex idx = childrenModelPtr->index(*ProjLocStrPtr);
    treeViewPtr->setRootIndex(idx);
    treeViewPtr->show();
}


void ProjPropGui::setProjNameStrPtr(QString* fileNameStrPtr)
{
    this->ProjNameStrPtr = fileNameStrPtr;
}


QString* ProjPropGui::getProjNameStrPtr()
{
    return ProjNameStrPtr;
}


void ProjPropGui::setProjLocStrPtr(QString* fileLocStrPtr)
{
    this->ProjLocStrPtr = fileLocStrPtr;
}


QString* ProjPropGui::getProjLocStrPtr()
{
    return ProjLocStrPtr;
}


void ProjPropGui::setLastModdedStrPtr(QString* lastModdedStrPtr)
{
    this->lastModdedStrPtr = lastModdedStrPtr;
}


QString* ProjPropGui::getLastModdedStrPtr()
{
    return lastModdedStrPtr;
}


QString* ProjPropGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ProjPropGui::~ProjPropGui()
{
    ;
}