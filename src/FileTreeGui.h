/* 
 * File:   FileTreeGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Reference: http://www.codeprogress.com/cpp/libraries/qt/QTreeWidgetBrowseDirectory.php#.VW9Wj60VhBc
 * 
 * Created on May 6, 2015, 1:46 AM
 */

#ifndef FILE_TREE_GUI_H
#define	FILE_TREE_GUI_H

#include <QWidget>
#include <QString>
#include <QSplitter>
#include <QTreeWidget>
#include <QHeaderView>
#include <QStandardItemModel>
#include <QPoint>
#include <QGridLayout>
#include <QMenu>
#include <QDirModel>
#include <QEvent>
#include <QRegExp>
#include <QDebug>

#include <iostream>

#include "TreeItemIconInit.h"

using namespace std;

class FileTreeGui : public QWidget
{
    Q_OBJECT
            
    private:
        static QTreeWidget* treePtr;
        static QSplitter* splitter;
        
        QGridLayout* outerLayout;
        
        static QString* projectRootAbsPathStrPtr;
        QTabWidget* northTabWidgetPtr;
        
    private slots:
        void handleShowDirectorySlot(QTreeWidgetItem* item, int /*column*/);
        void handleRightClickSlot(const QPoint&);
        
    public:
        FileTreeGui(QWidget* parent = 0);
        static void initTree();
        static void addChildren(QTreeWidgetItem* item, QString filePath);
        static void setProjectRootAbsPathStrPtr(QString* projectRootAbsPathStrPtr);
        static QString* getProjectRootAbsPathStrPtr();
        static void refresh();
        void setNorthTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        QTabWidget* getNorthTabWidgetPtr();
        ~FileTreeGui();
};

#endif	/* FILE_TREE_GUI_H */