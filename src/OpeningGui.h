/* 
 * File:   OpeningGui.h
 * Author: james
 *
 * Created on May 1, 2015, 9:56 PM
 */

#ifndef OPENING_GUI_H
#define	OPENING_GUI_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>
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

class OpeningGui : public QWidget
{
    Q_OBJECT
            
private:
    //QLabel* organizationNameLabelPtr;
    //QLabel* organizationNameIconLabelPtr;
    QLabel* applicationNameLabelPtr;
    QLabel* appLabelPtr;
    QLabel* applicationNameIconLabelPtr;
    QLabel* githubLabelPtr;
    QGridLayout* outerLayoutPtr;

private slots:
    ;
    
public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    OpeningGui(QWidget* parent = 0);
    
    /**
     * 
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * 
     */
    ~OpeningGui();
        
};

#endif	/* OPENING_GUI_H */