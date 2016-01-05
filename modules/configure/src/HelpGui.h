/* 
 * File:   HelpGui.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 * 
 * Created on December 29, 2015, 12:23 PM
 * Last Modified: 
 */

#ifndef HELP_GUI_H
#define HELP_GUI_H

#include <QWidget>
#include <QString>
#include <QGridLayout>

class HelpGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        HelpGui(QWidget* parent = 0);
        QString* toString();
        ~HelpGui();
};

#endif /* HELP_GUI_H */