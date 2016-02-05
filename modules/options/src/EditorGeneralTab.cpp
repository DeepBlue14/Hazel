/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <qt4/QtCore/qstack.h>

#include "EditorGeneralTab.h"


EditorGeneralTab::EditorGeneralTab(OptionTabInterface* parent) : OptionTabInterface(parent)
{
    setup();
}


void EditorGeneralTab::setup()
{
    tabTitleStrPtr = new QString("General");
    testLblPtr = new QLabel("Testing EditorTab");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(testLblPtr, 0, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


void EditorGeneralTab::setTabTitleStrPtr(QString* tabTitleStrPtr)
{
    this->tabTitleStrPtr = tabTitleStrPtr;
}


QString* EditorGeneralTab::getTabTitleStrPtr()
{
    return tabTitleStrPtr;
}


EditorGeneralTab::~EditorGeneralTab()
{
    ;
}