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
    optionTabPtrVecPtr = new QVector<OptionTab*>();
    
    loadTabs();
}


void OptionContainer::loadTabs()
{
    for(size_t i = 0; i < optionTabPtrVecPtr->size(); i++)
    {
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


void OptionContainer::setOptionTabPtrVecPtr(QVector<OptionTab*>* optionTabPtrVecPtr)
{
    this->optionTabPtrVecPtr = optionTabPtrVecPtr;
}


QVector<OptionTab*>* OptionContainer::getOptionTabPtrVecPtr()
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