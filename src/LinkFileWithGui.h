/* 
 * File:   LinkFileWithGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class provides methods to link a physical file
 *                   (backend) with a text edit tab (frontend)
 *
 * Created on June 13, 2015, 11:32 PM
 */

#ifndef LINK_FILE_WITH_GUI_H
#define	LINK_FILE_WITH_GUI_H

#include <QWidget>
#include <QApplication>
#include <QTabWidget>
#include <QFont>
#include <QCompleter>
#include <QAbstractItemModel>

#include <iostream>

#include "FileGui.h"
#include "Highlighter.h"
#include "RFile.h"
#include "SaveAll.h"
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

namespace LinkFileWithGui
{
    QCompleter* completer;
    Highlighter* highlighterPtr;
    //QTabWidget* northTabWidget;
    
    //void setNorthTabWidget(QTabWidget* northTabWidget);
    //QTabWidget* getNorthTabWidget();
    void linkNew(QTabWidget* northTabWidget, QString* absPathToNewFileStrPtr, FileGui* editor);
    void linkExisting(QTabWidget* northTabWidget, QString* absPathToExistingFileStrPtr, FileGui* editor);
    void setHighlighterPtr(Highlighter* highlighter);
    Highlighter* getHighlighterPtr();
    QAbstractItemModel* modelFromFile(const QString& fileName);
}

#endif	/* LINK_FILE_WITH_GUI_H */