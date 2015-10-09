/* 
 * File:   FilePropGui.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This UI opens when the user right-clicks a file in the
 *                   file tree, and selects "properties" from the menu.
 *
 * Created on October 4, 2015, 3:36 PM
 */

#ifndef FILE_PROP_GUI_H
#define	FILE_PROP_GUI_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <iostream>


using namespace std;

class FilePropGui : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* fileNameLblPtr;
        QLabel* fileLocLblPtr;
        QLabel* lastModdedLblPtr;
        QLineEdit* fileNameLePtr;
        QLineEdit* fileLocLePtr;
        QLineEdit* lastModdedLePtr;
        
        QString* fileNameStrPtr;
        QString* fileLocStrPtr;
        QString* lastModdedStrPtr;
        
        QPushButton* okBtnPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        FilePropGui(QWidget* parent = 0);
        void fillUiComponents();
        void setFileNameStrPtr(QString* fileNameStrPtr);
        QString* getFileNameStrPtr();
        void setFileLocStrPtr(QString* fileLocStrPtr);
        QString* getFileLocStrPtr();
        void setLastModdedStrPtr(QString* lastModdedStrPtr);
        QString* getLastModdedStrPtr();
        QString* toString();
        ~FilePropGui();
};

#endif	/* FILE_PROP_GUI_H */