/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "OptionsGui.h"


OptionsGui::OptionsGui(QWidget* parent) : QWidget(parent)
{
    
    optionLstWidPtr = new QListWidget();
    optionContainerPtrVecPtr = new QVector<OptionContainer*>();
    outerLayout = new QGridLayout();
    
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