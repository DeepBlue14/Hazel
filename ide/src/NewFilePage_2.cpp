#include "NewFilePage_2.h"
#include "NewFileGui.h"


NewFilePage_2::NewFilePage_2(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select template</b>");
    
    cHeaderTemplateStrLst = new QVector<QListWidgetItem*>();
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!
    cHeaderTemplateStrLst->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                         "No template") ); // !!!Do this in "load from xml" method!!!

    cSourceTemplateStrLst = new QVector<QListWidgetItem*>();
    cppHeaderTemplateStrLst = new QVector<QListWidgetItem*>();
    cppSourceTemplateStrLst = new QVector<QListWidgetItem*>();
    pySourceTemplateStrLst = new QVector<QListWidgetItem*>();
    jSourceTemplateStrLst = new QVector<QListWidgetItem*>();
    lispSourceTemplateStdrLst = new QVector<QListWidgetItem*>();
    
    templatesLstWidPtr = new QListWidget();
    for(size_t i = 0; i < cHeaderTemplateStrLst->size(); i++)
    {
        templatesLstWidPtr->addItem(new QListWidgetItem(*cHeaderTemplateStrLst->at(i)) ); //Copy; else they will be perminenty deleted
    }
    
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
    outerLayout->addWidget(templatesLstWidPtr, 1, 0);
    
    selectedTemplateStrPtr = new QString("null");
    
    this->setLayout(outerLayout);
}


void NewFilePage_2::triggerMutators()
{
    setSelectedTemplateStrPtr(new QString(templatesLstWidPtr->selectedItems().at(0)->text()) );
}


void NewFilePage_2::pushLangTemplatesToUi(RideEnv::Lang lang, RideEnv::FileType fileType)
{
    switch(lang)
    {
        case RideEnv::C:
            pushCTemplatesToUi(fileType);
            break;
        case RideEnv::CPP:
            pushCppTemplatesToUi(fileType);
            break;
        case RideEnv::PYTHON:
            pushPythonTemplatesToUi(fileType);
            break;
        case RideEnv::JAVA:
            pushJavaTemplatesToUi(fileType);
            break;
        case RideEnv::LISP:
            pushLispTemplatesToUi(fileType);
            break;
        case RideEnv::SHELL:
            pushShellTemplatesToUi(fileType);
            break;
        case RideEnv::OTHER:
            pushOtherTemplatesToUi(fileType);
            break;
        default:
            cerr << "ERROR @ NewFilePage_2::pushLangTemplatesToUi(...)" << endl;
            break;
    }
}


void NewFilePage_2::pushCTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::HEADER:
            for(size_t i = 0; i < cHeaderTemplateStrLst->size(); i++)
            {
                templatesLstWidPtr->addItem(new QListWidgetItem(*cHeaderTemplateStrLst->at(i)) );
            }
            break;
        case RideEnv::SOURCE:
            for(size_t i = 0; i < cSourceTemplateStrLst->size(); i++)
            {
                templatesLstWidPtr->addItem(new QListWidgetItem(*cSourceTemplateStrLst->at(i)) );
            }
            break;
        default:
            cerr << "ERROR @ NewFilePage_2::pushCTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushCppTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::HEADER:
            for(size_t i = 0; i < cppHeaderTemplateStrLst->size(); i++)
            {
                templatesLstWidPtr->addItem(new QListWidgetItem(*cppHeaderTemplateStrLst->at(i)) );
            }
            break;
        case RideEnv::SOURCE:
            for(size_t i = 0; i < cppSourceTemplateStrLst->size(); i++)
            {
                templatesLstWidPtr->addItem(new QListWidgetItem(*cppSourceTemplateStrLst->at(i)) );
            }
            break;
        default:
            cerr << "ERROR @ pushCppTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushPythonTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::SOURCE:
            //
            break;
        case RideEnv::DYN_CONFIG:
            //
            break;
        default:
            cerr << "ERROR @ pushPythonTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushJavaTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::SOURCE:
            //
            break;
        default:
            cerr << "ERROR @ pushJavaTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushLispTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::SOURCE:
            //
            break;
        default:
            cerr << "ERROR @ pushLispTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushShellTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::BASH_SHELL:
            //
            break;
        case RideEnv::BOURNE_SHELL:
            //
            break;
        case RideEnv::C_SHELL:
            //
            break;
        case RideEnv::KORN_SHELL:
            //
            break;
        case RideEnv::Z_SHELL:
            //
            break;
        default:
            cerr << "ERROR @ pushShellTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::pushOtherTemplatesToUi(RideEnv::FileType fileType)
{
    templatesLstWidPtr->clear();
    
    switch(fileType)
    {
        case RideEnv::PACKAGE:
            //
            break;
        case RideEnv::CMAKELISTS:
            //
            break;
        case RideEnv::XML:
            //
            break;
        case RideEnv::JSON:
            //
            break;
        case RideEnv::DB:
            //
            break;
        case RideEnv::YAML:
            //
            break;
        case RideEnv::CSS:
            //
            break;
        case RideEnv::TEXT:
            //
            break;
        case RideEnv::EMPTY:
            //
            break;
        default:
            cerr << "ERROR @ pushOtherTemplatesToUi(...)" << endl;
    }
}


void NewFilePage_2::setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr)
{
    this->selectedTemplateStrPtr = selectedTemplateStrPtr;
}


QString* NewFilePage_2::getSelectedTemplateStrPtr()
{
    return selectedTemplateStrPtr;
}


QString* NewFilePage_2::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp; 
}


NewFilePage_2::~NewFilePage_2()
{
    ;
}