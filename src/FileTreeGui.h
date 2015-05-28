/* 
 * File:   FileTreeGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 6, 2015, 1:46 AM
 */

#ifndef FILE_TREE_GUI_H
#define	FILE_TREE_GUI_H

#include <QWidget>
#include <QString>
#include <QSplitter>
#include <QTreeView>
#include <QHeaderView>
#include <QFileSystemModel>
#include <QListView>
#include <QStandardItemModel>
#include <QPoint>
#include <QGridLayout>
#include <QMenu>

#include <iostream>

using namespace std;

class FileTreeGui : public QWidget
{
    Q_OBJECT
            
    private:
        static QTreeView* tree;
        static QListView* list;
        static QSplitter* splitter;
        static QFileSystemModel* model;
        
        QGridLayout* outerLayout;
        
        static QString* projectRootAbsPathStrPtr;
        QTabWidget* masterTabWidgetPtr;
        
    private slots:
        void handleRightClickSlot(const QPoint&);
        
    public:
        FileTreeGui(QWidget* parent = 0);
        static void setProjectRootAbsPathStrPtr(QString* projectRootAbsPathStrPtr);
        static QString* getProjectRootAbsPathStrPtr();
        static void refresh();
        void setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        QTabWidget* getMasterTabWidgetPtr();
        ~FileTreeGui();
};

#endif	/* FILE_TREE_GUI_H */