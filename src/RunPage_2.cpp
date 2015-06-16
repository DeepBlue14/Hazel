#include "RunPage_2.h"


RunPage_2::RunPage_2(QWidget* parent) : QWidget(parent)
{
    launchFileLePtr = new QLineEdit();
    launchFileDialogPtr = new QFileDialog();
    selectLaunchFilePbPtr = new QPushButton("Select...");
        
    connect(selectLaunchFilePbPtr, SIGNAL(released()), this, SLOT(handleSelectLaunchFilePbPtrSlot()));
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(launchFileLePtr, 0, 0);
    outerLayoutPtr->addWidget(selectLaunchFilePbPtr, 0, 1);
    
    this->setLayout(outerLayoutPtr);
}


void RunPage_2::handleSelectLaunchFilePbPtrSlot()
{
    QString fileName = launchFileDialogPtr->getOpenFileName(this, tr("&Open Directory"), "/home");
    launchFileLePtr->setText(fileName);
}


void RunPage_2::setLaunchFileStrPtr()
{
    launchFileStrPtr = new QString(launchFileLePtr->text() );
}


QString* RunPage_2::getLaunchFileStrPtr()
{
    return launchFileStrPtr;
}


QString* RunPage_2::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


RunPage_2::~RunPage_2()
{
    ;
}