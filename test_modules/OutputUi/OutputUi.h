/* 
 * File:   OutputUi.h
 * Module: Output
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class is the core frontend of the output module.
 *
 * Created on November 25, 2015, 12:02 PM
 */

#ifndef OUTPUT_UI_H
#define	OUTPUT_UI_H

#include <QMainWindow>
#include <QWidget>
#include <QString>

#include <iostream>

#include "BuildDisplay.h"

using namespace std;

class OutputUi : public QMainWindow
{
    Q_OBJECT
            
    private:
        BuildDisplay* buildDisplayPtr;
        
    public:
        OutputUi(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~OutputUi();
};

#endif	/* OUTPUT_UI_H */