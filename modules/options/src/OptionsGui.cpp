/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "OptionsGui.h"


OptionsGui::OptionsGui(QWidget* parent) : QWidget(parent)
{
    
    optionLstWidPtr = new QListWidget();
    optionLstWidPtr->setToolTip("hello\nworld");
    //QToolTip toolTip();
    //toolTip.setText("foo <font color=\"red\">bar</font>");
    optionContainerPtrVecPtr = new QVector<OptionContainer*>();
    
    OptionContainer* optionContainer = new OptionContainer();
    optionContainerPtrVecPtr->push_back(optionContainer);
    optionLstWidPtr->addItem(optionContainerPtrVecPtr->at(0)->getOptionLstWidItemPtr() );
    
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(optionLstWidPtr, 0, 0, Qt::AlignLeft);
    outerLayout->addWidget(optionContainerPtrVecPtr->at(0)->getOptionTabWidPtr(), 0, 1, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


QString* OptionsGui::toString()
{
    return new QString("***METHOD STUB***");
}


OptionsGui::~OptionsGui()
{
    ;
}