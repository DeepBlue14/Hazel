/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "EditorFoldTab.h"


EditorFoldTab::EditorFoldTab(OptionTabInterface* parent) : OptionTabInterface(parent)
{
    setup();
}


void EditorFoldTab::setup()
{
    tabTitleStrPtr = new QString("Folding");
    testLblPtr = new QLabel("testing FontsAndColorsTab");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(testLblPtr);
    
    this->setLayout(outerLayout);
}


void EditorFoldTab::setTabTitleStrPtr(QString* tabTitleStrPtr)
{
    this->tabTitleStrPtr = tabTitleStrPtr;
}


QString*EditorFoldTab::getTabTitleStrPtr()
{
    return tabTitleStrPtr;
}


EditorFoldTab::~EditorFoldTab()
{
    ;
}