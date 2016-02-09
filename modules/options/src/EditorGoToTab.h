/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorToToTab.h
 * Module: 
 * Author: james
 * Email: 
 *
 * Created on February 7, 2016, 3:36 PM
 * Last Modified: 
 */

#ifndef EDITOR_GO_TO_TAB_H
#define EDITOR_GO_TO_TAB_H


#include "OptionTabInterface.h"

class EditorGoToTab : public OptionTabInterface
{
    
public:
    explicit EditorGoToTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorGoToTab();
    
private:
    ;
};

#endif /* EDITOR_GO_TO_TAB_H */