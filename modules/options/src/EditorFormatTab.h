/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorFormattingTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:18 PM
 * Last Modified: 
 */

#ifndef EDITOR_FORMAT_TAB_H
#define EDITOR_FORMAT_TAB_H

#include "OptionTabInterface.h"

class EditorFormatTab : public OptionTabInterface
{
    
public:
    explicit EditorFormatTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorFormatTab();
    
private:
    ;
};

#endif /* EDITOR_FORMAT_TAB_H */