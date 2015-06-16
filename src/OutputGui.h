/* 
 * File:   OutputGui.h
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
#include <QGridLayout>
#include <QTabWidget>
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
        QTabWidget* tabWidgetPtr;
        QTextEdit* outputTePtr;
        QVector<QWidget*> tabPtrVec;
        QString* outputStrPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        OutputGui(QWidget* parent = 0);
        void addTab(QWidget* tab, QString* tabName);
        QTabWidget* getTabWidget();
        void setOutputStrPtr(QString* outputStrPtr);
        QString* getOutputStrPtr();
        void dumpToGui(QString* outputStrPtr);
        QString* toString();
        ~OutputGui();
};

#endif	/* OUTPUT_GUI_H */