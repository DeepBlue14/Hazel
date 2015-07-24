#include "FTPropertiesGui.h"


FTPropertiesGui::FTPropertiesGui(QWidget* parent) : QWidget(parent)
{
    pagesStrLstPtr = new QStringList();
    pagesStrLstPtr->append("Compiler");
    pagesStrLstPtr->append("Linker");
    pagesLwPtr = new QListWidget();
    pagesLwPtr->addItems(*pagesStrLstPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(pagesLwPtr, 0, 0, Qt::AlignLeft);
    
    this->setLayout(outerLayout);
}


FTPropertiesGui::~FTPropertiesGui()
{
    ;
}