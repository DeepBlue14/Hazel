#include "NewProjectGui.h"

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

NewProjectGui::NewProjectGui(QWidget* parent) : QWidget(parent)
{
    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/ride/images/project2.jpg") );
    this->setWindowTitle("Ride");
    
    outerLayout = new QGridLayout(this);
    newProjectPage_1Ptr = new NewProjectPage_1();
    newProjectPage_2Ptr = new NewProjectPage_2();
    newProjectPage_3Ptr = new NewProjectPage_3();
    newProjectPage_4Ptr = new NewProjectPage_4();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    this->setLayout(outerLayout);
    /*
    //--------------------------------------------------------------------------
    QFile file("/home/james/NetBeansProjects/Hazel/src/qss/Dark.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    backBtn->setStyleSheet(styleSheet);
    //--------------------------------------------------------------------------
    */
}


void NewProjectGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewProjectGui::handleNextBtnSlot()
{
    
    swapNextPage();
}


void NewProjectGui::handleFinishBtnSlot()
{
    cout << "\"Finish\" button selected" << endl;
    newProjectPage_1Ptr->triggerMutators();
    cout << "successfully triggered p1" << endl;
    newProjectPage_2Ptr->triggerMutators();
    cout << "successfully triggered p2" << endl;
    newProjectPage_3Ptr->triggerMutators();
    cout << "successfully triggered p3" << endl;
    //newProjectPage_4Ptr updates automatically
    cout << toString()->toStdString() << endl;
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    QProcess* process = new QProcess();
    QDir dir; dir.setPath(*newProjectPage_2Ptr->getProjectLocStrPtr() );
    process->setWorkingDirectory(dir.absolutePath() );
    QDir::setCurrent(dir.absolutePath() );

    QStringList* args = new QStringList();
    
    args->push_back("--rosdistro");
    args->push_back(*newProjectPage_1Ptr->getRosVersionStrPtr() );
    args->push_back(*newProjectPage_2Ptr->getProjectNameStrPtr() );
    for(size_t i = 0; i < newProjectPage_4Ptr->getDependsEnteredStrList()->size(); i++)
    {
        args->push_back(newProjectPage_4Ptr->getDependsEnteredStrList()->at(i) );
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
    FileTreeGui::setProjectRootAbsPathStrPtr(new QString(*newProjectPage_2Ptr->getProjectLocStrPtr()
                                                       + "/"
                                                       + *newProjectPage_2Ptr->getProjectNameStrPtr() ));
    
    
    QString tmp5(*newProjectPage_2Ptr->getProjectLocStrPtr() + "/" + *newProjectPage_2Ptr->getProjectNameStrPtr() );
    genRideProjDepends(process, new QString(tmp5) );
    
    FileTreeGui::refresh();
}


void NewProjectGui::handleHelpBntSlot()
{
    ;
}


void NewProjectGui::handleCancelBtnSlot()
{
    this->close();
}


void NewProjectGui::initBtns()
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
    
    outerLayout->addWidget(newProjectPage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void NewProjectGui::swapBackPage()
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
            cerr << "ERROR in switch at: NewProjectGui::swapBackPage()" << endl;
    }
}


void NewProjectGui::swapNextPage()
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
            cerr << "ERROR in switch at: NewProjectGui::swapNextPage()" << endl;
    }
}


