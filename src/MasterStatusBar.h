/* 
 * File:   MasterStatusBar.h
 * Author: james
 *
 * Created on July 20, 2015, 7:41 PM
 */

#ifndef MASTERSTATUSBAR_H
#define	MASTERSTATUSBAR_H

#include <QWidget>
#include <QProgressBar>
#include <QHBoxLayout>
#include <QGridLayout>

class MasterStatusBar : public QWidget
{
    Q_OBJECT
   
    private:
        QProgressBar* progressBar;
        QHBoxLayout* widLayoutPtr;
        QGridLayout* outerLayout;
        
        
    public:
        MasterStatusBar(QWidget* parent = 0);
        ~MasterStatusBar();
};

#endif	/* MASTERSTATUSBAR_H */

