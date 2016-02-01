/* 
 * File:   NewWorkspacePage_1.h
 * Module: NewWorkspace
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 17, 2015, 11:20 PM
 */

#ifndef NEW_WORKSPACE_PAGE_1_H
#define	NEW_WORKSPACE_PAGE_1_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QRadioButton>
#include <QButtonGroup>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

#include <iostream>

#include "ButtonGroupWidget.h"
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
using std::cerr;
using std::endl;

class NewWorkspacePage_1 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewWorkspacePage_1(QWidget* parent = 0);

    /**
     * 
     */
    void setRosVersionStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getRosVersionStrPtr();

    /**
     * Mutator.
     */
    void setNewOrFromExStrPtr();

    /**
     * Accessor.
     * 
     * @return 
     */
    QString* getNewOrFromExStrPtr();

    /**
     * 
     */
    void triggerMutators();

    /**
     * Classic toString method.
     * 
     * @return class data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewWorkspacePage_1();
    
    
private slots:
    ;
    
    
private:
    QLabel* titlePtr;
    //QVector<QListWidgetItem*>* rosVersionStrLstPtr;
    QButtonGroup* rosVersionBtnGroupPtr;
    ButtonGroupWidget<QRadioButton>* btnGroupWidPtr;
    QRadioButton* ros1RadBtnPtr;
    QRadioButton* ros2RadBtnPtr;
    QVector<QListWidgetItem*>* ros1DistroStrLstPtr;
    //QListWidget* rosVersionsLwPtr;
    QListWidget* rosDistroLwPtr;

    QGridLayout* outerLayoutPtr;

    QString* rosVersionStrPtr;
    QString* newOrFromExStrPtr;
    
    
};

#endif	/* NEW_WORKSPACE_PAGE_1_H */