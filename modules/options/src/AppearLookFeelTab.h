/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AppearLookFeelTab.h
 * Module: options
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on February 9, 2016, 11:29 PM
 * Last Modified: 2/09/2016
 */

#ifndef APPEAR_LOOK_FEEL_TAB_H
#define APPEAR_LOOK_FEEL_TAB_H

#include <QGridLayout>

#include "OptionTabInterface.h"

class AppearLookFeelTab : public OptionTabInterface
{

public:
    explicit AppearLookFeelTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~AppearLookFeelTab();
    
    
private:
    QGridLayout* outerLayout;

};


#endif /* APPEAR_LOOK_FEEL_TAB_H */