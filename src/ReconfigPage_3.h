/* 
 * File:   ReconfigPage_3.h
 * Author: james
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIGPAGE_3_H
#define	RECONFIGPAGE_3_H

#include <QWidget>
#include <QTextEdit>
#include <QGridLayout>

class ReconfigPage_3 : public QWidget
{
    Q_OBJECT
            
    private:
        QTextEdit* outputTe;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        ReconfigPage_3(QWidget* parent = 0);
        QString* toString();
        ~ReconfigPage_3();
};

#endif	/* RECONFIGPAGE_3_H */