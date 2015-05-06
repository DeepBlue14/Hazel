/* 
 * File:   NewProject.h
 * Author: james
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEWPROJECT_H
#define	NEWPROJECT_H

#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QStringList>
#include <QFile>
#include <QIcon>
#include <QString>
#include <QGridLayout>
#include <QHBoxLayout>

#include "NewProjectPage_1.h"
#include "NewProjectPage_2.h"
#include "NewProjectPage_3.h"

class NewProjectGui : public QWidget
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
    
    NewProjectPage_1* newProjectPage_1Ptr;
    NewProjectPage_2* newProjectPage_2Ptr;
    NewProjectPage_3* newProjectPage_3Ptr;
    
private slots:
    void handleBackBtnSlot();
    void handleNextBtnSlot();
    void handleFinishBtnSlot();
    void handleHelpBntSlot();
    void handleCancelBtnSlot();
    
public:
    NewProjectGui(QWidget* parent = 0);
    void initBtns();
    void swapNextPage();
    void swapBackPage();
    void loadPage_1();
    void unloadPage_1();
    void loadPage_2();
    void unloadPage_2();
    void loadPage_3();
    void unloadPage_3();    
    ~NewProjectGui();
    
};

#endif	/* NEWPROJECT_H */

