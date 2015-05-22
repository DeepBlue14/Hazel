/* 
 * File:   ExecutionGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 21, 2015, 7:37 PM
 */

#ifndef RUN_GUI_H
#define	RUN_GUI_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

class ExecutionGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        ExecutionGui(QWidget* parent = 0);
        ~ExecutionGui();
};

#endif	/* RUN_GUI_H */

