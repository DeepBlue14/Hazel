/* 
 * File:   SouthGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * Created on December 28, 2015, 4:51 PM
 * Last Modified: 
 */

#ifndef SOUTH_GUI_H
#define SOUTH_GUI_H

#include <QWidget>
#include <QTextEdit>
#include <QString>
#include <QGridLayout>

class SouthGui : public QWidget
{
    Q_OBJECT
            
    private:
        QTextEdit* outputTePtr;
        QGridLayout* outerLayout;
       
    public:
        SouthGui(QWidget* parent = 0);
        QString* toString();
        ~SouthGui();
};

#endif /* SOUTH_GUI_H */