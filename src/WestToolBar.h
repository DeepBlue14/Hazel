/* 
 * File:   WestToolBar.h
 * Author: james
 *
 * Created on May 28, 2015, 12:21 AM
 */

#ifndef WEST_TOOLBAR_H
#define	WEST_TOOLBAR_H

#include <QWidget>
#include <QToolBar>

class WestToolBar : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        WestToolBar(QWidget* parent = 0);
        ~WestToolBar();
};

#endif	/* WEST_TOOLBAR_H */