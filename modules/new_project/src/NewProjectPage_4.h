/* 
 * File:   NewProjectPage_3.h
 * Module: NewProject
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 5, 2015, 1:36 PM
 */

#ifndef NEW_PROJECT_PAGE_4_H
#define	NEW_PROJECT_PAGE_4_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <iostream>

#include "RosEnv.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class NewProjectPage_4 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewProjectPage_4(QWidget* parent = 0);

    /**
     * 
     * 
     * @return 
     */
    QStringList* getDependsEnteredStrList();

    /**
     * Classic toString method.
     * 
     * @return class data. 
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewProjectPage_4();
    
    
private slots:
    /**
     * 
     */
    void handleAddToListBtnPtrSlot();

    /**
     * 
     */
    void handleRmFromListBtnPtrSlot();
    
    
private:
    QLabel* titlePtr;
    QStringList* dependsEnteredStrList;
    QLineEdit* dependsLePtr;
    QPushButton* addToListBtnPtr;
    QListWidget* dependsEnteredTypeLw;
    QPushButton* rmFromListBtnPtr;

    QGridLayout* outerLayout;
    
    
};

#endif	/* NEW_PROJECT_PAGE_4_H */