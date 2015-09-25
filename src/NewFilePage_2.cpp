#include "NewFilePage_2.h"


NewFilePage_2::NewFilePage_2(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select template</b>");
    
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
    outerLayout->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
    outerLayout->addWidget(templatesLstWidPtr, 1, 0);
    
    selectedTemplateStrPtr = new QString("null");
    
    this->setLayout(outerLayout);
}


void NewFilePage_2::triggerMutators()
{
    setSelectedTemplateStrPtr(new QString(templatesLstWidPtr->selectedItems().at(0)->text()) );
}


void NewFilePage_2::setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr)
{
    this->selectedTemplateStrPtr = selectedTemplateStrPtr;
}


QString* NewFilePage_2::getSelectedTemplateStrPtr()
{
    return selectedTemplateStrPtr;
}


QString* NewFilePage_2::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp; 
}


NewFilePage_2::~NewFilePage_2()
{
    ;
}