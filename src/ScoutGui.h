/* 
 * File:   Scout.h
 * Author: james
 *
 * Created on May 8, 2015, 11:44 PM
 */

#ifndef SCOUT_GUI_H
#define	SCOUT_GUI_H

#include <QMenu>

#include <iostream>

using namespace std;

class ScoutGui : public QMenu
{
    Q_OBJECT
            
    private:
        QStringList* methodPrototypeLstPtr;
        
        
    private slots:
        ;
        
    public:
        ScoutGui(QMenu* parent = 0);
        void setMethodPrototypeLstPtr(QStringList* methodPrototypeLstPtr);
        QStringList* getMethodPrototypeLstPtr();
        void fillScoutMenu();
        ~ScoutGui();
};

#endif	/* SCOUT_GUI_H */

