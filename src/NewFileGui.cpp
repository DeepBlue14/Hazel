#include "NewFileGui.h"


NewFileGui::NewFileGui(QWidget* parent/*, QTabWidget* masterTabWidgetPtr*/) : QWidget(parent)
{   
    outerLayout = new QGridLayout(this);
    newFilePage_1Ptr = new NewFilePage_1();
    newFilePage_2Ptr = new NewFilePage_2();
    newFilePage_3Ptr = new NewFilePage_3();
    newFilePage_4Ptr = new NewFilePage_4();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    this->setLayout(outerLayout);
    /*
    //--------------------------------------------------------------------------
    QFile file("/home/james/NetBeansFiles/Hazel/src/qss/Dark.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    backBtn->setStyleSheet(styleSheet);
    //--------------------------------------------------------------------------
    */
}


void NewFileGui::setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    this->masterTabWidgetPtr = masterTabWidgetPtr;
}


QTabWidget* NewFileGui::getMasterTabWidgetPtr()
{
    return masterTabWidgetPtr;
}


void NewFileGui::setHighlighterPtr(Highlighter* highlighter)
{
    this->highlighterPtr = highlighter;
}


Highlighter* NewFileGui::getHighlighterPtr()
{
    return highlighterPtr;
}


void NewFileGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewFileGui::handleNextBtnSlot()
{
    swapNextPage();
}


void NewFileGui::handleFinishBtnSlot()
{
    cout << "\"Finish\" button selected" << endl;
    newFilePage_1Ptr->triggerMutators();
    cout << "successfully triggered f1" << endl;
    newFilePage_2Ptr->triggerMutators();
    cout << "successfully triggered f2" << endl;
    newFilePage_3Ptr->triggerMutators();
    cout << "successfully triggered f3" << endl;
    //newFilePage_4Ptr updates automatically
    cout << toString()->toStdString() << endl;
    
    //create file
    //- - - - - - - - - - - - - - - - - - - - - - - - - - -
    cout << "***creating the actual file!***" << endl;
    QFont font;
    font.setFamily("Monospace");
    font.setFixedPitch(true);
    font.setPointSize(10);
    font.setWeight(10);

    editor = new FileGui();
    editor->setFont(font);

    setHighlighterPtr(highlighterPtr = new Highlighter(editor->document() ) );

    QFile file("mainwindow.h");
    if (file.open(QFile::ReadOnly | QFile::Text) )
        editor->setPlainText(file.readAll() );
    
    masterTabWidgetPtr->addTab(editor, tr("File1") );
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
}


void NewFileGui::handleHelpBntSlot()
{
    ;
}


void NewFileGui::handleCancelBtnSlot()
{
    this->close();
}


void NewFileGui::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    backBtn->setEnabled(false);
    nextBtn = new QPushButton("Next >", this);
    finishBtn = new QPushButton("Finish", this);
    finishBtn->setEnabled(false);
    helpBtn = new QPushButton("Help", this);
    cancelBtn = new QPushButton("Cancel", this);
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(backBtn);
    buttonLayout->addWidget(nextBtn);
    buttonLayout->addWidget(finishBtn);
    buttonLayout->addWidget(helpBtn);
    buttonLayout->addWidget(cancelBtn);
    
    connect(backBtn, SIGNAL(released() ), this, SLOT(handleBackBtnSlot() ) );
    connect(nextBtn, SIGNAL(released() ), this, SLOT(handleNextBtnSlot() ) );
    connect(finishBtn, SIGNAL(released() ), this, SLOT(handleFinishBtnSlot() ) );
    connect(helpBtn, SIGNAL(released() ), this, SLOT(handleHelpBntSlot() ) );
    connect(cancelBtn, SIGNAL(released() ), this, SLOT(handleCancelBtnSlot() ) );
    
    outerLayout->addWidget(newFilePage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void NewFileGui::swapBackPage()
{
    switch(currentPage)
    {
        case PAGE_TWO:
            unloadPage_2();
            loadPage_1();
            currentPage = PAGE_ONE;
            backBtn->setEnabled(false);
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_2();
            currentPage = PAGE_TWO;
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_3();
            currentPage = PAGE_THREE;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapBackPage()" << endl;
    }
}


void NewFileGui::swapNextPage()
{
    switch(currentPage)
    {
        case PAGE_ONE:
            unloadPage_1();
            loadPage_2();
            currentPage = PAGE_TWO;
            backBtn->setEnabled(true);
            break;
        case PAGE_TWO:
            unloadPage_2();
            loadPage_3();
            currentPage = PAGE_THREE;
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_4();
            currentPage = PAGE_FOUR;
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapNextPage()" << endl;
    }
}


void NewFileGui::loadPage_1()
{
    outerLayout->addWidget(newFilePage_1Ptr, 0, 0);
    newFilePage_1Ptr->setVisible(true);
    newFilePage_1Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_1()
{
    outerLayout->removeWidget(newFilePage_1Ptr);
    newFilePage_1Ptr->setVisible(false);
    newFilePage_1Ptr->setEnabled(false);
}


void NewFileGui::loadPage_2()
{
    outerLayout->addWidget(newFilePage_2Ptr, 0, 0);
    newFilePage_2Ptr->setVisible(true);
    newFilePage_2Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_2()
{
    outerLayout->removeWidget(newFilePage_2Ptr);
    newFilePage_2Ptr->setVisible(false);
    newFilePage_2Ptr->setEnabled(false);
}


void NewFileGui::loadPage_3()
{
    outerLayout->addWidget(newFilePage_3Ptr, 0, 0);
    newFilePage_3Ptr->setVisible(true);
    newFilePage_3Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_3()
{
    outerLayout->removeWidget(newFilePage_3Ptr);
    newFilePage_3Ptr->setVisible(false);
    newFilePage_3Ptr->setEnabled(false);
}


void NewFileGui::loadPage_4()
{
    outerLayout->addWidget(newFilePage_4Ptr, 0, 0);
    newFilePage_4Ptr->setVisible(true);
    newFilePage_4Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_4()
{
    outerLayout->removeWidget(newFilePage_4Ptr);
    newFilePage_4Ptr->setVisible(false);
    newFilePage_4Ptr->setEnabled(false);
}


QString* NewFileGui::toString()
{
    QString* tmp = new QString("NewProjectGui");
    tmp->append("\n- - - - - - - - - -\n");
    tmp->append(newFilePage_1Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_2Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_3Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_4Ptr->toString() );
    
    return tmp;
}


NewFileGui::~NewFileGui()
{
    ;
}