/* 
 * File:   NewFilePage_2.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 15, 2015, 9:25 AM
 */

#ifndef NEW_FILE_PAGE_2_H
#define	NEW_FILE_PAGE_2_H

#include <QWidget>
#include <QString>
#include <QRadioButton>
#include <QButtonGroup>
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

class NewFilePage_2 : public QWidget
{
    Q_OBJECT
            
    private:
        QButtonGroup* buttonGroupPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* optionStrPtr;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewFilePage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        void setOptionStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getOptionStrPtr();
        
        /**
         * 
         */
        void triggerMutators();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewFilePage_2();
};

#endif	/* NEW_FILE_PAGE_2_H */