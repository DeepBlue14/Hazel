/* 
 * File:   NewFile.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEW_FILE_GUI_H
#define	NEW_FILE_GUI_H

#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QTabWidget>
#include <QFileDialog>
#include <QCompleter>
#include <QAbstractItemModel>
#include <QTextEdit>
#include <QByteArray>
#include <QPlainTextEdit>
#include <QProgressBar>
#include <QApplication>
#include <QMainWindow>
#include <QFormLayout>
#include <QGridLayout>

#include "FileGui.h"
#include "RideFile.h"
#include "Highlighter.h"
#include "NewFilePage_1.h"
#include "NewFilePage_2.h"
#include "NewFilePage_3.h"
#include "NewFilePage_4.h"
#include "SaveAll.h"
#include "FileTreeGui.h"

using namespace SaveAll;

class NewFileGui : public QWidget
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
    
    QTabWidget* masterTabWidgetPtr;
    Highlighter* highlighterPtr;
    FileGui* editor;
    QCompleter* completer;
    
    NewFilePage_1* newFilePage_1Ptr;
    NewFilePage_2* newFilePage_2Ptr;
    NewFilePage_3* newFilePage_3Ptr;
    NewFilePage_4* newFilePage_4Ptr;
    
    QAbstractItemModel* modelFromFile(const QString& fileName);
    
private slots:
    void handleBackBtnSlot();
    void handleNextBtnSlot();
    void handleFinishBtnSlot();
    void handleHelpBntSlot();
    void handleCancelBtnSlot();
    
public:
    NewFileGui(QWidget* parent = 0/*, QTabWidget* masterTabWidgetPtr = 0*/);
    void setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
    QTabWidget* getMasterTabWidgetPtr();
    void setHighlighterPtr(Highlighter* highlighterPtr);
    Highlighter* getHighlighterPtr();
    void initBtns();
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
    QString* toString();
    ~NewFileGui();
    
};

#endif	/* NEW_FILE_GUI_H */

