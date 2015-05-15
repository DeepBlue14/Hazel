/* 
 * File:   NewFile.h
 * Author: james
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEWFILEGUI_H
#define	NEWFILEGUI_H

#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QFormLayout>
#include <QGridLayout>

#include "NewFilePage_1.h"
#include "NewFilePage_2.h"
#include "NewFilePage_3.h"

class NewFileGui : public QWidget
{
    Q_OBJECT
            
private:
    enum Page
    {
        PAGE_ONE,
        PAGE_TWO,
        PAGE_THREE,
    };
    
    Page currentPage;
    
    QPushButton* backBtn;
    QPushButton* nextBtn;
    QPushButton* finishBtn;
    QPushButton* helpBtn;
    QPushButton* cancelBtn;
    
    QGridLayout* outerLayout;
    QHBoxLayout* buttonLayout;
    
    NewFilePage_1* newFilePage_1Ptr;
    NewFilePage_2* newFilePage_2Ptr;
    NewFilePage_3* newFilePage_3Ptr;
    
private slots:
    void handleBackBtnSlot();
    void handleNextBtnSlot();
    void handleFinishBtnSlot();
    void handleHelpBntSlot();
    void handleCancelBtnSlot();
    
public:
    NewFileGui(QWidget* parent = 0);
    void initBtns();
    void swapNextPage();
    void swapBackPage();
    void loadPage_1();
    void unloadPage_1();
    void loadPage_2();
    void unloadPage_2();
    void loadPage_3();
    void unloadPage_3();    
    ~NewFileGui();
    
};

#endif	/* NEWFILEGUI_H */

