/* 
 * File:   OperationPage.h
 * Author: james
 *
 * Created on December 21, 2015, 6:26 PM
 */

#ifndef OPERATIONPAGE_H
#define OPERATIONPAGE_H

#include <QWidget>
#include <QRadioButton>
#include <QPushButton>
#include <QGridLayout>
#include <QString>

#include "RosEnv.h"

class OperationPage : public QWidget
{
    Q_OBJECT
    
    private:
        QRadioButton* scanBtnPtr;
        QRadioButton* reconfigBtnPtr;
        QRadioButton* resultsBtnPtr;
        QRadioButton* otherBtnPtr;
        
        QGridLayout* btnLayout;
        QGridLayout* outerLayout;
    
    private slots:
        ;
        
    public:
        OperationPage(QWidget* parent = 0);
        QString* toString();
        ~OperationPage();
};

#endif /* OPERATIONPAGE_H */