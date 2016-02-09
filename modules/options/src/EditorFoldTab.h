/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FontsAndColors.h
 * Module: 
 * Author: James
 * Email: 
 * File Description: 
 *
 * Created on February 4, 2016, 6:13 PM
 * Last Modified: 
 */

#ifndef EDITOR_FOLD_TAB_H
#define EDITOR_FOLD_TAB_H

#include <QLabel>
#include <QGridLayout>

#include "OptionTabInterface.h"


class EditorFoldTab : public OptionTabInterface
{
    
public:
    explicit EditorFoldTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorFoldTab();
    
private:
    QString* tabTitleStrPtr;
    QLabel* testLblPtr;
    QGridLayout* outerLayout;
        
};


#endif /* EDITOR_FOLD_TAB_H */