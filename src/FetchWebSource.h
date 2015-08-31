/* 
 * File:   FetchWebSource.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class loads to the ROS web page containing the list
 *                   of packages available, and stores the HTML source.  It
 *                   then extracts the package names.
 * 
 * References: http://www.ros.org/browse/list.php
 *             http://www.ros.org/browse/list.php?package_type=package&distro=indigo
 *             http://doc.qt.io/qt-5/qtwebkitexamples-webkitwidgets-domtraversal-example.html
 *
 * Created on August 26, 2015, 3:31 PM
 */

#ifndef FETCH_WEB_SOURCE_H
#define	FETCH_WEB_SOURCE_H

#include <QWidget>
#include <QUrl>
#include <QString>
#include <QStringList>
#include <QWebElement>

#if(QT_VERSION < 0x050000)
#include <QWebView>
#include <QWebFrame>
#else
#include <QtWebKitWidgets/QWebView>
#include <QtWebKitWidgets/QWebFrame>
#endif

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

class FetchWebSource : public QWidget
{
    Q_OBJECT
    
    private:
        QStringList* attributeValStrLstPtr;
        QStringList* rosPkgStrLstPtr;
        
    private slots:
        /**
         * QT threads which are launched implicitly are asynchronous.
         * Therefore, this slot is connected to the signal loadFinished(bool)
         * to begin extracting data only after the webpage has finished loading.
         */
        void doStuff();
        
    public:
        QWebView view;
        
        /**
         * 
         * 
         * @param parent
         */
        FetchWebSource(QWidget* parent = 0);
        
        void loadPage();
        
        /**
         * 
         * 
         * @param parentElement
         */
        void examineChildElements(const QWebElement& parentElement);
        
        /**
         * 
         */
        QStringList* extractRosPkgs();
        
        void setRosPkgStrLstPtr(QStringList* rosPkgStrLstPtr);
        
        void addToRosPkgStrLstPtr(QString* rosPkgStrPtr);
        
        QStringList* getRosPkgStrLstPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~FetchWebSource();
};

#endif	
/* FETCH_WEB_SOURCE_H */