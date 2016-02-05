/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "EditorFoldingTab.h"


EditorFoldingTab::EditorFoldingTab(OptionTabInterface* parent) : OptionTabInterface(parent)
{
    setup();
}


void EditorFoldingTab::setup()
{
    tabTitleStrPtr = new QString("Folding");
    testLblPtr = new QLabel("testing FontsAndColorsTab");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(testLblPtr);
    
    this->setLayout(outerLayout);
}


void EditorFoldingTab::setTabTitleStrPtr(QString* tabTitleStrPtr)
{
    this->tabTitleStrPtr = tabTitleStrPtr;
}


QString*EditorFoldingTab::getTabTitleStrPtr()
{
    return tabTitleStrPtr;
}


EditorFoldingTab::~EditorFoldingTab()
{
    ;
}