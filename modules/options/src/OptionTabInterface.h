/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OptionTab.h
 * Module:
 * Author: james
 * Email:
 * File Description: A tab for a tabwidget.  How quaint!
 * 
 * Should this class be abstract?
 *
 * Created on February 2, 2016, 2:18 PM
 * Last Modified: 
 */

#ifndef OPTION_TAB_INTERFACE_H
#define OPTION_TAB_INTERFACE_H

#include <QWidget>
#include <QString>

class OptionTabInterface : public QWidget
{
    Q_OBJECT
            
public:
    OptionTabInterface(QWidget* parent = 0);
    virtual void setup() = 0;
    virtual void setTabTitleStrPtr(QString* tabTitleStrPtr) = 0;
    virtual QString* getTabTitleStrPtr() = 0;
    QString* toString();
    virtual ~OptionTabInterface();
    
private:
    ;
};

#endif /* OPTION_TAB_INTERFACE_H */