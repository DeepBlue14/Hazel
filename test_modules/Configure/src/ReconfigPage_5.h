/* 
 * File:   ReconfigPage_5.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This "page" tells the user that the preliminary work has
 *                   been completed, and that it is time to:
 *                   1) review the new custom package.xml files generated.
 *                   2) do the actual makefile/CMakeLists-->ROS-CMakeLists
 *                   conversions.
 *                   
 *
 * Created on July 31, 2015, 12:42 PM
 * Last Modified: 
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
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        ReconfigPage_5(QWidget* parent = 0);
        
        /**
         * Destructor.
         */
        ~ReconfigPage_5();
};

#endif	/* RECONFIG_PAGE_5_H */