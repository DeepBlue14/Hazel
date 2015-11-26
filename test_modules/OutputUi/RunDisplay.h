/* 
 * File:   Core.h
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on November 6, 2015, 1:41 PM
 */

#ifndef RUN_DISPLAY_H
#define	RUN_DISPLAY_H

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QDockWidget>
#include <QTextEdit>


class RunDisplay : public QMainWindow
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        RunDisplay(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~RunDisplay();
};

#endif	/* RUN_DISPLAY_H */