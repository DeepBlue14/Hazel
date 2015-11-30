/* 
 * File:   OutputUi.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class is the core frontend of the output module.
 *
 * Created on November 25, 2015, 12:02 PM
 * Last Modified on 11/26/2015 by JK
 */

#ifndef OUTPUT_UI_H
#define	OUTPUT_UI_H

#include <QMainWindow>
#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QString>

#include <iostream>

#include "BuildDisplay.h"
#include "OutputToolbar.h"
#include "DebugToolbar.h"

using namespace std;

class OutputUi : public QMainWindow
{
    Q_OBJECT
            
    private:
        BuildDisplay* buildDisplayPtr;
        OutputToolbar* outputToolbarPtr;
        DebugToolbar* debugToolbarPtr;
        QToolBar* outputWidPtr;
        QToolBar* debugWidPtr;
        
    public:
        OutputUi(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~OutputUi();
};

#endif	/* OUTPUT_UI_H */