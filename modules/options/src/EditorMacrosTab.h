/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorMacrosTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:34 PM
 * Last Modified: 
 */

#ifndef EDITOR_MACROS_TAB_H
#define EDITOR_MACROS_TAB_H


#include "OptionTabInterface.h"

class EditorMacrosTab : public OptionTabInterface
{
    
public:
    explicit EditorMacrosTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorMacrosTab();
    
private:
    ;
};

#endif /* EDITOR_MACROS_TAB_H */