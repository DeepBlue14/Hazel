/* 
 * File:   OutputToolbar.h
 * Author: james
 *
 * Created on November 29, 2015, 6:36 PM
 */

#ifndef OUTPUT_TOOLBAR_H
#define	OUTPUT_TOOLBAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"
#include "AbstractOutputToolBar.h"

using namespace std;

class OutputToolbar : public AbstractOutputToolBar
{
    Q_OBJECT
            
    private:
        QAction* termActPtr;
        
        
    private slots:
        void handleTermActPtrSlot();
        
    public:
        OutputToolbar(AbstractOutputToolBar* parent = 0);
        void initActions();
        void initBtnConnecter();
        QString* toString();
        ~OutputToolbar();
        
};

#endif	/* OUTPUT_TOOLBAR_H */