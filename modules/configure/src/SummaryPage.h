/* 
 * File:   SummeryPage.h
 * Module: 
 * Author: james
 * Email: 
 * File Description:
 *
 * Created on December 22, 2015, 3:35 PM
 * Last Modified: 
 */

#ifndef SUMMERY_PAGE_H
#define SUMMERY_PAGE_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QGridLayout>

class SummaryPage : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* titleLblPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        SummaryPage(QWidget* parent = 0);
        QString* toString();
        ~SummaryPage();
};

#endif /* SUMMERY_PAGE_H */