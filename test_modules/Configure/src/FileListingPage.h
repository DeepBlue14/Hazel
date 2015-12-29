/* 
 * File:   FileListingPage.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: 
 * File Description: This file lists the package.xml and CMakeLists.txt files
 *                   which (may) need to be modified.
 * 
 * Created on December 22, 2015, 3:05 PM
 * Last Modified: 
 */

#ifndef FILE_LISTING_PAGE_H
#define FILE_LISTING_PAGE_H

#include <QWidget>
#include <QStringList>
#include <QListWidget>
#include <QPushButton>
#include <QString>
#include <QGridLayout>

#include <iostream>

#include "EditorGui.h"

using namespace std;

class FileListingPage : public QWidget
{
    Q_OBJECT
           
    private:
        QListWidget* packageLstWidPtr;
        QListWidget* makeLstWidPtr;
        QPushButton* packagePbPtr;
        QPushButton* makePbPtr;
        EditorGui* editorGuiPtr;
        QGridLayout* outerLayout;
        
    private slots:
        void handleMakeSlot();
        void handlePkgSlot();
        
    public:
        FileListingPage(QWidget* parent = 0);
        
        QString* toString();
        ~FileListingPage();
};

#endif /* FILE_LISTING_PAGE_H */