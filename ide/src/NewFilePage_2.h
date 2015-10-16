/* 
 * File:   NewFilePage_3.h
 * Module: NewFile
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

#include "RideEnv.h"
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
        QVector<QListWidgetItem*>* cHeaderTemplateStrLst;
        QVector<QListWidgetItem*>* cSourceTemplateStrLst;
        QVector<QListWidgetItem*>* cppHeaderTemplateStrLst;
        QVector<QListWidgetItem*>* cppSourceTemplateStrLst;
        QVector<QListWidgetItem*>* pySourceTemplateStrLst;
        QVector<QListWidgetItem*>* jSourceTemplateStrLst;
        QVector<QListWidgetItem*>* lispSourceTemplateStdrLst;
        
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
         * Loads the template list for the language selected by the user
         * on the previous UI fragment into the UI.
         */
        void pushLangTemplatesToUi(RideEnv::Lang lang, RideEnv::FileType fileType); // !!!???should this be a slot!!!???
        
        void pushCTemplatesToUi(RideEnv::FileType fileType);
        void pushCppTemplatesToUi(RideEnv::FileType fileType);
        void pushPythonTemplatesToUi(RideEnv::FileType fileType);
        void pushJavaTemplatesToUi(RideEnv::FileType fileType);
        void pushLispTemplatesToUi(RideEnv::FileType fileType);
        void pushShellTemplatesToUi(RideEnv::FileType fileType);
        void pushOtherTemplatesToUi(RideEnv::FileType fileType);
        
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