/* 
 * File:   OptionPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 26, 2015, 12:17 AM
 */

#ifndef OPTIONPAGE_1_H
#define	OPTIONPAGE_1_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QDir>
#include <QListWidget>
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

class OptionPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* cssFileStrLstPtr;
        QListWidget* cssFileLstWigPtr;
        QGridLayout* outerLayout;
        
    public:
        OptionPage_1(QWidget* parent = 0);
        QStringList* scanForCssFiles();
        void initCssOptionLstWig();
        ~OptionPage_1();
};

#endif	/* OPTIONPAGE_1_H */

