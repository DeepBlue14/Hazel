/* 
 * File:   ProjPropGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This UI opens when the user right-clicks on a projects
 *                   root directory in the file tree and selects "properties"
 *                   from the menu.
 *
 * Created on October 4, 2015, 3:36 PM
 */

#include <QWidget>
#include <QString>


#include <iostream>


using namespace std;

#ifndef PROJ_PROP_GUI_H
#define	PROJ_PROP_GUI_H

class ProjPropGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
        
public:
    ProjPropGui(QWidget* parent = 0);
    QString* toString();
    ~ProjPropGui();
};

#endif	/* PROJ_PROP_GUI_H */