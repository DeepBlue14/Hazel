/* 
 * File:   MasterStatusBar.h
 * Author: James Kuczynski
 * Email:
 * File Description: 
 *
 * Created on July 20, 2015, 7:41 PM
 */

#ifndef MASTER_STATUS_BAR_H
#define	MASTER_STATUS_BAR_H

#include <QWidget>
#include <QProgressBar>
#include <QHBoxLayout>
#include <QGridLayout>

class MasterStatusBar : public QWidget
{
    Q_OBJECT
   
    private:
        static QProgressBar* progressBar;
        QHBoxLayout* widLayoutPtr;
        QGridLayout* outerLayout;
        
        
    public:
        /**
         * 
         * 
         * @param parent
         */
        MasterStatusBar(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param progressBar
         */
        static void setProgressBar(QProgressBar* progressBar);
        
        /**
         * 
         * 
         * @return 
         */
        static QProgressBar* getProgressBar();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~MasterStatusBar();
};

#endif	/* MASTER_STATUS_BAR_H */

