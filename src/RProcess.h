/* 
 * File:   RProcess.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This implementation inherits from QT class QProcess.  It
 *                   creates a temporary shell script at /tmp, from which it
 *                   runs commands.  This forces .bashrc to be sourced, as well
 *                   as enables custom ROS commands (such as sourcing the ROS
 *                   environment) to be run. 
 *
 * Created on June 9, 2015, 6:53 PM
 */

#ifndef RPROCESS_H
#define	RPROCESS_H

#include <QWidget>
#include <QProcess>

class RProcess : public QProcess
{
    private:
        ;
        
    public:
        RProcess();
        ;
        ~RProcess();
};

#endif	/* RPROCESS_H */

