#include "NewWorkspaceGui.h"

/*
 * #!/bin/bash
 * echo 'catkin_make ' $1 $2
 * 
 * ./test.bash --pkg test_node
 * > catkin_make --pkg test_node
 * 
 * ./test.bash
 * > catkin_make
 */

NewWorkspaceGui::NewWorkspaceGui(QWidget* parent) : QWidget(parent)
{
    this->setWindowIcon(QIcon(RosEnv::imagesInstallLoc + "Workspace2.jpg") );
    this->setWindowTitle("rqt_ide");
    
    outerLayout = new QGridLayout(this);
    newWorkspacePage_1Ptr = new NewWorkspacePage_1();
    newWorkspacePage_2Ptr = new NewWorkspacePage_2();
    newWorkspacePage_3Ptr = new NewWorkspacePage_3();
    newWorkspacePage_4Ptr = new NewWorkspacePage_4();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    this->setLayout(outerLayout);
}


void NewWorkspaceGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewWorkspaceGui::handleNextBtnSlot()
{
    
    swapNextPage();
}


void NewWorkspaceGui::handleFinishBtnSlot()
{
    cout << "\"Finish\" button selected" << endl;
    newWorkspacePage_1Ptr->triggerMutators();
    cout << "successfully triggered p1" << endl;
    newWorkspacePage_2Ptr->triggerMutators();
    cout << "successfully triggered p2" << endl;
    newWorkspacePage_3Ptr->triggerMutators();
    cout << "successfully triggered p3" << endl;
    //newWorkspacePage_4Ptr updates automatically
    cout << toString()->toStdString() << endl;
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    QProcess* process = new QProcess();
    QDir dir; dir.setPath(*newWorkspacePage_2Ptr->getWorkspaceLocStrPtr() );
    process->setWorkingDirectory(dir.absolutePath() );
    QDir::setCurrent(dir.absolutePath() );

    QStringList* args = new QStringList();
    
    args->push_back("--rosdistro");
    args->push_back(*newWorkspacePage_1Ptr->getRosVersionStrPtr() );
    args->push_back(*newWorkspacePage_2Ptr->getWorkspaceNameStrPtr() );
    for(size_t i = 0; i < newWorkspacePage_4Ptr->getDependsEnteredStrList()->size(); i++)
    {
        args->push_back(newWorkspacePage_4Ptr->getDependsEnteredStrList()->at(i) );
    }

    //args->push_front("indigo");
    //args->push_front("--rosdistro");

    QStringList tmp0; tmp0.push_back("./../devel/setup.bash");
    
    process->setWorkingDirectory(dir.absolutePath() );
    QDir::setCurrent(dir.absolutePath() );
    process->execute("source", tmp0);
    cout << "exe? " << process->startDetached("catkin_create_pkg", *args) << endl;

    
    process->waitForFinished();
    QString output(process->readAllStandardOutput());
    cout << output.toStdString() << endl;
    cout << "\nfinished create!-------------------------" << endl;
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//    FileTreeGui::setWorkspaceRootAbsPathStrPtr(new QString(*newWorkspacePage_2Ptr->getWorkspaceLocStrPtr()
//                                                       + "/"
//                                                       + *newWorkspacePage_2Ptr->getWorkspaceNameStrPtr() ));
//    FileTreeGui::setWorkspaceNameStrPtr(newWorkspacePage_2Ptr->getWorkspaceNameStrPtr() );
    
    
    QString tmp5(*newWorkspacePage_2Ptr->getWorkspaceLocStrPtr() + "/" + *newWorkspacePage_2Ptr->getWorkspaceNameStrPtr() );
    genRideProjDepends(process, new QString(tmp5) );
    
//    FileTreeGui::refresh();
}


void NewWorkspaceGui::handleHelpBntSlot()
{
    ;
}


void NewWorkspaceGui::handleCancelBtnSlot()
{
    this->close();
}


void NewWorkspaceGui::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    backBtn->setEnabled(false);
    nextBtn = new QPushButton("Next >", this);
    nextBtn->autoDefault();
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
    
    outerLayout->addWidget(newWorkspacePage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void NewWorkspaceGui::swapBackPage()
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
        default:
            cerr << "ERROR in switch at: NewWorkspaceGui::swapBackPage()" << endl;
    }
}


void NewWorkspaceGui::swapNextPage()
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
        default:
            cerr << "ERROR in switch at: NewWorkspaceGui::swapNextPage()" << endl;
    }
}


void NewWorkspaceGui::loadPage_1()
{
    outerLayout->addWidget(newWorkspacePage_1Ptr, 0, 0);
    newWorkspacePage_1Ptr->setVisible(true);
    newWorkspacePage_1Ptr->setEnabled(true);
}


