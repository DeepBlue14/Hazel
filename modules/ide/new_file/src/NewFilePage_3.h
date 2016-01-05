/* 
 * File:   NewFilePage_4.h
 * Module: new_file
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainter: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 14, 2015, 1:34 PM
 * Last Modified: 1/05/2016
 */

#ifndef NEW_FILE_PAGE_3_H
#define	NEW_FILE_PAGE_3_H

#include <QWidget>
#include <QStringList>
#include <QVector>
#include <QString>
#include <QLabel>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "CustomMsgsGui.h"
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

class NewFilePage_3 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewFilePage_3(QWidget* parent = 0);

    /**
     * 
     * 
     * @param titlePtr
     */
    void setTitlePtrText(QString* titleText);

    /**
     * 
     * 
     * @return 
     */
    QString* getTitlePtrText();

    /**
     * 
     */
    void setMsgCatagoryStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getMsgCatagoryStrPtr();

    /**
     * 
     */
    void setSpecificMsgStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getSpecificMsgStrPtr();

    /**
     * 
     */
    void triggerMutators();

    /**
     * Classic toString method.
     * 
     * @return data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewFilePage_3();
    
    
private slots:

    /**
     * 
     */
    void handleCustBtnPtrSlot();

    /**
     * 
     */
    void handleSwapOptionsSlot();

    /**
     * 
     */
    void handleAddBtnPtrSlot();

    /**
     * 
     */
    void handleRemoveBtnPtrSlot();
    
    
private:
    QLabel* titlePtr;
    QVector<QListWidgetItem*>* msgCatagoryStrLstPtr;
    QVector<QVector<QListWidgetItem*>*>* specificMsgStrLstVec;
    QVector<QListWidgetItem*>* typesEnteredStrLstPtr;
    QListWidget* msgCatagoryLwPtr;
    QListWidget* specificMsgLwPtr;
    QListWidget* addedLwPtr;
    QPushButton* custBtnPtr;
    QPushButton* addBtnPtr;
    QPushButton* removeBtnPtr;

    CustomMsgsGui* customMsgsGuiPtr;

    QHBoxLayout* btnLayout;
    QGridLayout* outerLayoutPtr;

    QString* msgCatagoryStrPtr;
    QString* specificMsgStrPtr;
    
    
};

#endif	/* NEW_FILE_PAGE_3_H */