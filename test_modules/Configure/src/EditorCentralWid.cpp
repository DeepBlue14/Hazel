#include "EditorCentralWid.h"


EditorCentralWid::EditorCentralWid(QWidget* parent) : QWidget(parent)
{
    oldFileTePtr = new QTextEdit();
    newFileTePtr = new QTextEdit();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(oldFileTePtr, 0, 0);
    outerLayout->addWidget(newFileTePtr, 0, 1);
    
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