/* 
 * File:   WestGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
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
#include <QVector>
#include <QString>
#include <QVBoxLayout>

class WestGui : public QWidget
{
    Q_OBJECT
            
    private:
        QVector<QListWidgetItem*>* cmakeLstWidItemPtrVecPtr;
        QVector<QListWidgetItem*>* packageLstWidItemPtrVecPtr;
        QListWidget* cmakeLstWidPtr;
        QListWidget* packageLstWidPtr;
        QVBoxLayout* outerLayout;
        
    public:
        WestGui(QWidget* parent = 0);
        void setCmakeLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* cmakeLstWidItemPtr);
        QVector<QListWidgetItem*>* getCmakeLstWidItemPtrVecPtr();
        void setPackageLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* packageLstWidItemPtr);
        QVector<QListWidgetItem*>* getPackageLstWidItemPtrVecPtr();
        void setCmakeLstWidPtr(QListWidget* cmakeLstWidPtr);
        QListWidget* getCmakeLstWidPtr();
        void setPackageLstWidPtr(QListWidget* packageLstWidPtr);
        QListWidget* getPackageLstWidPtr();
        void setOuterLayout(QVBoxLayout* outerLayout);
        QVBoxLayout* getQVBoxLayout();
        QString* toString();
        ~WestGui();
};


#endif /* WEST_GUI_H */