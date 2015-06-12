/* 
 * File:   RunPage_3.h
 * Author: james
 *
 * Created on May 21, 2015, 7:56 PM
 */

#ifndef RUN_PAGE_3_H
#define	RUN_PAGE_3_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class RunPage_3 : public QWidget
{
    Q_OBJECT
           
    private:
        QStringList* cmdsEnteredStrList;
        QLineEdit* cmdsLePtr;
        QPushButton* addToListBtnPtr;
        QListWidget* cmdsEnteredTypeLw;
        QPushButton* rmFromListBtnPtr;
        
        QGridLayout* outerLayout;
        

    private slots:
        void handleAddToListBtnPtrSlot();
        void handleRmFromListBtnPtrSlot();
        
    public:
        RunPage_3(QWidget* parent = 0);
        QStringList* getCmdsEnteredStrList();
        QString* toString();
        ~RunPage_3();
};
#endif	/* RUN_PAGE_3_H */