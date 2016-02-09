/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorCodeTmplTab.h
 * Module: 
 * Author: james
 * Email:
 * File Description: 
 *
 * Created on February 7, 2016, 3:28 PM
 * Last Modified: 
 */

#ifndef EDITOR_CODE_TMPL_TAB_H
#define EDITOR_CODE_TMPL_TAB_H

#include "OptionTabInterface.h"

class EditorCodeTmplTab : public OptionTabInterface
{
    
public:
    explicit EditorCodeTmlTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorCodeTmlTab();
    
private:
    ;
};


#endif /* EDITOR_CODE_TMPL_TAB_H */