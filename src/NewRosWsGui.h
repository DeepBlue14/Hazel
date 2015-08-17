/* 
 * File:   NewRosWsGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 10:18 PM
 */

#ifndef NEW_ROS_WS_GUI_H
#define	NEW_ROS_WS_GUI_H

#include <QWidget>
#include <QString>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class NewRosWsGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        /**
         * 
         * 
         * @param parent
         */
        NewRosWsGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewRosWsGui();
};

#endif	/* NEW_ROS_WS_GUI_H */