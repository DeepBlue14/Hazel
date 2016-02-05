/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OptionsGui.h
 * Modules: 
 * Author: james
 * Email:
 * File Description: main GUI window for this module.
 *
 * Created on February 2, 2016, 12:29 PM
 * Last Modified: 
 */

#ifndef OPTIONS_GUI_H
#define OPTIONS_GUI_H

#include <QWidget>
#include <QTabWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <QToolTip>
#include <QVector>
#include <QGridLayout>
#include <QString>

#include <iostream>

#include "OptionContainer.h"

using std::cout;
using std::endl;

class OptionsGui : public QWidget
{
    Q_OBJECT
            
public:
    explicit OptionsGui(QWidget* parent = 0);
    QString* toString();
    virtual ~OptionsGui();
    
private:
    QListWidget* optionLstWidPtr;
    QVector<OptionContainer*>* optionContainerPtrVecPtr;
    QGridLayout* outerLayout;
};


#endif /* OPTIONS_GUI_H */