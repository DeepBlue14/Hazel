#include "CustomMsgsGui.h"


CustomMsgsGui::CustomMsgsGui(QWidget* parent) : QWidget(parent)
{
    customPkgLePtr = new QLineEdit();
    customMsgLePtr = new QLineEdit();
    okBtnPtr = new QPushButton("Ok");
    cancelBtnPtr = new QPushButton("Cancel");
    
    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(okBtnPtr);
    btnLayout->addWidget(cancelBtnPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(customPkgLePtr, 0, 0);
    outerLayout->addWidget(customMsgLePtr, 0, 1);
    outerLayout->addLayout(btnLayout, 1, 1, Qt::AlignRight);
 
    setLayout(outerLayout);
}


QString* CustomMsgsGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


CustomMsgsGui::~CustomMsgsGui()
{
    ;
}