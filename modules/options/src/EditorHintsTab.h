/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorHintsTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:32 PM
 */

#ifndef EDITOR_HINTS_TAB_H
#define EDITOR_HINTS_TAB_H


#include "OptionTabInterface.h"

class EditorHintsTab : public OptionTabInterface
{
    
public:
    explicit EditorHintsTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorHintsTab();
    
private:
    ;
};

#endif /* EDITOR_HINTS_TAB_H */