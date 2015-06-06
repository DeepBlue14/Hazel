/* 
 * File:   NavigatorGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 12, 2015, 10:03 PM
 */

#ifndef NAVIGATOR_GUI_H
#define	NAVIGATOR_GUI_H

#include <QWidget>
#include <QListWidget>
//#include <QSplitter>

class NavigatorGui
{
    private:
        QListWidget* listWidgetPtr;
        
    public:
        NavigatorGui();
        ~NavigatorGui();
};

#endif	/* NAVIGATOR_GUI_H */