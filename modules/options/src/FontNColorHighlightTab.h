/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FontNColorHighlightTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 7, 2016, 3:38 PM
 * Last Modified: 
 */

#ifndef FONT_N_COLOR_HIGHLIGHT_TAB_H
#define FONT_N_COLOR_HIGHLIGHT_TAB_H


#include "OptionTabInterface.h"

class FontNColorHighlightTab : public OptionTabInterface
{
    
public:
    explicit FontNColorHighlightTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~FontNColorHighlightTab();
    
private:
    ;
};

#endif /* FONT_N_COLOR_HIGHLIGHT_TAB_H */