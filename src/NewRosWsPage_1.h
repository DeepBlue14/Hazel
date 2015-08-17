/* 
 * File:   NewRosWsPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 10:18 PM
 */

#ifndef NEW_ROS_WS_PAGE_1_H
#define	NEW_ROS_WS_PAGE_1_H

#include <QWidget>
#include <QString>
#include <QStringList>
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

class NewRosWsPage_1 : public QWidget
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
        NewRosWsPage_1(QWidget* parent = 0);
        
        /**
         * This method searches the /opt directory for ROS installations.
         * 
         * @return a list of the ROS versions installed.
         */
        QStringList* findRosVersions();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewRosWsPage_1();
};

#endif	/* NEW_ROS_WS_PAGE_1_H */