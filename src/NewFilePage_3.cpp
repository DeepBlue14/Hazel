#include "NewFilePage_3.h"


NewFilePage_3::NewFilePage_3(QWidget* parent) : QWidget(parent)
{
    cHeaderTemplateStrLst = new QStringList();
    cHeaderTemplateStrLst->push_back("No template");
    cHeaderTemplateStrLst->push_back("Main template");
    cHeaderTemplateStrLst->push_back("No template");
    cHeaderTemplateStrLst->push_back("No template");
    cHeaderTemplateStrLst->push_back("No template");

    cSourceTemplateStrLst = new QStringList();
    cppHeaderTemplateStrLst = new QStringList();
    cppSourceTemplateStrLst = new QStringList();
    pySourceTemplateStrLst = new QStringList();
    jSourceTemplateStrLst = new QStringList();
    lispSourceTemplateStdrLst = new QStringList();
    
    templatesLstWidPtr = new QListWidget();
    templatesLstWidPtr->addItems(*cHeaderTemplateStrLst);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(templatesLstWidPtr, 0, 0);
    
    selectedTemplateStrPtr = new QString("null");
    
    this->setLayout(outerLayout);
}


void NewFilePage_3::triggerMutators()
{
    setSelectedTemplateStrPtr(new QString(templatesLstWidPtr->selectedItems().at(0)->text()) );
}


void NewFilePage_3::setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr)
{
    this->selectedTemplateStrPtr = selectedTemplateStrPtr;
}


QString* NewFilePage_3::getSelectedTemplateStrPtr()
{
    return selectedTemplateStrPtr;
}


QString* NewFilePage_3::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp; 
}


NewFilePage_3::~NewFilePage_3()
{
    ;
}