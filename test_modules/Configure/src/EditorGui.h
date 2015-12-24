/* 
 * File:   Editor.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on December 23, 2015, 6:47 PM
 * Last Modified: 
 */

#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include <QStringList>
#include <QListWidget>
#include <QDockWidget>
#include <QString>

#include "EditorCentralWid.h"

class EditorGui : public QMainWindow
{
    Q_OBJECT
           
    private:
        EditorCentralWid* centralWidPtr;
        QListWidget* navLstWidPtr;
        
    public:
        EditorGui(QMainWindow* parent = 0);
        QString* toString();
        ~EditorGui();
};

#endif /* EDITOR_H */