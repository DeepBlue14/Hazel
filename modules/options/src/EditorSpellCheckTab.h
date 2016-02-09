/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorSpellCheckTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:36 PM
 * Last Modified: 
 */

#ifndef EDITOR_SPELL_CHECK_TAB_H
#define EDITOR_SPELL_CHECK_TAB_H


#include "OptionTabInterface.h"

class EditorSpellCheckTab : public OptionTabInterface
{
    
public:
    explicit EditorSpellCheckTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorSpellCheckTab();
    
private:
    ;
};

#endif /* EDITOR_SPELL_CHECK_TAB_H */