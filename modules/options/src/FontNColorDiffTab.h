/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FontNColorDiffTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:41 PM
 * Last Modified: 
 */

#ifndef FONT_N_COLOR_DIFF_TAB_H
#define FONT_N_COLOR_DIFF_TAB_H


#include "OptionTabInterface.h"

class FontNColorDiffTab : public OptionTabInterface
{
    
public:
    explicit FontNColorDiffTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~FontNColorDiffTab();
    
private:
    ;
};

#endif /* FONT_N_COLOR_DIFF_TAB_H */