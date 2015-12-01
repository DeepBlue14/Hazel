/* 
 * File:   RunDisplay.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on November 6, 2015, 1:41 PM
 * Last Modified on 11/26/2015 by JK
 */

#ifndef RUN_DISPLAY_H
#define	RUN_DISPLAY_H

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QDockWidget>
#include <QTextEdit>
#include <QToolBar>

#include "SigTextEdit.h"
#include "RunToolbar.h"

class RunDisplay : public QMainWindow
{
    Q_OBJECT
            
    private:
        RunToolbar* runToolbarPtr;
        //QToolBar* runWidPtr;
        
    public:
        RunDisplay(QMainWindow* parent = 0);
        void setup();
        void loadTabMode();
        void loadPanelMode();
        QString* toString();
        ~RunDisplay();
};

#endif	/* RUN_DISPLAY_H */