void NewWorkspaceGui::unloadPage_1()
{
    outerLayout->removeWidget(newWorkspacePage_1Ptr);
    newWorkspacePage_1Ptr->setVisible(false);
    newWorkspacePage_1Ptr->setEnabled(false);
}


void NewWorkspaceGui::loadPage_2()
{
    outerLayout->addWidget(newWorkspacePage_2Ptr, 0, 0);
    newWorkspacePage_2Ptr->setVisible(true);
    newWorkspacePage_2Ptr->setEnabled(true);
}


void NewWorkspaceGui::unloadPage_2()
{
    outerLayout->removeWidget(newWorkspacePage_2Ptr);
    newWorkspacePage_2Ptr->setVisible(false);
    newWorkspacePage_2Ptr->setEnabled(false);
}


void NewWorkspaceGui::loadPage_3()
{
    outerLayout->addWidget(newWorkspacePage_3Ptr, 0, 0);
    newWorkspacePage_3Ptr->setVisible(true);
    newWorkspacePage_3Ptr->setEnabled(true);
}


void NewWorkspaceGui::unloadPage_3()
{
    outerLayout->removeWidget(newWorkspacePage_3Ptr);
    newWorkspacePage_3Ptr->setVisible(false);
    newWorkspacePage_3Ptr->setEnabled(false);
}


void NewWorkspaceGui::loadPage_4()
{
    outerLayout->addWidget(newWorkspacePage_4Ptr, 0, 0);
    newWorkspacePage_4Ptr->setVisible(true);
    newWorkspacePage_4Ptr->setEnabled(true);
}


void NewWorkspaceGui::unloadPage_4()
{
    outerLayout->removeWidget(newWorkspacePage_4Ptr);
    newWorkspacePage_4Ptr->setVisible(false);
    newWorkspacePage_4Ptr->setEnabled(false);
}


