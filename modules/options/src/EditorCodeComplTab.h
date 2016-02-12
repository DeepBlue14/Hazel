/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorCodeComplTab.h
 * Module: options
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class implements a tab which allows the user to
 *                   modify the code completion settings.
 *
 * Created on February 7, 2016, 3:20 PM
 * Last Modified: 2/09/2016
 */

#ifndef EDITOR_CODE_COMPL_TAB_H
#define EDITOR_CODE_COMPL_TAB_H


#include "OptionTabInterface.h"

class EditorCodeComplTab : public OptionTabInterface
{
    
public:
    explicit EditorCodeComplTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorCodeComplTab();
    
private:
    ;
};

#endif /* EDITOR_CODE_COMPL_TAB_H */