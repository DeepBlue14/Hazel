/* 
 * File:   DirPropGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This UI opens when the user right-clicks on a directory
 *                   (not including a project root directory) in the file tree
 *                   and selects "properties" from the menu.
 *
 * Created on October 4, 2015, 3:36 PM
 */

#ifndef DIR_PROP_GUI_H
#define	DIR_PROP_GUI_H

#include <QWidget>
#include <QString>


#include <iostream>


using namespace std;

class DirPropGui : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        DirPropGui(QWidget* parent = 0);
        QString* toString();
        ~DirPropGui();
        
};

#endif	/* DIR_PROP_GUI_H */