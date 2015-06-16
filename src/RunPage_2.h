/* 
 * File:   RunPage_2.h
 * Author: james
 *
 * Created on May 21, 2015, 7:55 PM
 */

#ifndef RUNPAGE_2_H
#define	RUNPAGE_2_H

#include <QWidget>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QString>

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

class RunPage_2 : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* launchFileLePtr;
        QFileDialog* launchFileDialogPtr;
        QPushButton* selectLaunchFilePbPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* launchFileStrPtr;
        
    private slots:
        void handleSelectLaunchFilePbPtrSlot();
        
    public:
        RunPage_2(QWidget* parent = 0);
        void setLaunchFileStrPtr();
        QString* getLaunchFileStrPtr();
        QString* toString();
        ~RunPage_2();
};

#endif	/* RUNPAGE_2_H */

