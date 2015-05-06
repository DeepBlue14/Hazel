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

class OutputGui : public QWidget
{
    Q_OBJECT
       
    private:
        QTextEdit* outputTePtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        OutputGui(QWidget* parent = 0);
        ~OutputGui();
};

#endif	/* OUTPUTGUI_H */

