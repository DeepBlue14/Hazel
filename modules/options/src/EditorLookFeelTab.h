/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorLookFeelTab.h
 * Module: 
 * Author: james
 * Email:
 * File Description: 
 *
 * Created on February 7, 2016, 3:31 PM
 * Last Modified: 
 */

#ifndef EDITOR_LOOK_FEEL_TAB_H
#define EDITOR_LOOK_FEEL_TAB_H


#include "OptionTabInterface.h"

class EditorLookFeelTab : public OptionTabInterface
{
    
public:
    explicit EditorLookFeelTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorLookFeelTab();
    
private:
    ;
};

#endif /* EDITOR_LOOK_FEEL_TAB_H */