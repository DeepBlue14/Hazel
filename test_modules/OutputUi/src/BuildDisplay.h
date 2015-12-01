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

using namespace std;

class BuildDisplay : public QMainWindow
{
    Q_OBJECT
            
    private:
        QTabWidget* tabWidgetPtr;
        SigTextEdit* textEditPtr;
        RunDisplay* runDisplayPtr;
        
    public:
        BuildDisplay(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~BuildDisplay();
};

#endif	/* BUILD_DISPLAY_H */