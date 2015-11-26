/* 
 * File:   BuildDisplay.h
 * Author: james
 *
 * Created on November 25, 2015, 5:56 PM
 */

#ifndef BUILD_DISPLAY_H
#define	BUILD_DISPLAY_H

#include <QMainWindow>
#include <QWidget>
#include <QString>

#include <iostream>

#include "RunDisplay.h"

using namespace std;

class BuildDisplay : public QMainWindow
{
    Q_OBJECT
            
    private:
        RunDisplay* runDisplayPtr;
        
    public:
        BuildDisplay(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~BuildDisplay();
};

#endif	/* BUILD_DISPLAY_H */