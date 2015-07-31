/* 
 * File:   ReconfigGui.h
 * Author: james
 *
 * Created on July 20, 2015, 5:05 PM
 */

#ifndef RECONFIGGUI_H
#define	RECONFIGGUI_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "ReconfigPage_1.h"
#include "ReconfigPage_2.h"
#include "ReconfigPage_3.h"
#include "ReconfigPage_4.h"
#include "ReconfigPage_5.h"

using namespace std;

class ReconfigGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE,
            PAGE_FOUR,
            PAGE_FIVE
        };
        
        Page currentPage;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
        
        ReconfigPage_1* reconfigPage_1Ptr;
        ReconfigPage_2* reconfigPage_2Ptr;
        ReconfigPage_3* reconfigPage_3Ptr;
        ReconfigPage_4* reconfigPage_4Ptr;
        ReconfigPage_5* reconfigPage_5Ptr;
        
        QHBoxLayout* buttonLayout;
        QGridLayout* outerLayout;
        
    private slots:
        void handleBackBtnSlot();
        void handleNextBtnSlot();
        void handleFinishBtnSlot();
        void handleHelpBntSlot();
        void handleCancelBtnSlot();
        
    public:
        ReconfigGui(QWidget* parent = 0);
        void initBtns();
        void swapBackPage();
        void swapNextPage();
        void loadPage_1();
        void unloadPage_1();
        void loadPage_2();
        void unloadPage_2();
        void loadPage_3();
        void unloadPage_3();
        void loadPage_4();
        void unloadPage_4();
        void loadPage_5();
        void unloadPage_5();
        QString* toString();
        ~ReconfigGui();
};

#endif	/* RECONFIGGUI_H */