#include "NewProjectPage_1.h"


NewProjectPage_1::NewProjectPage_1(QWidget* parent) : QWidget(parent)
{
    rosVersionsStrLstPtr = new QStringList();
    rosVersionsStrLstPtr->push_back("Fuerte");
    rosVersionsStrLstPtr->push_back("Groovy");
    rosVersionsStrLstPtr->push_back("Hydro");
    rosVersionsStrLstPtr->push_back("Indigo");
    rosVersionsStrLstPtr->push_back("Jade");
    
    rosVersionsLwPtr = new QListWidget();
    rosVersionsLwPtr->addItems(*rosVersionsStrLstPtr);
        
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(rosVersionsLwPtr);
    
    this->setLayout(outerLayoutPtr);
}


void NewProjectPage_1::setRosVersionStrPtr()
{
    rosVersionStrPtr = new QString(rosVersionsLwPtr->currentItem()->text() );
}


QString* NewProjectPage_1::getRosVersionStrPtr()
{
    return rosVersionStrPtr;
}


QString* NewProjectPage_1::toString()
{
    QString* tmp = new QString("Ros Version: ");
    tmp->append(getRosVersionStrPtr() );
    
    return tmp;
}


NewProjectPage_1::~NewProjectPage_1()
{
    ;
}