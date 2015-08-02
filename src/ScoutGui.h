/* 
 * File:   Scout.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Reference: http://doc.qt.io/qt-4.8/qcompleter.html#details
 *            http://www.trinitydesktop.org/docs/qt4/tools-completer.html
 *            http://doc.qt.digia.com/4.6/tools-treemodelcompleter.html
 *            http://doc.qt.digia.com/4.2/tools-customcompleter.html
 * 
 * Created on May 8, 2015, 11:44 PM
 */

#ifndef SCOUT_GUI_H
#define	SCOUT_GUI_H

#include <QWidget>
#include <QString>

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

class ScoutGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        ScoutGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~ScoutGui();
};

#endif	/* SCOUT_GUI_H */