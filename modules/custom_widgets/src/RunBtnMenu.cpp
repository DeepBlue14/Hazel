#include "RunBtnMenu.h"


RunBtnMenu::RunBtnMenu(QWidget* parent) : QWidget(parent)
{
    initMenu();
}


void RunBtnMenu::initMenu()
{
    runBtnMenuPtr = new QMenu("Run");
    
    //!!! Hard coded !!!
    QAction* menuAct_1 = new QAction(QIcon(RosEnv::imagesInstallLoc + "cpp.png"), "1.exe", this);
    menuAct_1->setCheckable(true);
    QAction* menuAct_2 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "2.exe", this);
    menuAct_2->setCheckable(true);
    QAction* menuAct_3 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "3.exe", this);
    menuAct_3->setCheckable(true);
    QMenu* menu_1 = new QMenu("proj1");
    menu_1->addAction(menuAct_1);
    menu_1->addAction(menuAct_2);
    menu_1->addAction(menuAct_3);
    
    QAction* menuAct_4 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "1.exe", this);
    menuAct_4->setCheckable(true);
    QAction* menuAct_5 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "2.exe", this);
    menuAct_5->setCheckable(true);
    QAction* menuAct_6 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "3.exe", this);
    menuAct_6->setCheckable(true);
    QMenu* menu_2 = new QMenu("proj2");
    menu_2->addAction(menuAct_4);
    menu_2->addAction(menuAct_5);
    menu_2->addAction(menuAct_6);
    
    QAction* menuAct_7 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "1.exe", this);
    QAction* menuAct_8 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "2.exe", this);
    QAction* menuAct_9 = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.jpg"), "3.exe", this);
    QAction* menuAct_10 = new QAction(QIcon(RosEnv::imagesInstallLoc + "cpp.png"), "4.launch", this);
    QMenu* menu_3 = new QMenu("proj3");
    menu_3->addAction(menuAct_7);
    menu_3->addAction(menuAct_8);
    menu_3->addAction(menuAct_9);
    menu_3->addSeparator();
    menu_3->addAction(menuAct_10);
    
    runBtnMenuPtr->addMenu(menu_1);
    runBtnMenuPtr->addMenu(menu_2);
    runBtnMenuPtr->addMenu(menu_3);
}


void addProject(QString* projectNameStrPtr)
{
    ;
}


void addExe(QString* projectNameStrPtr, QString* exeNameStrPtr)
{
    ;
}


void addLaunch(QString* projectNameStrPtr, QString* launchNameStrPtr)
{
    ;
}


QMenu* RunBtnMenu::getMenu()
{
    return runBtnMenuPtr;
}


QString* RunBtnMenu::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


RunBtnMenu::~RunBtnMenu()
{
    ;
}