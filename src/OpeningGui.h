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
#include <QGridLayout>

class OpeningGui : public QWidget
{
    Q_OBJECT
            
private:
    QLabel* organizationNameLabelPtr;
    QLabel* organizationNameIconLabelPtr;
    QLabel* applicationNameLabelPtr;
    QLabel* applicationNameIconLabelPtr;
    QLabel* githubLabelPtr;
    QGridLayout* outerLayoutPtr;

private slots:
    ;
    
public:
    OpeningGui(QWidget* parent = 0);
    ~OpeningGui();
        
};

#endif	/* OPENING_GUI_H */

