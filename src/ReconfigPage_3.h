/* 
 * File:   ReconfigPage_3.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class features a "page" widget to allow the user
 *                   to specify any sub &&/|| pub modules to be generated.
 *                   The user may specify exact locations, or can have them
 *                   generated in all source directories in the package.
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIG_PAGE_3_H
#define	RECONFIG_PAGE_3_H

#include <QWidget>
#include <QCheckBox>
#include <QGridLayout>

class ReconfigPage_3 : public QWidget
{
    Q_OBJECT
            
    private:
        QCheckBox* langCbPtr;
        QGridLayout* outerLayout;
        
        QString* langStrPtr;
        
    private slots:
        ;
        
    public:
        ReconfigPage_3(QWidget* parent = 0);
        void setLangStrPtr(QString langStrPtr);
        QString getLangStrPtr();
        QString* toString();
        ~ReconfigPage_3();
};

#endif	/* RECONFIG_PAGE_3_H */