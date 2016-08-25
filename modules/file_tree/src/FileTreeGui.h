/* 
 * File:   FileTreeGui.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description:
 *
 * Reference: http://www.codeprogress.com/cpp/libraries/qt/QTreeWidgetBrowseDirectory.php#.VW9Wj60VhBc
 *
 * Created on January 6, 2016, 2:52 PM
 * Last Modified on January 6, 2016, 2:52 PM
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

#include "TreeItemIconFactory.h"
#include "FTProjectMenu.h"
#include "FTDirMenu.h"
#include "FTFileMenu.h"
//#include "LinkFileWithGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class FileTreeGui : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit FileTreeGui(QWidget* parent = 0);

    /**
     * Inits the file tree.
     */
    static void initTree();
    
    /**
     * Adds children to a filetree.
     * 
     * @param item a file or directory.
     * @param filePath path to the file or dir.
     */
    static void addChildren(QTreeWidgetItem* item, QString filePath);

    /**
     * Mutator of a reference to a RIDE project root directory.
     * 
     * @param projectRootAbsPathStrPtr RIDE project root directory.
     */
    static void setProjectRootAbsPathStrPtr(QString* projectRootAbsPathStrPtr);

    /**
     * Accessor of a reference to a RIDE project root directory.
     * 
     * @return projectRootAbsPathStrPtr RIDE project root directory.
     */
    static QString* getProjectRootAbsPathStrPtr();

    /**
     * Mutator of the loaded RIDE project name.
     * 
     * @param projectNameStrPtr loaded RIDE project name
     */
    static void setProjectNameStrPtr(QString* projectNameStrPtr);

    /**
     * Accessor of the loaded RIDE project name.
     * 
     * @return projectNameStrPtr.
     */
    static QString* getProjectNameStrPtr();

    /**
     * Reloads tree structure.
     */
    static void refresh();

    /**
     * Mutator of the north tab.
     * 
     * @param masterTabWidgetPtr north tab.
     */
    void setNorthTabWidgetPtr(QTabWidget* masterTabWidgetPtr);

    /**
     * Accessor of the north tab.
     * 
     * @return northTabWidgetPtr.
     */
    QTabWidget* getNorthTabWidgetPtr();

    /**
     * Classic toString method.
     * 
     * @return class data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~FileTreeGui();
    
    
private slots:
    void handleShowDirectorySlot(QTreeWidgetItem* item, int /*column*/);
    void handleRightClickSlot(const QPoint&);
    void handleDoubleClickSlot(const QModelIndex& mIndex);
    
    
private:
    static QTreeWidget* treePtr;
    static QSplitter* splitter;

    QGridLayout* outerLayout;

    static QString* projectRootAbsPathStrPtr;
    static QString* projectNameStrPtr;
    QTabWidget* northTabWidgetPtr;
    
    
};

#endif	/* FILE_TREE_GUI_H */