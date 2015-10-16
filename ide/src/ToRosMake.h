/* 
 * File:   ToRosMake.h
 * Module: Reconfig
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class parses a standard CMakeLists file and generates
 *                   equivalent ROS CMakeLists code.
 *
 * Created on July 24, 2015, 6:41 PM
 */

#ifndef TOROSMAKE_H
#define	TOROSMAKE_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QString>

#include <iostream>

#include "ToCMake.h"

using namespace std;

class ToRosMake : public ToCMake
{
    private:
        ;
    
    public:
        /**
         * Constructor.
         */
        ToRosMake();
        
        /**
         * Classic toString method.
         * 
         * @return data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~ToRosMake();
};

#endif	/* TOROSMAKE_H */