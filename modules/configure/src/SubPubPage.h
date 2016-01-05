/* 
 * File:   SubPubPage.h
 * Moduel: Configure
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on December 22, 2015, 2:14 PM
 * Last Modified: 
 */


#ifndef SUB_PUB_PAGE_H
#define SUB_PUB_PAGE_H

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

#include "CustomMsgsPage.h"
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

class SubPubPage : public QWidget
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

        CustomMsgsPage* customMsgsGuiPtr;
        
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
        SubPubPage(QWidget* parent = 0);
        
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
        ~SubPubPage();
};

#endif /* SUB_PUB_PAGE_H */