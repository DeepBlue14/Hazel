/* 
 * File:   MasterGui.h
 * Module: search_ui
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 13, 2016, 11:30 PM
 * Last Modified: 
 */

#ifndef MASTER_GUI_H
#define MASTER_GUI_H

#include <QWidget>
#include <QTextEdit>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <QGridLayout>

#include <iostream>

#include "UmlListWidgetItem.h"
#include "RosEnv.h"

using std::cout;
using std::endl;

class MasterGui : public QWidget
{
    Q_OBJECT
            
public:
    explicit MasterGui(QWidget* parent = 0);
    void loadSearchResults(QVector<UmlListWidgetItem*>* resultLstWidItemPtrVecPtr);
    QString* toString();
    virtual ~MasterGui();
    
private:
    void initTestData();
    
    QListWidget* searchResultsLwPtr;
    QVector<UmlListWidgetItem*>* resultLstWidItemPtrVecPtr;
    QGridLayout* outerLayout;
    
};

#endif /* MASTER_GUI_H */