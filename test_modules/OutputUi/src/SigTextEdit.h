/* 
 * File:   SigTextEdit.h
 * Module: Output (South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class implements a textedit for running code, similar
 *                   to the output textedits which other IDEs use for displaying
 *                   build and/or run executions.  It will ignore all user input
 *                   EXCEPT for [CTRL]C, [CTRL]\, etc.
 * 
 * Created on November 30, 2015, 6:23 PM
 * Last Modified: 11/30/2015 by JK
 */

#ifndef SIG_TEXT_EDIT_H
#define	SIG_TEXT_EDIT_H

#include <QEvent>
#include <QKeyEvent>
#include <QDockWidget>
#include <QTextEdit>
#include <QString>

#include <iostream>

#include "RunToolBar.h"

using std::cout;
using std::endl;

class SigTextEdit : public QTextEdit
{
    Q_OBJECT
  
public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit SigTextEdit(QTextEdit* parent = 0);
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~SigTextEdit();
        
    
protected:
    /**
     * Intercept and evaluate key event.  Specifically for termination key
     * sequences.
     * 
     * @param e
     */
    /*virtual*/ void keyPressEvent(QKeyEvent* e);
    
                
private:
    ;
    
};

#endif	/* SIG_TEXT_EDIT_H */