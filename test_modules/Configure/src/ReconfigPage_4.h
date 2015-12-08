/* 
 * File:   ReconfigPage_4.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This "page" displays what the program is doing during
 *                   run-time (i.e. searching the old project for makefiles,
 *                   creating a new project, etc.).
 *
 * Created on July 20, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef RECONFIG_PAGE_4_H
#define	RECONFIG_PAGE_4_H

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
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        ReconfigPage_4(QWidget* parent = 0);
        
        /**
         * Destructor.
         */
        ~ReconfigPage_4();
};

#endif	/* RECONFIG_PAGE_4_H */