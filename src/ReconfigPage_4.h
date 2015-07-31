/* 
 * File:   ReconfigPage_4.h
 * Author: james
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIGPAGE_4_H
#define	RECONFIGPAGE_4_H

#include <QWidget>
#include <QTextEdit>
#include <QGridLayout>

class ReconfigPage_4 : public QWidget
{
    Q_OBJECT
            
    private:
        QTextEdit* outputTe;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        ReconfigPage_4(QWidget* parent = 0);
        ~ReconfigPage_4();
};

#endif	/* RECONFIGPAGE_4_H */