void NewProjectGui::loadPage_1()
{
    outerLayout->addWidget(newProjectPage_1Ptr, 0, 0);
    newProjectPage_1Ptr->setVisible(true);
    newProjectPage_1Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_1()
{
    outerLayout->removeWidget(newProjectPage_1Ptr);
    newProjectPage_1Ptr->setVisible(false);
    newProjectPage_1Ptr->setEnabled(false);
}


void NewProjectGui::loadPage_2()
{
    outerLayout->addWidget(newProjectPage_2Ptr, 0, 0);
    newProjectPage_2Ptr->setVisible(true);
    newProjectPage_2Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_2()
{
    outerLayout->removeWidget(newProjectPage_2Ptr);
    newProjectPage_2Ptr->setVisible(false);
    newProjectPage_2Ptr->setEnabled(false);
}


void NewProjectGui::loadPage_3()
{
    outerLayout->addWidget(newProjectPage_3Ptr, 0, 0);
    newProjectPage_3Ptr->setVisible(true);
    newProjectPage_3Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_3()
{
    outerLayout->removeWidget(newProjectPage_3Ptr);
    newProjectPage_3Ptr->setVisible(false);
    newProjectPage_3Ptr->setEnabled(false);
}


void NewProjectGui::loadPage_4()
{
    outerLayout->addWidget(newProjectPage_4Ptr, 0, 0);
    newProjectPage_4Ptr->setVisible(true);
    newProjectPage_4Ptr->setEnabled(true);
}


void NewProjectGui::unloadPage_4()
{
    outerLayout->removeWidget(newProjectPage_4Ptr);
    newProjectPage_4Ptr->setVisible(false);
    newProjectPage_4Ptr->setEnabled(false);
}


void NewProjectGui::genRideProjDepends(QProcess* process, QString* projectRootStrPtr)
{
    process->waitForFinished();
    process->waitForFinished();
    QProcess* proc = new QProcess();

    proc->setWorkingDirectory(*projectRootStrPtr);
    QDir::setCurrent(*projectRootStrPtr);
    cout << "cCCreateing at: " << projectRootStrPtr->toStdString() << endl;
    
    //----------------
    //proc->start("/home/james/NetBeansProjects/ride/resources/setup.bash");
    QDir tmpdir(*projectRootStrPtr);
    tmpdir.cdUp();
    tmpdir.cdUp();
    QString tmpstr(tmpdir.absolutePath());
    RideFile* tmp = new RideFile("/tmp/setup.bash");
    tmp->openRdWrFile();
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
    
    proc->setWorkingDirectory(*projectRootStrPtr);
    QDir::setCurrent(*projectRootStrPtr);
    process->startDetached("mkdir", *(new QStringList("./.rideProject")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/project")) );
    process->execute("touch", *(new QStringList("./.rideProject/resources/project/configurations.xml")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/project/scripts")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/project/scripts/create")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/project/scripts/build")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/project/scripts/execute")) );
    
    //create build file
    RideFile* buildFile = new RideFile("./.rideProject/resources/project/scripts/build/build.bash");
    buildFile->openRdWrFile();
    buildFile->write("############################");
    buildFile->write("\n# AUTO-GENERATED RIDE FILE #");
    buildFile->write("\n############################");
    buildFile->write("\n\n#!/bin/bash");
    buildFile->write("\n\ncatkin_make $1");
    buildFile->closeFile();
    
    setAbsPathToProjBuildFileStrPtr(buildFile->getAbsFilePathStrPtr() );
    
    //instead. use tmpstrlst->clear();
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideProject/resources/project/scripts/build/build.bash");
    process->execute("chmod", tmpStrLst);
    
    //create rosrun file
    RideFile* runFile = new RideFile("./.rideProject/resources/project/scripts/execute/run.bash");
    runFile->openRdWrFile();
    runFile->write("############################");
    runFile->write("\n# AUTO-GENERATED RIDE FILE #");
    runFile->write("\n############################");
    runFile->write("\n\n#!/bin/bash");
    runFile->write("\n\nrosrun $1 $2");
    runFile->closeFile();
    
    setAbsPathToProjRunFileStrPtr(runFile->getAbsFilePathStrPtr() );
    
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideProject/resources/project/scripts/execute/run.bash");
    process->execute("chmod", tmpStrLst);
    
    //create roslaunch file
    RideFile* launchFile = new RideFile();
    launchFile->openRdWrFile();
    launchFile->write("############################");
    launchFile->write("\n# AUTO-GENERATED RIDE FILE #");
    launchFile->write("\n############################");
    launchFile->write("\n\n#!/bin/bash");
    launchFile->write("\n\nroslaunch $1 $2");
    launchFile->closeFile();
    
    setAbsPathToProjLaunchFileStrPtr(launchFile->getAbsFilePathStrPtr() );
    
    tmpStrLst.clear(); tmpStrLst.push_back("+x"); tmpStrLst.push_back("./.rideProject/resources/project/scripts/execute/launch.bash");
    process->execute("chmod", tmpStrLst);
    
    
    
    cout << "Successfully ended file creation sequence" << endl;
    this->close();
    
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/scout")) );
    process->execute("touch", *(new QStringList("./.rideProject/resources/scout/scout.qrc")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/scout/libraries")) );
    process->execute("mkdir", *(new QStringList("./.rideProject/resources/scout/project")) );
}


void NewProjectGui::setAbsPathToProjBuildFileStrPtr(QString* absPathToProjBuildFileStrPtr)
{
    this->absPathToProjBuildFileStrPtr = absPathToProjBuildFileStrPtr;
}


QString* NewProjectGui::getAbsPathToProjBuildFileStrPtr()
{
    return absPathToProjBuildFileStrPtr;
}


void NewProjectGui::setAbsPathToProjRunFileStrPtr(QString* absPathToProjRunFileStrPtr)
{
    this->absPathToProjRunFileStrPtr = absPathToProjRunFileStrPtr;
}


QString* NewProjectGui::getAbsPathToProjRunFileStrPtr()
{
    return absPathToProjRunFileStrPtr;
}


void NewProjectGui::setAbsPathToProjLaunchFileStrPtr(QString* absPathToProjLaunchFileStrPtr)
{
    this->absPathToProjLaunchFileStrPtr = absPathToProjLaunchFileStrPtr;
}


QString* NewProjectGui::getAbsPathToProjLaunchFileStrPtr()
{
    return absPathToProjLaunchFileStrPtr;
}


QString* NewProjectGui::toString()
{
    QString* tmp = new QString("NewProjectGui");
    tmp->append("\n- - - - - - - - - -\n");
    cout << "Fine here (0)" << endl;
    tmp->append(newProjectPage_1Ptr->toString() );
    cout << "Fine here (1)" << endl;
    tmp->append("\n");
    tmp->append(newProjectPage_2Ptr->toString() );
    cout << "Fine here (2)" << endl;
    tmp->append("\n");
    tmp->append(newProjectPage_3Ptr->toString() );
    cout << "Fine here (3)" << endl;
    tmp->append("\n");
    tmp->append(newProjectPage_4Ptr->toString() );
    cout << "Fine here (4)" << endl;
    
    return tmp;
}


NewProjectGui::~NewProjectGui()
{
    ;
}