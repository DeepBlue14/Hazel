/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CCppProjOptionTab.h
 * Module: 
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on February 9, 2016, 2:58 PM
 * Last Modified: 2/09/2016
 */

#ifndef C_CPP_PROJ_OPTION_TAB_H
#define C_CPP_PROJ_OPTION_TAB_H


#include "OptionTabInterface.h"

class CCppCodeAssistTab : public OptionTabInterface
{

public:
    explicit CCppCodeAssistTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~CCppCodeAssistTab();
    
private:
    ;
};

#endif /* CCPP_PROJ_OPTION_TAB_H */