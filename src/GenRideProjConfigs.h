/* 
 * File:   GenRideProjConfigs.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 27, 2015, 5:23 PM
 */

#ifndef GEN_RIDE_PROJ_CONFIGS_H
#define	GEN_RIDE_PROJ_CONFIGS_H

#include <QWidget>
#include <QDir>
#include <QFile>

class GenRideProjConfigs : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        GenRideProjConfigs(QWidget* parent = 0);
        ~GenRideProjConfigs();
};

#endif	/* GEN_RIDE_PROJ_CONFIGS_H */