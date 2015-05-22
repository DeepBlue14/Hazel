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

#include "RunPage_1.h"
#include "RunPage_2.h"
#include "RunPage_3.h"


class RunGui : public QWidget
{
    Q_OBJECT
            
    private:
        
        QGridLayout* outerLayoutPtr;
        
        RunPage_1* runPage_1Ptr;
        RunPage_2* runPage_2Ptr;
        RunPage_3* runPage_3Ptr;
        
    public:
        RunGui(QWidget* parent = 0);
        ~RunGui();
};

#endif	/* RUN_GUI_H */

