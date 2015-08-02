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
#include <QFont>
#include <QFontMetrics>
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

#include <iostream>

#include "FileGui.h"
#include "RFile.h"
#include "Highlighter.h"
#include "NewFilePage_1.h"
#include "NewFilePage_2.h"
#include "NewFilePage_3.h"
#include "NewFilePage_4.h"
#include "SaveAll.h"
#include "FileTreeGui.h"
//#include "LinkFileWithGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace SaveAll;
using namespace std;

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
    
    QTabWidget* northTabWidgetPtr;
    Highlighter* highlighterPtr;
    FileGui* editor;
    QCompleter* completer;
    
    NewFilePage_1* newFilePage_1Ptr;
    NewFilePage_2* newFilePage_2Ptr;
    NewFilePage_3* newFilePage_3Ptr;
    NewFilePage_4* newFilePage_4Ptr;
    
    QAbstractItemModel* modelFromFile(const QString& fileName);
    
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
    NewFileGui(QWidget* parent = 0/*, QTabWidget* masterTabWidgetPtr = 0*/);
    
    /**
     * 
     * 
     * @param masterTabWidgetPtr
     */
    void setNorthTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
    
    /**
     * 
     * 
     * @return 
     */
    QTabWidget* getMasterTabWidgetPtr();
    
    /**
     * 
     * 
     * @param highlighterPtr
     */
    void setHighlighterPtr(Highlighter* highlighterPtr);
    
    /**
     * 
     * 
     * @return 
     */
    Highlighter* getHighlighterPtr();
    
    /**
     * 
     */
    void initBtns();
    
    /**
     * 
     */
    void swapNextPage();
    
    /**
     * 
     */
    void swapBackPage();
    
    /**
     * 
     */
    void loadPage_1();
    
    /**
     * 
     */
    void unloadPage_1();
    
    /**
     * 
     */
    void loadPage_2();
    
    /**
     * 
     */
    void unloadPage_2();
    
    /**
     * 
     */
    void loadPage_3();
    
    /**
     * 
     */
    void unloadPage_3();
    
    /**
     * 
     */
    void loadPage_4();
    
    /**
     * 
     */
    void unloadPage_4();
    
    /**
     * 
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * 
     */
    ~NewFileGui();
    
};

#endif	/* NEW_FILE_GUI_H */

