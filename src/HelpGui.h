/* 
 * File:   HelpGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 16, 2015, 9:44 PM
 */

#ifndef HELP_GUI_H
#define	HELP_GUI_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

class HelpGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE,
            PAGE_FOUR
        };
    
        Page currentPage;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
        
        QGridLayout* outerLayout;
        QHBoxLayout* buttonLayout;
        
    private slots:
        /*void handleBackBtnSlot();
        void handleNextBtnSlot();
        void handleFinishBtnSlot();
        void handleHelpBntSlot();
        void handleCancelBtnSlot();*/
        
    public:
        HelpGui(QWidget* parent = 0);
        /*void initBtns();
        void swapNextPage();
        void swapBackPage();
        void loadPage_1();
        void unloadPage_1();
        void loadPage_2();
        void unloadPage_2();
        void loadPage_3();
        void unloadPage_3();
        void loadPage_4();
        void unloadPage_4();
        QString* toString();*/
        ~HelpGui();
};

#endif	/* HELP_GUI_H */