/* 
 * File:   Core.h
 * Author: james
 *
 * Created on November 6, 2015, 1:41 PM
 */

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QDockWidget>

#ifndef CORE_H
#define	CORE_H

class Core : public QMainWindow
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        Core(QMainWindow* parent = 0);
        void setup();
        QString* toString();
        ~Core();
};

#endif	/* CORE_H */

