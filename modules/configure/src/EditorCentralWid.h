/* 
 * File:   EditorCentralWid.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on December 23, 2015, 7:13 PM
 * Last Modified: 
 */

#ifndef EDITOR_CENTRAL_WID_H
#define EDITOR_CENTRAL_WID_H

#include <QWidget>
#include <QTextEdit> //TODO: replace these with a custom textedit from PrettyPrint
#include <QString>
#include <QGridLayout>

#include "FileGui.h"

class EditorCentralWid : public QWidget
{
    Q_OBJECT
            
    private:
        FileGui* oldFileGuiPtr;
        FileGui* newFileGuiPtr;
        QGridLayout* outerLayout;
        
    public:
        EditorCentralWid(QWidget* parent = 0);
        QString* toString();
        ~EditorCentralWid();
};

#endif /* EDITOR_CENTRAL_WID_H */