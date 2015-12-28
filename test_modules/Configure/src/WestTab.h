/* 
 * File:   WestGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * Notes: How about a table widget (2, 1), and each cell contains a listwidget?
 *
 * Created on December 24, 2015, 12:52 PM
 * Last Modified: 12/24/2015
 */

#ifndef WEST_GUI_H
#define WEST_GUI_H

#include <QWidget>
#include <QStringList>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDockWidget>
#include <QTabWidget>
#include <QVector>
#include <QString>
#include <QVBoxLayout>

#include "RosEnv.h"

class WestTab : public QWidget
{
    Q_OBJECT
            
    private:
        QVector<QListWidgetItem*>* oldFileLstWidItemPtrVecPtr;
        QVector<QListWidgetItem*>* newFileLstWidItemPtrVecPtr;
        QListWidget* oldFileLstWidPtr;
        QListWidget* newFileLstWidPtr;
        QVBoxLayout* outerLayout;
        
    private slots:
        void handleOldFileSlot();
        void handleNewFileSlot();
        
    public:
        WestTab(QWidget* parent = 0);
        void setOldFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* oldFileLstWidItemPtr);
        QVector<QListWidgetItem*>* getOldFileLstWidItemPtrVecPtr();
        void setNewFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* newFileLstWidItemPtr);
        QVector<QListWidgetItem*>* getNewFileLstWidItemPtrVecPtr();

        void setOldFileLstWidPtr(QListWidget* oldFileLstWidPtr);
        QListWidget* getOldFileLstWidPtr();
        void setNewFileLstWidPtr(QListWidget* newFileLstWidPtr);
        QListWidget* getNewFileLstWidPtr();
        
        void setOuterLayout(QVBoxLayout* outerLayout);
        QVBoxLayout* getQVBoxLayout();
        QString* toString();
        ~WestTab();
};


#endif /* WEST_GUI_H */