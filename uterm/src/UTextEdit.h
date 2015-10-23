/* 
 * File:   UTextEdit.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class serves as a primitive container for the
 *                   application.  It can be embeded into windows, etc.
 *
 * Created on July 24, 2015, 12:08 PM
 */

#ifndef UTEXTEDIT_H
#define	UTEXTEDIT_H

#include <QWidget>
#include <QSysInfo>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QString>
#include <QIcon>
#include <QTextCursor>
#include <QTextBlock>
#include <QFile>
#include <QVector>

#include <iostream>

#include "OsCmdSwap.h"
#include "UProcess.h"
#include "Environment.h"

using namespace std;

class UTextEdit : public QPlainTextEdit
{
        Q_OBJECT
            
    private:
        QString* userAtCompStrPtr;
        QString* wdPathStrPtr;
        UProcess* rProcess;
        OsCmdSwap* osCmdSwapPtr;
        
    private slots:
        ;
        
    public:
        UTextEdit(QWidget* parent = 0);
        void keyPressEvent(QKeyEvent* e);
        QString* parseOutput(QString* outputStrPtr);
        void fiddleWithWdPathStrPtr(QString* absPathStrPtr);
        QString* dirFileExe(QVector<QString*> dat);
        void setUserAtCompStrPtr(QString* userAtCompStrPtr);
        QString* getUserAtCompStrPtr();
        void setWdPathStrPtr(QString* wdPathStrPtr);
        QString* getWdPathStrPtr();
        void setOsCmdSwapPtr(OsCmdSwap* osCmdSwapPtr);
        OsCmdSwap* getOsCmdSwapPtr();
        ~UTextEdit();
};

#endif	/* UTEXTEDIT_H */