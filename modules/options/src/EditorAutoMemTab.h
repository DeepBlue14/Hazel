/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorAutoMemTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:35 PM
 * Last Modified: 
 */

#ifndef EDITOR_AUTO_MEM_TAB_H
#define EDITOR_AUTO_MEM_TAB_H


#include "OptionTabInterface.h"

class EditorAutoMemTab : public OptionTabInterface
{

public:
    explicit EditorAutoMemTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorAutoMemTab();
    
private:
    ;
};

#endif /* EDITOR_AUTO_MEM_TAB_H */