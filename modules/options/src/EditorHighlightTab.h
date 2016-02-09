/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorHighlightTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:33 PM
 * Last Modified: 
 */

#ifndef EDITOR_HIGHLIGHT_TAB_H
#define EDITOR_HIGHLIGHT_TAB_H


#include "OptionTabInterface.h"

class EditorHighlightTab : public OptionTabInterface
{
    
public:
    explicit EditorHighlightTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorHighlightTab();
    
private:
    ;
};

#endif /* EDITOR_HIGHLIGHT_TAB_H */