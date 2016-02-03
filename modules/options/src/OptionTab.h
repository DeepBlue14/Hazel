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

#ifndef OPTION_TAB_H
#define OPTION_TAB_H

#include <QWidget>
#include <QString>

class OptionTab : public QWidget
{
    Q_OBJECT
            
public:
    explicit OptionTab(QWidget* parent = 0);
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    QString* toString();
    virtual ~OptionTab();
    
private:
    QString* tabTitleStrPtr;
};

#endif /* OPTION_TAB_H */