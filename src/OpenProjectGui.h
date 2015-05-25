/* 
 * File:   OpenProjectGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 24, 2015, 3:58 PM
 */

#ifndef OPEN_PROJECT_GUI_H
#define	OPEN_PROJECT_GUI_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include <QHBoxLayout>
#include <QGridLayout>

class OpenProjectGui : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* projectLePtr;
        QFileDialog* projectFileDialogPtr;
        QPushButton* fileDialogPbPtr;
        QPushButton* openProjectPbPtr;
        QPushButton* cancelPbPtr;
        QHBoxLayout* buttonLayoutPtr;
        QGridLayout* outerLayoutPtr;
        
        QString* projectStrPtr;
        
    private slots:
        void handleFileDialogPbPtrSlot();
        void handleOpenProjectPbPtrSlot();
        void handleCancelPbPtrSlot();
        
    public:
        OpenProjectGui(QWidget* parent = 0);
        void setProjectStrPtr(QString* projectStrPtr);
        QString* getProjectStrPtr();
        ~OpenProjectGui();
};

#endif	/* OPEN_PROJECT_GUI_H */