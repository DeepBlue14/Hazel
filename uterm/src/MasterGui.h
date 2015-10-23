/* 
 * File:   MasterGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class serves as the "master" connection between back
 *                   end and front end.  It allows the application to be
 *                   enclosed in a frame, which enables the use of tool-bars,
 *                   menus, and similar UI elements to be attached.
 *
 * Created on July 22, 2015, 10:43 AM
 */

#ifndef MASTER_GUI_H
#define	MASTER_GUI_H

#include <QWidget>
#include <QSysInfo>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QString>
#include <QIcon>
#include <QTextCursor>
#include <QTextBlock>
#include <QFile>
#include <QGridLayout>

#include <iostream>

#include "LoadParallels.h"
#include "OsCmdSwap.h"
#include "UTextEdit.h"

using namespace std;

class MasterGui : public QWidget
{
    Q_OBJECT
            
    private:
        QString* osStrPtr;
        LoadParallels* loadParallels;
        OsCmdSwap* osCmdSwapPtr;
        UTextEdit* uTextEdit;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        MasterGui(QWidget* parent = 0);
        void setOsStrPtr(QString* osStrPtr);
        QString* getOsStrPtr();
        void setOsCmdSwapPtr(OsCmdSwap* osCmdSwapPtr);
        OsCmdSwap* getOsCmdSwapPtr();
        ~MasterGui();
};

#endif	/* MASTER_GUI_H */