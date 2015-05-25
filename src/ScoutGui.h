/* 
 * File:   Scout.h
 * Author: james
 *
 * Reference: http://doc.qt.io/qt-4.8/qcompleter.html#details
 *            http://www.trinitydesktop.org/docs/qt4/tools-completer.html
 *            http://doc.qt.digia.com/4.6/tools-treemodelcompleter.html
 * 
 * Created on May 8, 2015, 11:44 PM
 */

#ifndef SCOUT_GUI_H
#define	SCOUT_GUI_H

#include <QMenu>
#include <QStringList>
#include <QVector>
#include <QAction>

#include <iostream>

using namespace std;

class ScoutGui : public QMenu
{
    Q_OBJECT
            
    private:
        QStringList* methodPrototypeLstPtr;
        QVector<QAction*> prototypeActionVec;
        
    private slots:
        void implement();
        
    public:
        ScoutGui(QMenu* parent = 0);
        void setMethodPrototypeLstPtr(QStringList* methodPrototypeLstPtr);
        QStringList* getMethodPrototypeLstPtr();
        void fillScoutMenu();
        ~ScoutGui();
};

#endif	/* SCOUT_GUI_H */

