/* 
 * File:   DebugGui.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class features a toolbar of buttons for executing gcd
 *                   debug commands (step into, step over, pause, etc.). 
 *
 * Created on June 30, 2015, 12:49 AM
 */

#ifndef DEBUG_GUI_H
#define	DEBUG_GUI_H

#include <QWidget>
#include <QToolBar>
#include <QVBoxLayout>

class DebugGui : public QWidget
{
    Q_OBJECT

    private:
        QToolBar* stepIntoTbPtr;
        QToolBar* stepOverTbPtr;
        QVBoxLayout* toolBarLayout;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        DebugGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void initToolBars();
        
        /**
         * 
         */
        ~DebugGui();
};

#endif	/* DEBUG_GUI_H */