/* 
 * File:   FileTreeGui.h
 * Author: james
 *
 * Created on May 6, 2015, 1:46 AM
 */

#ifndef FILETREEGUI_H
#define	FILETREEGUI_H

#include <QWidget>
#include <QSplitter>
#include <QTreeView>
#include <QHeaderView>
#include <QFileSystemModel>
#include <QListView>
#include <QStandardItemModel>
#include <QGridLayout>

class FileTreeGui : public QWidget
{
    Q_OBJECT
            
    private:
        QTreeView* tree;
        QListView* list;
        QSplitter* splitter;
        
        QGridLayout* outerLayout;
        
    public:
        FileTreeGui(QWidget* parent = 0);
        ~FileTreeGui();
};

#endif	/* FILETREEGUI_H */