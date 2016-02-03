/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OptionContainer.h
 * Module:
 * Author: james
 * Email:
 * File Description: This class contains the elements relevant to a specific
 *                   option in the OptionsGui's listwidget.
 *
 * Created on February 2, 2016, 1:22 PM
 * Last Modified: 
 */

#ifndef OPTION_CONTAINER_H
#define OPTION_CONTAINER_H

#include <QWidget>
#include <QListWidgetItem>
#include <QTabWidget>
#include <QVector>
#include <QString>

#include "OptionTab.h"
#include "RosEnv.h"

class OptionContainer : public QWidget
{
    Q_OBJECT
            
public:
    explicit OptionContainer(QWidget* parent = 0);
    void loadTabs();
    void setOptionLstWidItemPtr(QListWidgetItem* optionLstWidItemPtr);
    QListWidgetItem* getOptionLstWidItemPtr();
    void setOptionTabWidPtr(QTabWidget* optionTabWidPtr);
    QTabWidget* getOptionTabWidPtr();
    void setOptionTabPtrVecPtr(QVector<OptionTab*>* optionTabPtrVecPtr);
    QVector<OptionTab*>* getOptionTabPtrVecPtr();
    QString* toString();
    virtual ~OptionContainer();
    
    private:
        QListWidgetItem* optionLstWidItemPtr;
        QTabWidget* optionTabWidPtr;
        QVector<OptionTab*>* optionTabPtrVecPtr;
};

#endif /* OPTION_CONTAINER_H */