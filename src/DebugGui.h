/* 
 * File:   DebugGui.h
 * Author: james
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
        DebugGui(QWidget* parent = 0);
        void initToolBars();
        ~DebugGui();
};

#endif	/* DEBUGGUI_H */

