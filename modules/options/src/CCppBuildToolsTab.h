/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CppBuildToolsTab.h
 * Module: 
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on February 9, 2016, 2:54 PM
 * Last Modified: 
 */

#ifndef C_CPP_BUILD_TOOLS_TAB_H
#define C_CPP_BUILD_TOOLS_TAB_H

#include <QGridLayout>

#include "OptionTabInterface.h"

class CCppBuildToolsTab : public OptionTabInterface
{
    
public:
    explicit CCppBuildToolsTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~CCppBuildToolsTab();
    
private:
    QGridLayout* outerLayout;
    
};

#endif /* C_CPP_BUILD_TOOLS_TAB_H */