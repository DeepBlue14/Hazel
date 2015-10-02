/* 
 * File:   RunPage_1.h
 * Author: james
 *
 * Created on May 21, 2015, 7:53 PM
 */

#ifndef RUN_SETUP_PAGE_1_H
#define	RUN_SETUP_PAGE_1_H

#include <QWidget>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QButtonGroup>
#include <QRadioButton>
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

class RunSetupPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QButtonGroup* buttonGroupPtr;
        
        QGridLayout* outerLayoutPtr;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        RunSetupPage_1(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getRunOptionPtr();
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~RunSetupPage_1();
};

#endif	/* RUN_SETUP_PAGE_1_H */