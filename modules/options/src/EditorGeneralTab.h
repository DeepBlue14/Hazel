/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 4, 2016, 4:54 PM
 * Last Modified: 
 */

#ifndef EDITOR_GENERAL_TAB_H
#define EDITOR_GENERAL_TAB_H

#include <QLabel>
#include <QGridLayout>

#include "OptionTabInterface.h"

class EditorGeneralTab : public OptionTabInterface
{
public:
    explicit EditorGeneralTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorGeneralTab();
    
private:
    QString* tabTitleStrPtr;
    QLabel* testLblPtr;
    QGridLayout* outerLayout;
};

#endif /* EDITOR_GENERAL_TAB_H */