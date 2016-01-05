/* 
 * File:   BuildDisplay.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on November 25, 2015, 5:56 PM
 * Last Modified 11/26/2015 by James Kuczynski
 */

#ifndef BUILD_DISPLAY_H
#define	BUILD_DISPLAY_H

#include <QMainWindow>
#include <QWidget>
#include <QTabWidget>
#include <QTextEdit>
#include <QString>

#include <iostream>

#include "SigTextEdit.h"
#include "RunDisplay.h"

using std::cout;
using std::endl;

class BuildDisplay : public QMainWindow
{ 
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit BuildDisplay(QMainWindow* parent = 0);
    
    /**
     * Defines and initializes member variables.
     */
    void setup();
    
    /**
     * Classic toString method.
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~BuildDisplay();

    
private:
    QTabWidget* tabWidgetPtr; /** Contains "build" and "Run" tabs. */
    /**
     * Pseudo terminal; only responds to [CTRL] C, etc.  This is the "Build"
     * tab.
     */
    SigTextEdit* textEditPtr;
    RunDisplay* runDisplayPtr; /** Run tab; contains multiple sub-terminals. */

};

#endif	/* BUILD_DISPLAY_H */