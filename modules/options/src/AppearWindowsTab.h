/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AppearWindowsTab.h
 * Module: 
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on February 9, 2016, 11:29 PM
 * Last Modified: 
 */

#ifndef APPEAR_WINDOWS_TAB_H
#define APPEAR_WINDOWS_TAB_H

#include <QGridLayout>

#include "OptionTabInterface.h"

class AppearWindowsTab : public OptionTabInterface
{
    
public:
    explicit AppearWindowsTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~AppearWindowsTab();
};

#endif /* APPEAR_WINDOWS_TAB_H */