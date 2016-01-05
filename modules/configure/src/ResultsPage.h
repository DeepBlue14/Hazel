/* 
 * File:   ReconfigPage_3.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class features a "page" widget to allow the user
 *                   to specify any sub &&/|| pub modules to be generated.
 *                   The user may specify exact locations, or can have them
 *                   generated in all source directories in the package.
 *
 * Created on July 20, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef RECONFIG_PAGE_3_H
#define	RECONFIG_PAGE_3_H

#include <QWidget>
#include <QCheckBox>
#include <QGridLayout>

class ResultsPage : public QWidget
{
    Q_OBJECT
            
    private:
        QCheckBox* langCbPtr;
        QGridLayout* outerLayout;
        
        QString* langStrPtr;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        ResultsPage(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param langStrPtr
         */
        void setLangStrPtr(QString langStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString getLangStrPtr();
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~ResultsPage();
};

#endif	/* RECONFIG_PAGE_3_H */