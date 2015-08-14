#include "NewFilePage_4.h"


NewFilePage_4::NewFilePage_4(QWidget* parent) : QWidget(parent)
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


void NewFilePage_4::triggerMutators()
{
    setSelectedTemplateStrPtr(new QString(templatesLstWidPtr->selectedItems().at(0)->text()) );
}


void NewFilePage_4::setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr)
{
    this->selectedTemplateStrPtr = selectedTemplateStrPtr;
}


QString* NewFilePage_4::getSelectedTemplateStrPtr()
{
    return selectedTemplateStrPtr;
}


QString* NewFilePage_4::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp; 
}


NewFilePage_4::~NewFilePage_4()
{
    ;
}