/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CCppOtherTab.h
 * Module: options
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on February 9, 2016, 2:59 PM
 * Last Modified: 
 */

#ifndef C_CPP_OTHER_TAB_H
#define C_CPP_OTHER_TAB_H


#include "OptionTabInterface.h"

class CCppOtherTab : public OptionTabInterface
{
    
public:
    explicit CCppOtherTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~CCppOtherTab();
    
    
private:
    ;
    
};

#endif /* C_CPP_OTHER_TAB_H */