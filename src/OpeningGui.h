/* 
 * File:   OpeningGui.h
 * Author: james
 *
 * Created on May 1, 2015, 9:56 PM
 */

#ifndef OPENING_GUI_H
#define	OPENING_GUI_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>

class OpeningGui : public QWidget
{
    Q_OBJECT
            
private:
    QLabel* organizationNameLabelPtr;
    QLabel* applicationNameLabelPtr;
    QLabel* githubLabelPtr;
    

private slots:
    ;
    
public:
    OpeningGui(QWidget* parent = 0);
    ~OpeningGui();
        
};

#endif	/* OPENING_GUI_H */

