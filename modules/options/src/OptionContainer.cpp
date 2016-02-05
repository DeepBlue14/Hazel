/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "OptionContainer.h"


OptionContainer::OptionContainer(QWidget* parent) : QWidget(parent)
{
    // ::QWidget(); //call superconstructor
    
    //this should be set from the outside, i.e. mutator method
    optionLstWidItemPtr = new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cleanAndBuild01.png"), "General");
    optionTabWidPtr = new QTabWidget();
    optionTabPtrVecPtr = new QVector<OptionTabInterface*>();
    
    EditorGeneralTab* ed = new EditorGeneralTab();
    EditorFoldingTab* fo = new EditorFoldingTab();
    optionTabPtrVecPtr->push_back(ed);
    optionTabPtrVecPtr->push_back(fo);
    
    loadTabs();
}


void OptionContainer::loadTabs()
{
    cout << "size: " << optionTabPtrVecPtr->size() << endl;
    for(size_t i = 0; i < optionTabPtrVecPtr->size(); i++)
    {
        cout << "adding tab" << endl;
        optionTabWidPtr->addTab(optionTabPtrVecPtr->at(i), *optionTabPtrVecPtr->at(i)->getTabTitleStrPtr() );
    }
}


void OptionContainer::setOptionLstWidItemPtr(QListWidgetItem* optionLstWidItemPtr)
{
    this->optionLstWidItemPtr = optionLstWidItemPtr;
}


QListWidgetItem* OptionContainer::getOptionLstWidItemPtr()
{
    return optionLstWidItemPtr;
}


void OptionContainer::setOptionTabWidPtr(QTabWidget* optionTabWidPtr)
{
    this->optionTabWidPtr = optionTabWidPtr;
}


QTabWidget* OptionContainer::getOptionTabWidPtr()
{
    return optionTabWidPtr;
}


void OptionContainer::setOptionTabPtrVecPtr(QVector<OptionTabInterface*>* optionTabPtrVecPtr)
{
    this->optionTabPtrVecPtr = optionTabPtrVecPtr;
}


QVector<OptionTabInterface*>* OptionContainer::getOptionTabPtrVecPtr()
{
    return optionTabPtrVecPtr;
}


QString* OptionContainer::toString()
{
    return new QString("***METHOD STUB***");
}


OptionContainer::~OptionContainer()
{
    ;
}