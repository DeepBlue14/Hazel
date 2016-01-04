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
#include "SigWindow.h"
#include "RunToolBar.h"

class RunDisplay : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit RunDisplay(QMainWindow* parent = 0);
    
    /**
     * Defines member variables.
     */
    void setup();
    
    /**
     * Configures the GUI in tab mode.
     */
    void loadTabMode();
    
    /**
     * Configures the GUI in panel mode.
     */
    void loadPanelMode();
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~RunDisplay();
    
    
private:
    RunToolBar* runToolbarPtr; //** Toolbar to start, terminate, etc. process in terminal. */
    
};

#endif	/* RUN_DISPLAY_H */