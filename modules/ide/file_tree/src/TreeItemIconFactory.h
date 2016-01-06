/* 
 * File:   TreeItemIconFactory.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: This file sets icons for the different types of files
 *                   which will be stored in the tree.
 *
 * Created on January 6, 2016, 2:56 PM
 * Last Modified on January 6, 2016, 2:56 PM
 */

#ifndef TREE_ITEM_ICON_FACTORY_H
#define	TREE_ITEM_ICON_FACTORY_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QIcon>

#include <iostream>

#include "RosEnv.h"
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

namespace TreeItemIconFactory
{
    /**
     * Mutator to add a corresponding icon to a project root in a tree widget.
     * 
     * @param child the project root in need of an icon.
     */
    void setProjIcon(QTreeWidgetItem* child);
    
    /**
     * Mutator to add a corresponding icon to a child in a tree widget.
     * 
     * @param child the file/subdir in need of an icon.
     */
    void setIcon(QTreeWidgetItem* child);
}

#endif	/* FILE_TREE_ICON_FACTORY_H */
