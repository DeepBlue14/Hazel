/* 
 * File:   SigWindow.h
 * Author: james
 * 
 * File Description: this class will be a child of qmainwindow, and will contain
 *                   a signal SigTextEdit as its central UI.
 *
 * Created on December 3, 2015, 10:44 PM
 */

#ifndef SIGWINDOW_H
#define	SIGWINDOW_H

#include <QMainWindow>
#include <QString>

#include <iostream>

#include "SigTextEdit.h"
#include "SigTextToolBar.h"

using namespace std;

class SigWindow : public QMainWindow
{
    Q_OBJECT
            
    private:
        SigTextEdit* sigTextEditPtr;
        SigTextToolBar* sigTextToolBarPtr;
        
    public:
        SigWindow(QMainWindow* parent = 0);
        void setup();
        SigTextEdit* getSigTextToolBarPtr();
        QString* toString();
        ~SigWindow();
};

#endif	/* SIGWINDOW_H */