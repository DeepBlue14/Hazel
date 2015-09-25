/* 
 * File:   NewFilePage_3.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 10:53 PM
 */

#ifndef NEW_FILE_PAGE_3_H
#define	NEW_FILE_PAGE_3_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QStringList>
#include <QListWidget>
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
        QLabel* titlePtr;
        QStringList* cHeaderTemplateStrLst;
        QStringList* cSourceTemplateStrLst;
        QStringList* cppHeaderTemplateStrLst;
        QStringList* cppSourceTemplateStrLst;
        QStringList* pySourceTemplateStrLst;
        QStringList* jSourceTemplateStrLst;
        QStringList* lispSourceTemplateStdrLst;
        
        QListWidget* templatesLstWidPtr;
        QGridLayout* outerLayout;
        
        QString* selectedTemplateStrPtr;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent pointer to object of parent type.
         */
        NewFilePage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        void triggerMutators();
        
        /**
         * 
         * 
         * @param selectedTemplateStrPtr
         */
        void setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getSelectedTemplateStrPtr();
        
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

#endif	/* NEW_FILE_PAGE_3_H */