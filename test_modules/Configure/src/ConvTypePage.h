/*
 * Module: Configure 
 * File:   ConversionOptPage.h
 * Author: james
 * Email: 
 * File Description:
 *
 * Created on December 22, 2015, 1:52 PM
 * Last Modified: 
 */

#ifndef CONVERSION_OPT_PAGE_H
#define CONVERSION_OPT_PAGE_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QString>
#include <QGridLayout>

class ConvTypePage : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* labelPtr;
        QRadioButton* toCMakeRbPtr;
        QRadioButton* toRosbuildRbPtr;
        QRadioButton* toCatkinRbPtr;
        QRadioButton* toRos2RbPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        ConvTypePage(QWidget* parent = 0);
        QString* toString();
        ~ConvTypePage();
};

#endif /* CONVERSION_OPT_PAGE_H */