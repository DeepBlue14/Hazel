/* 
 * File:   UmlListWidgetItem.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 14, 2016, 4:50 PM
 * Last Modified on January 14, 2016, 4:50 PM
 */

#ifndef UML_LIST_WIDGET_ITEM_H
#define UML_LIST_WIDGET_ITEM_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>
#include <QListWidgetItem>
#include <QLabel>
#include <QString>
#include <QHBoxLayout>

#include <iostream>

#include "RosEnv.h"

using std::cout;
using std::endl;

class UmlListWidgetItem : public QWidget
{
    Q_OBJECT
            
public:
    explicit UmlListWidgetItem(QWidget* parent = 0);
    explicit UmlListWidgetItem(QPixmap pixmap/*QIcon icon*/, QString type, QString name, QWidget* parent = 0);
    QString* toString();
    virtual ~UmlListWidgetItem();
    
    
private:
    QPixmap* scopeIconPtr;
    QLabel* scopeLblPtr;
    QLabel* typeLblPtr;
    QLabel* nameLblPtr;
    QHBoxLayout* layout;
};

#endif /* UML_LIST_WIDGET_ITEM_H */