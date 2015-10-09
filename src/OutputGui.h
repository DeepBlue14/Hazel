/* 
 * File:   OutputGui.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: The GUI serves as the widget where the build & run output
 *                   is displayed.
 *
 * Created on May 6, 2015, 4:44 PM
 */

#ifndef OUTPUT_GUI_H
#define	OUTPUT_GUI_H

#include <QWidget>
#include <QTextEdit>
#include <QToolBar>
#include <QGridLayout>
#include <QTabWidget>
#include <QAction>
#include <QVector>
#include <QString>

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

class OutputGui : public QWidget
{
    Q_OBJECT
       
    private:
        QToolBar* debugWidPtr; // ???make this it's own class???
        QTabWidget* tabWidgetPtr;
        QTextEdit* outputTePtr;
        QVector<QWidget*> tabPtrVec;
        QString* outputStrPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        OutputGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param tab
         * @param tabName
         */
        void addTab(QWidget* tab, QString* tabName);
        
        /**
         * 
         * 
         * @return 
         */
        QTabWidget* getTabWidget();
        
        /**
         * 
         * 
         * @param outputStrPtr
         */
        void setOutputStrPtr(QString* outputStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getOutputStrPtr();
        
        /**
         * 
         * 
         * @param outputTePtr
         */
        void setOutputTePtr(QTextEdit* outputTePtr);
        
        /**
         * 
         * 
         * @return 
         */
        QTextEdit* getOutputTePtr();
        
        /**
         * 
         * 
         * @param outputStrPtr
         */
        void dumpToGui(QString* outputStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~OutputGui();
};

#endif	/* OUTPUT_GUI_H */