/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CCppFileTmplTab.h
 * Module: 
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on February 9, 2016, 2:59 PM
 * Last Modified: 
 */

#ifndef C_CPP_FILE_TMPL_TAB_H
#define C_CPP_FILE_TMPL_TAB_H


#include "OptionTabInterface.h"

class CCppFileTmplTab : public OptionTabInterface
{

public:
    explicit CCppFileTmplTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~CCppFileTmplTab();
        
};

#endif /* C_CPP_FILE_TMPL_TAB_H */