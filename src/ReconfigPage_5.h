/* 
 * File:   ReconfigPage_5.h
 * Author: james
 *
 * Created on July 31, 2015, 12:42 PM
 */

#ifndef RECONFIG_PAGE_5_H
#define	RECONFIG_PAGE_5_H

#include <QWidget>
#include <QString>
#include <QGridLayout>

class ReconfigPage_5 : public QWidget
{
    Q_OBJECT
            
    private:
        QGridLayout* outerLayout;
        
    public:
        ReconfigPage_5(QWidget* parent = 0);
        ~ReconfigPage_5();
};

#endif	/* RECONFIG_PAGE_5_H */