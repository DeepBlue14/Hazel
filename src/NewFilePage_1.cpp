#include "NewFilePage_1.h"


NewFilePage_1::NewFilePage_1(QWidget* parent) : QWidget(parent)
{
    langStrPtr = new QString("null");
    fileTypeStrPtr = new QString("null");
    
    langsStrLstPtr = new QStringList();
    langsStrLstPtr->push_back("C");
    langsStrLstPtr->push_back("C++");
    langsStrLstPtr->push_back("Python");
    langsStrLstPtr->push_back("Java");
    langsStrLstPtr->push_back("Lisp");
    langsStrLstPtr->push_back("Shell Script");
    langsStrLstPtr->push_back("Other");
    
    QStringList* cStrLstPtr = new QStringList();
    cStrLstPtr->push_back("Header file");
    cStrLstPtr->push_back("Source file");
    
    QStringList* cppStrLstPtr = new QStringList();
    cppStrLstPtr->push_back("Header");
    cppStrLstPtr->push_back("Source");
    
    QStringList* pythonStrLstPtr = new QStringList();
    pythonStrLstPtr->push_back("Source");
    pythonStrLstPtr->push_back("Dynamic Reconfiguration");
    
    QStringList* javaStrLstPtr = new QStringList();
    javaStrLstPtr->push_back("Class");
    javaStrLstPtr->push_back("Interface");
    
    QStringList* lispStrLstPtr = new QStringList();
    lispStrLstPtr->push_back("Source");
    
    QStringList* shellScriptsStrLstPtr = new QStringList();
    shellScriptsStrLstPtr->push_back("Bash");
    shellScriptsStrLstPtr->push_back("Bourne");
    shellScriptsStrLstPtr->push_back("C Shell");
    
    QStringList* otherStrLstPtr = new QStringList();
    otherStrLstPtr->push_back("msg");
    otherStrLstPtr->push_back("srv");
    otherStrLstPtr->push_back("css");
    otherStrLstPtr->push_back("xml");
    otherStrLstPtr->push_back("json");
    otherStrLstPtr->push_back("yaml");
    otherStrLstPtr->push_back("sql");
    otherStrLstPtr->push_back("CMakeLists");
    otherStrLstPtr->push_back("package");
    otherStrLstPtr ->push_back("Markdown");
    otherStrLstPtr ->push_back("Text");
    otherStrLstPtr ->push_back("Empty");
    
    langsLwPtr = new QListWidget();
    langsLwPtr->addItems(*langsStrLstPtr);
    //langsLwPtr->item(0)->setSelected(true);
    connect(langsLwPtr, SIGNAL(itemSelectionChanged()), this, SLOT(handleSwapOptionsSlot()));
    
    fileTypeStrLstPtrVec.push_back(cStrLstPtr);
    fileTypeStrLstPtrVec.push_back(cppStrLstPtr);
    fileTypeStrLstPtrVec.push_back(pythonStrLstPtr);
    fileTypeStrLstPtrVec.push_back(javaStrLstPtr);
    fileTypeStrLstPtrVec.push_back(lispStrLstPtr);
    fileTypeStrLstPtrVec.push_back(shellScriptsStrLstPtr);
    fileTypeStrLstPtrVec.push_back(otherStrLstPtr);
    
    fileTypeLwPtr = new QListWidget();
    fileTypeLwPtr->addItems(*(fileTypeStrLstPtrVec.at(0)) ); // default
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(langsLwPtr, 0, 0);
    outerLayoutPtr->addWidget(fileTypeLwPtr, 0, 1);

    this->setLayout(outerLayoutPtr);
}


void NewFilePage_1::handleSwapOptionsSlot()
{
    fileTypeLwPtr->clear();
    fileTypeLwPtr->addItems(*(fileTypeStrLstPtrVec.at(langsLwPtr->currentRow()) ) );
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