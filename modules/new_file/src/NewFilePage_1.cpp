#include "NewFilePage_1.h"


NewFilePage_1::NewFilePage_1(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select file type</b>");
    
    langStrPtr = new QString("null");
    fileTypeStrPtr = new QString("null");
    
    langsStrLstPtr = new QVector<QListWidgetItem*>();
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "c.png"/*"cFile.png"*/), "C") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cpp.png"), "C++") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "python.png"), "Python") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "java.png"), "Java") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "lisp.png"), "Lisp") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "shell.png"), "Shell Script") );
    langsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "file.png"), "Other") );
    
    
    
    cFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    cFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hFile.png"),
                                                                 "Header file") );
    cFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                                 "Source file") );

    cppFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    cppFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hppFile.png"),
                                                             "Header file") );
    cppFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cppFile.png"),
                                                             "Source file") );
    
    pythonFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    pythonFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "pyFile.png"),
                                                             "Source file") );
    pythonFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cfgFile.png"),
                                                             "Dynamic Reconfiguration") );
    
    javaFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    javaFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "javaFile.png"),
                                                             "Class file") );
    javaFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "javaFile.png"),
                                                             "Interface file") );
    
    lispFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    lispFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "Source file") );
    
    shellFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    shellFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "BASH file") );
    shellFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "Bourne file") );
    shellFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "C Shell file") );
    shellFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "Korn file") );
    shellFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "Z Shell file") );
    
    otherFileOptLstWidPtrVecPtr = new QVector<QListWidgetItem*>();
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "msg file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "srv file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "css file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "xml file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "json file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "yaml file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "sql file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "CMakeLists file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "package file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "Markdown file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "text file") );
    otherFileOptLstWidPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cFile.png"),
                                                             "empty file") );
   
    
    langsLwPtr = new QListWidget();
    //langsLwPtr->addItems(*langsStrLstPtr);
    for(size_t i = 0; i < langsStrLstPtr->size(); i++)
    {
        langsLwPtr->addItem(langsStrLstPtr->at(i) );
    }
    //langsLwPtr->item(0)->setSelected(true);
    connect(langsLwPtr, SIGNAL(itemSelectionChanged()), this, SLOT(handleSwapOptionsSlot()));
    
    fileTypeStrLstPtrVec = new QVector<QVector<QListWidgetItem*>*>();
    fileTypeStrLstPtrVec->push_back(cFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(cppFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(pythonFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(javaFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(lispFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(shellFileOptLstWidPtrVecPtr);
    fileTypeStrLstPtrVec->push_back(otherFileOptLstWidPtrVecPtr);
    
    fileTypeLwPtr = new QListWidget();
    //fileTypeLwPtr->addItems(*(fileTypeStrLstPtrVec.at(0)) ); // default
    
    for(size_t i = 0; i < fileTypeStrLstPtrVec->at(0)->size(); i++)
    {
        fileTypeLwPtr->addItem(new QListWidgetItem(*fileTypeStrLstPtrVec->at(0)->at(i)) ); // default
    }
    

    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(titlePtr, 0, 0, 1, 2, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(langsLwPtr, 1, 0);
    outerLayoutPtr->addWidget(fileTypeLwPtr, 1, 1);

    this->setLayout(outerLayoutPtr);
}


void NewFilePage_1::handleSwapOptionsSlot()
{
    fileTypeLwPtr->clear(); // Remove old items (actually, it deletes them totally--not just form the UI)
    
    for(size_t i = 0; i < fileTypeStrLstPtrVec->at(langsLwPtr->currentRow())->size(); i++)
    {
        fileTypeLwPtr->addItem(new QListWidgetItem(*fileTypeStrLstPtrVec->at(langsLwPtr->currentRow())->at(i)) );
    }
}


void NewFilePage_1::setLangStrPtr()
{
    if(langsLwPtr->selectedItems().size() != 0)
    {
        langStrPtr = new QString(langsLwPtr->currentItem()->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_1::setLangStrPtr()" << endl;
    }
}


QString* NewFilePage_1::getLangStrPtr()
{
    return langStrPtr;
}


void NewFilePage_1::setFileTypeStrPtr()
{
    if(fileTypeLwPtr->selectedItems().size() != 0)
    {
        fileTypeStrPtr = new QString(fileTypeLwPtr->currentItem()->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_1::setFileTypeStrPtr()" << endl;
    }
}


QString* NewFilePage_1::getFileTypeStrPtr()
{
    return fileTypeStrPtr;
}


void NewFilePage_1::triggerMutators()
{
    setLangStrPtr();
    setFileTypeStrPtr();
}


QString* NewFilePage_1::toString()
{
    QString* tmp = new QString("Language: ");
    tmp->append(getLangStrPtr() );
    tmp->append("\nFile Type: ");
    tmp->append(getFileTypeStrPtr() );
    
    return tmp;
}


NewFilePage_1::~NewFilePage_1()
{
    ;
}