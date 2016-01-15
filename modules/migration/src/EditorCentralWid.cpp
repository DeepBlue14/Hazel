#include "EditorCentralWid.h"


EditorCentralWid::EditorCentralWid(QWidget* parent) : QWidget(parent)
{
    oldFileGuiPtr = new FileGui();
    newFileGuiPtr = new FileGui();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(oldFileGuiPtr, 0, 0);
    outerLayout->addWidget(newFileGuiPtr, 0, 1);
    
    this->setLayout(outerLayout);
}


QString* EditorCentralWid::toString()
{
    return new QString("***METHOD STUB***");
}


EditorCentralWid::~EditorCentralWid()
{
    ;
}