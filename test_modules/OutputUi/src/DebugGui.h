/* 
 * File:   DebugGui.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class features a toolbar of buttons for executing gcd
 *                   debug commands (step into, step over, pause, etc.). 
 * 
 * TODO: Flesh out this class.
 *
 * Created on June 30, 2015, 12:49 AM
 * Last Modified 11/26/2015 by JK
 */

#ifndef DEBUG_GUI_H
#define	DEBUG_GUI_H

#include <QWidget>
#include <QToolBar>
#include <QVBoxLayout>

class DebugGui : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit DebugGui(QWidget* parent = 0);

    /**
     * Initializes the debug window's toolbar(s).
     */
    void initToolBars();

    /**
     * Destructor.
     */
    virtual ~DebugGui();
    
    
private:
    QToolBar* stepIntoTbPtr;
    QToolBar* stepOverTbPtr;
    QVBoxLayout* toolBarLayout;
};

#endif	/* DEBUG_GUI_H */