/* 
 * File:   CustomMsgsGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 4:13 PM
 */

#ifndef CUSTOM_MSGS_GUI_H
#define	CUSTOM_MSGS_GUI_H

#include <QWidget>
#include <QString>

class CustomMsgsGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        CustomMsgsGui(QWidget* parent = 0);
        QString* toString();
        ~CustomMsgsGui();
};

#endif	/* CUSTOM_MSGS_GUI_H */