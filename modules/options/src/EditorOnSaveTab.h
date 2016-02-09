/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorOnSaveTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:34 PM
 * Last Modified: 
 */

#ifndef EDITOR_ON_SAVE_TAB_H
#define EDITOR_ON_SAVE_TAB_H


#include "OptionTabInterface.h"

class EditorOnSaveTab : public OptionTabInterface
{
    
public:
    explicit EditorOnSaveTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorOnSaveTab();
    
private:
    ;
};

#endif /* EDITOR_ON_SAVE_TAB_H */