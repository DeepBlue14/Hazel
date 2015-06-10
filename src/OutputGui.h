/* 
 * File:   OutputGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: The GUI serves as the widget where the build & run output
 *                   is displayed.
 *
 * Created on May 6, 2015, 4:44 PM
 */

#ifndef OUTPUTGUI_H
#define	OUTPUTGUI_H

#include <QWidget>
#include <QTextEdit>
#include <QGridLayout>
#include <QTabWidget>
#include <QVector>


class OutputGui : public QWidget
{
    Q_OBJECT
       
    private:
        QTabWidget* tabWidgetPtr;
        QTextEdit* outputTePtr;
        QVector<QWidget*> tabPtrVec;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        OutputGui(QWidget* parent = 0);
        void addTab(QWidget* tab, QString* tabName);
        QTabWidget* getTabWidget();
        ~OutputGui();
};

#endif	/* OUTPUTGUI_H */

