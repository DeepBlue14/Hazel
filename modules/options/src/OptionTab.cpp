/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "OptionTab.h"


OptionTab::OptionTab(QWidget* parent) : QWidget(parent)
{
    ;
}


void OptionTab::setTabTitleStrPtr(QString* tabTitleStrPtr)
{
    this->tabTitleStrPtr = tabTitleStrPtr;
}


QString* OptionTab::getTabTitleStrPtr()
{
    return tabTitleStrPtr;
}


QString* OptionTab::toString()
{
    return new QString("***METHOD STUB***");
}


OptionTab::~OptionTab()
{
    
}