#include "OperationPage.h"

OperationPage::OperationPage(QWidget* parent) : QWidget(parent)
{
    scanBtnPtr = new QRadioButton("Scan");
    scanBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "search.png"));
    reconfigBtnPtr = new QRadioButton("Transform");
    reconfigBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "searchAndTransform.png"));
    resultsBtnPtr = new QRadioButton("Results");
    resultsBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "null.png"));
    otherBtnPtr = new QRadioButton("Other");
    otherBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "null.png"));
    
    btnLayout = new QGridLayout();
    btnLayout->addWidget(scanBtnPtr, 0, 0);
    btnLayout->addWidget(reconfigBtnPtr, 1, 0);
    btnLayout->addWidget(resultsBtnPtr, 2, 0);
    btnLayout->addWidget(otherBtnPtr, 3, 0);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(btnLayout, 0, 0, Qt::AlignCenter);
        
    this->setLayout(outerLayout);
}


QString* OperationPage::toString()
{
    return new QString("***METHOD STUB***");
}


OperationPage::~OperationPage()
{
    ;
}