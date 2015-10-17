/* 
 * File:   NewRosWsGui.h
 * Module: NewRosWs
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 10:18 PM
 */

#ifndef NEW_ROS_WS_GUI_H
#define	NEW_ROS_WS_GUI_H

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "RosEnv.h"
#include "NewRosWsPage_1.h"
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

class NewRosWsGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO
        };
        
        Page currentPage;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
    
        QGridLayout* outerLayout;
        QHBoxLayout* buttonLayout;
        
        NewRosWsPage_1* newRosWsPage_1Ptr;
        
    private slots:
    /**
     * 
     */
    void handleBackBtnSlot();
    
    /**
     * 
     */
    void handleNextBtnSlot();
    
    /**
     * 
     */
    void handleFinishBtnSlot();
    
    /**
     * 
     */
    void handleHelpBntSlot();
    
    /**
     * 
     */
    void handleCancelBtnSlot();
        
    public:
        /**
         * 
         * 
         * @param parent
         */
        NewRosWsGui(QWidget* parent = 0);
        
        
        void initBtns();
        
        
        void swapNextPage();
        
        
        void swapBackPage();
        
        
        void loadPage_1();
        
        
        void unloadPage_1();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewRosWsGui();
};

#endif	/* NEW_ROS_WS_GUI_H */