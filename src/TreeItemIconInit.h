/* 
 * File:   FileTreeIconInit.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file sets icons for the different types of files
 *                   which will be stored in the tree.
 *
 * Created on June 4, 2015, 8:31 PM
 */

#ifndef TREE_ITEM_ICON_INIT_H
#define	TREE_ITEM_ICON_INIT_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QIcon>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

namespace TreeItemIconInit
{
    void setProjIcon(QTreeWidgetItem* child);
    void setIcon(QTreeWidgetItem* child);
}

#endif	/* FILE_TREE_ICON_INIT_H */

