/* 
 * File:   DebugActions.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class creates the different valid actions which can
 *                   be performed from the debug toolbar.
 *
 * Created on October 6, 2015, 6:15 PM
 */

#include <QWidget>
#include <QAction>
#include <QString>


#include <iostream>


using namespace std;

#ifndef DEBUG_ACTIONS_H
#define	DEBUG_ACTIONS_H

class DebugActions : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        DebugActions(QWidget* parent = 0);
        void initActions();
        QString* toString();
        ~DebugActions();
};

#endif	/* DEBUG_ACTIONS_H */