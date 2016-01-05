/* 
 * File:   LinkFileWithGui.h
 * Module: NewFile
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
#include <QFontMetrics>
#include <QCompleter>
#include <QAbstractItemModel>
#include <QString>

#include <iostream>

#include "RosEnv.h"
#include "FileGui.h"
#include "Highlighter.h"
#include "RFile.h"
#include "Saver.h"
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
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        LinkFileWithGui();
        
        /**
         * 
         * 
         * @param compassTabWidget
         */
        void setcompassTabWidgetPtr(QTabWidget* compassTabWidget);
        
        /**
         * 
         * 
         * @return 
         */
        QTabWidget* getCompassTabWidgetPtr();
        
        /**
         * 
         * 
         * @param compassTabWidget
         * @param absPathToNewFileStrPtr
         * @param fileName
         * @param editor
         */
        void linkNew(QTabWidget* compassTabWidget, QString absPathToNewFileStrPtr, QString fileName, FileGui* editor);
        
        /**
         * 
         * 
         * @param compassTabWidget
         * @param absPathToExistingFileStrPtr
         * @param fileName
         * @param editor
         */
        void linkExisting(QTabWidget* compassTabWidget, QString* absPathToExistingFileStrPtr, QString fileName, FileGui* editor);
        
        /**
         * 
         * 
         * @param highlighter
         */
        void setHighlighterPtr(Highlighter* highlighter);
        
        /**
         * 
         * 
         * @return 
         */
        Highlighter* getHighlighterPtr();
        
        /**
         * 
         * 
         * @param fileName
         * @return 
         */
        QAbstractItemModel* modelFromFile(const QString& fileName);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~LinkFileWithGui();
};

#endif	/* LINK_FILE_WITH_GUI_H */