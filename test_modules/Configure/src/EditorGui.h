/* 
 * File:   Editor.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on December 23, 2015, 6:47 PM
 * Last Modified: 12/24/2015
 */

#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include <QStringList>
#include <QListWidgetItem>
#include <QListWidget>
#include <QDockWidget>
#include <QString>

#include "EditorCentralWid.h"
#include "WestGui.h"

class EditorGui : public QMainWindow
{
    Q_OBJECT
           
    private:
        EditorCentralWid* centralWidPtr;
        WestGui* westGuiPtr;
        
    public:
        EditorGui(QMainWindow* parent = 0);
        QString* toString();
        ~EditorGui();
};

#endif /* EDITOR_H */