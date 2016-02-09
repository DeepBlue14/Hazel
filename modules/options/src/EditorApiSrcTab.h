/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorApiSrcTab.h
 * Module: 
 * Author: james
 * Email:
 * File Description: 
 *
 * Created on February 7, 2016, 3:35 PM
 * Last Modified: 
 */

#ifndef EDITOR_API_SRC_TAB_H
#define EDITOR_API_SRC_TAB_H

#include "OptionTabInterface.h"

class EditorApiSrcTab : public OptionTabInterface
{

public:
    explicit EditorApiSrcTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorApiSrcTab();
    
private:
    ;
};

#endif /* EDITOR_API_SRC_TAB_H */