void NewWorkspaceGui::genRideProjDepends(QProcess* process, QString* WorkspaceRootStrPtr)
{
    process->waitForFinished();
    process->waitForFinished();
    QProcess* proc = new QProcess();

    proc->setWorkingDirectory(*WorkspaceRootStrPtr);
    QDir::setCurrent(*WorkspaceRootStrPtr);
    cout << "cCCreateing at: " << WorkspaceRootStrPtr->toStdString() << endl;
    
    //----------------
    //proc->start("/home/james/NetBeansWorkspaces/rqt_ide/ide/resources/setup.bash");
    QDir tmpdir(*WorkspaceRootStrPtr);
    tmpdir.cdUp();
    tmpdir.cdUp();
    QString tmpstr(tmpdir.absolutePath());
    QFile* tmp = new QFile("/tmp/setup.bash"); // !!!??? will this be automagically deleted ???!!!
    //tmp->openRdWrFile();
    tmp->open(QIODevice::ReadWrite);
    tmp->write("#!/bin/bash\nsource ");
    QByteArray tmpba;tmpba.append(tmpstr);
    tmp->write(tmpba);
    tmp->write("/devel/setup.bash\necho 'finished'");
    tmp->close();
    
    QStringList tmpStrLst; tmpStrLst.push_back("+x"); tmpStrLst.push_back("/tmp/setup.bash");
    proc->execute("chmod", tmpStrLst);
    proc->waitForFinished();
    proc->execute("/tmp/setup.bash");
    //tmp->remove();
    //-----------------
    
    proc->setWorkingDirectory(*WorkspaceRootStrPtr);
    QDir::setCurrent(*WorkspaceRootStrPtr);
    process->startDetached("mkdir", *(new QStringList("./.rideWorkspace")) );
    //process->waitForFinished();
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/Workspace")) );
    process->execute("touch", *(new QStringList("./.rideWorkspace/resources/Workspace/configurations.xml")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/Workspace/scripts")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/Workspace/scripts/create")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/Workspace/scripts/build")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/Workspace/scripts/execute")) );
    
    //create build file
    QFile* buildFile = new QFile("./.rideWorkspace/resources/Workspace/scripts/build/build.bash");
    //buildFile->openRdWrFile();
    buildFile->open(QIODevice::ReadWrite);
    buildFile->write("############################");
    buildFile->write("\n# AUTO-GENERATED RIDE FILE #");
    buildFile->write("\n############################");
    buildFile->write("\n\n#!/bin/bash");
    buildFile->write("\n\ncatkin_make $1 $2");
    //buildFile->closeFile();
    buildFile->close();
    
    //setAbsPathToProjBuildFileStrPtr(buildFile->getAbsFilePathStrPtr() );
    QFileInfo buildFileInfo(*buildFile);
    setAbsPathToProjBuildFileStrPtr(new QString(buildFileInfo.absoluteFilePath()) );
    
    //instead. use tmpstrlst->clear();
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideWorkspace/resources/Workspace/scripts/build/build.bash");
    process->execute("chmod", tmpStrLst);
    
    //create rosrun file
    QFile* runFile = new QFile("./.rideWorkspace/resources/Workspace/scripts/execute/run.bash");
    //runFile->openRdWrFile();
    runFile->open(QIODevice::ReadWrite);
    runFile->write("############################");
    runFile->write("\n# AUTO-GENERATED RIDE FILE #");
    runFile->write("\n############################");
    runFile->write("\n\n#!/bin/bash");
    runFile->write("\n\nrosrun $1 $2");
    //runFile->closeFile();
    runFile->close();
    
    //setAbsPathToProjRunFileStrPtr(runFile->getAbsFilePathStrPtr() );
    QFileInfo runFileInfo(*runFile);
    setAbsPathToProjRunFileStrPtr(new QString(runFileInfo.absoluteFilePath()) );
    
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideWorkspace/resources/Workspace/scripts/execute/run.bash");
    process->execute("chmod", tmpStrLst);
    
    //create roslaunch file
    QFile* launchFile = new QFile();
    //launchFile->openRdWrFile();
    launchFile->open(QIODevice::ReadWrite);
    launchFile->write("############################");
    launchFile->write("\n# AUTO-GENERATED RIDE FILE #");
    launchFile->write("\n############################");
    launchFile->write("\n\n#!/bin/bash");
    launchFile->write("\n\nroslaunch $1 $2");
    //launchFile->closeFile();
    launchFile->close();
    
    //setAbsPathToProjLaunchFileStrPtr(launchFile->getAbsFilePathStrPtr() );
    QFileInfo launchFileInfo(*launchFile);
    setAbsPathToProjLaunchFileStrPtr(new QString(launchFileInfo.absoluteFilePath()) );
    
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideWorkspace/resources/Workspace/scripts/execute/launch.bash");
    process->execute("chmod", tmpStrLst);
    
    
    
    cout << "Successfully ended file creation sequence" << endl;
    this->close();
    
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/scout")) );
    process->execute("touch", *(new QStringList("./.rideWorkspace/resources/scout/scout.qrc")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/scout/libraries")) );
    process->execute("mkdir", *(new QStringList("./.rideWorkspace/resources/scout/Workspace")) );
}


void NewWorkspaceGui::setAbsPathToProjBuildFileStrPtr(QString* absPathToProjBuildFileStrPtr)
{
    this->absPathToProjBuildFileStrPtr = absPathToProjBuildFileStrPtr;
}


QString* NewWorkspaceGui::getAbsPathToProjBuildFileStrPtr()
{
    return absPathToProjBuildFileStrPtr;
}


void NewWorkspaceGui::setAbsPathToProjRunFileStrPtr(QString* absPathToProjRunFileStrPtr)
{
    this->absPathToProjRunFileStrPtr = absPathToProjRunFileStrPtr;
}


QString* NewWorkspaceGui::getAbsPathToProjRunFileStrPtr()
{
    return absPathToProjRunFileStrPtr;
}


void NewWorkspaceGui::setAbsPathToProjLaunchFileStrPtr(QString* absPathToProjLaunchFileStrPtr)
{
    this->absPathToProjLaunchFileStrPtr = absPathToProjLaunchFileStrPtr;
}


QString* NewWorkspaceGui::getAbsPathToProjLaunchFileStrPtr()
{
    return absPathToProjLaunchFileStrPtr;
}


QString* NewWorkspaceGui::toString()
{
    QString* tmp = new QString("NewWorkspaceGui");
    tmp->append("\n- - - - - - - - - -\n");
    cout << "Fine here (0)" << endl;
    tmp->append(newWorkspacePage_1Ptr->toString() );
    cout << "Fine here (1)" << endl;
    tmp->append("\n");
    tmp->append(newWorkspacePage_2Ptr->toString() );
    cout << "Fine here (2)" << endl;
    tmp->append("\n");
    tmp->append(newWorkspacePage_3Ptr->toString() );
    cout << "Fine here (3)" << endl;
    tmp->append("\n");
    tmp->append(newWorkspacePage_4Ptr->toString() );
    cout << "Fine here (4)" << endl;
    
    return tmp;
}


NewWorkspaceGui::~NewWorkspaceGui()
{
    ;
}
