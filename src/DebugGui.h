/* 
 * File:   DebugGui.h
 * Module: Unaffiliated
 * Author: james
 * Email:
 * File Description: 
 *
 * Created on June 30, 2015, 12:49 AM
 */

#ifndef DEBUGGUI_H
#define	DEBUGGUI_H

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

#endif	/* DEBUGGUI_H */