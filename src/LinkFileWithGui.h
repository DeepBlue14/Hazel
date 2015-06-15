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

class LinkFileWithGui
{
    private:
        QCompleter* completer;
        Highlighter* highlighterPtr;
        QTabWidget* compassTabWidgetPtr;
    
    
    public:
        LinkFileWithGui();
        void setcompassTabWidgetPtr(QTabWidget* compassTabWidget);
        QTabWidget* getCompassTabWidgetPtr();
        void linkNew(QTabWidget* compassTabWidget, QString absPathToNewFileStrPtr, QString fileName, FileGui* editor);
        void linkExisting(QTabWidget* compassTabWidget, QString* absPathToExistingFileStrPtr, QString fileName, FileGui* editor);
        void setHighlighterPtr(Highlighter* highlighter);
        Highlighter* getHighlighterPtr();
        QAbstractItemModel* modelFromFile(const QString& fileName);
        ~LinkFileWithGui();
};

#endif	/* LINK_FILE_WITH_GUI_H */