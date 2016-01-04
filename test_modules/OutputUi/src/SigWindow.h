/* 
 * File:   SigWindow.h
 * Module: Output-South
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * File Description: this class will be a child of qmainwindow, and will contain
 *                   a signal SigTextEdit as its central UI.
 *
 * Created on December 3, 2015, 10:44 PM
 */

#ifndef SIG_WINDOW_H
#define	SIG_WINDOW_H

#include <QMainWindow>
#include <QString>

#include <iostream>

#include "SigTextEdit.h"
#include "SigTextToolBar.h"

using std::cout;
using std::endl;

class SigWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit SigWindow(QMainWindow* parent = 0);
    
    /**
     * Defines member variables.  Configures UI.
     */
    void setup();
    
    /**
     * 
     * 
     * @return 
     */
    SigTextEdit* getSigTextToolBarPtr();
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~SigWindow();
    
    
private:
    SigTextEdit* sigTextEditPtr;
    SigTextToolBar* sigTextToolBarPtr;
    
};

#endif	/* SIG_WINDOW_H */