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
#include <QStandardItemModel>

class FileTreeGui : public QWidget
{
    Q_OBJECT
            
    private:
        QTreeView* tree;
        QSplitter* splitter;
        
    public:
        FileTreeGui(QWidget* parent = 0);
        ~FileTreeGui();
};

#endif	/* FILETREEGUI_H */

