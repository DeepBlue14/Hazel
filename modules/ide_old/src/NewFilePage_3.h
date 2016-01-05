/* 
 * File:   NewFilePage_4.h
 * Module: NewFile
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 14, 2015, 1:34 PM
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

using namespace std;

class NewFilePage_3 : public QWidget
{
    Q_OBJECT
            
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
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewFilePage_3(QWidget* parent = 0);
        
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
        ~NewFilePage_3();
};

#endif	/* NEW_FILE_PAGE_3_H */
