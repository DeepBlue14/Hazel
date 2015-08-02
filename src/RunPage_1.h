/* 
 * File:   RunPage_1.h
 * Author: james
 *
 * Created on May 21, 2015, 7:53 PM
 */

#ifndef RUN_PAGE_1_H
#define	RUN_PAGE_1_H

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

class RunPage_1 : public QWidget
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
        RunPage_1(QWidget* parent = 0);
        
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
        ~RunPage_1();
};

#endif	/* RUN_PAGE_1_H */