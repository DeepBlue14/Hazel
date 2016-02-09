/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorCodeComplTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:20 PM
 * Last Modified: 
 */

#ifndef EDITORCODECOMPLTAB_H
#define EDITORCODECOMPLTAB_H


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

#endif /* EDITORCODECOMPLTAB_H */