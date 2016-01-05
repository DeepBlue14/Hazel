#include "LinkFileWithGui.h"


LinkFileWithGui::LinkFileWithGui()
{
    ;
}


void LinkFileWithGui::setcompassTabWidgetPtr(QTabWidget* compassTabWidgetPtr)
{
    this->compassTabWidgetPtr = compassTabWidgetPtr;
}


QTabWidget* LinkFileWithGui::getCompassTabWidgetPtr()
{
    ;
}


void LinkFileWithGui::linkNew(QTabWidget* northTabWidgetPtr, QString absPathToNewFileStrPtr, QString fileName, FileGui* editor)
{
    //create file
    //- - - - - - - - - - - - - - - - - - - - - - - - - - -
    QFont font;
    font.setFamily("Monospace");
    font.setFixedPitch(true);
    font.setPointSize(10);
    font.setWeight(10);

    editor = new FileGui();
    editor->setFont(font);
    
    int tabSize = 4;
    QFontMetrics metrics(font);
    editor->setTabStopWidth(tabSize * metrics.width(' '));
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    completer = new QCompleter();
    completer->setModel(modelFromFile("wordlist.txt"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    editor->setCompleter(completer);
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    setHighlighterPtr(highlighterPtr = new Highlighter(editor->document() ) );

    //create physical file and tab
    RFile* rideFile = new RFile(absPathToNewFileStrPtr);
    if(!rideFile->open(QIODevice::ReadWrite | QIODevice::Text))
        cerr << "Error opening file!" << endl;
    
    QString lineStr;
    while(!rideFile->atEnd() )
    {
        QByteArray line = rideFile->readLine();
        lineStr.append(line);
        //cout << "Line: " << lineStr.toStdString() << endl;
    }
    //-----------------

    editor->setPlainText(lineStr);
    cout << "Does the editor exist?: " << editor->document()->toPlainText().toStdString() << endl;
    rideFile->setParallelFileGuiPtr(editor);
    northTabWidgetPtr->addTab(editor, fileName);
    
    if(fileName.mid(fileName.size()-1, 1) == "h")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "hFile.png") );
    }
    else if(fileName.mid(fileName.size()-3, 3) == "hpp")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "hFile.png") );
    }
    else if(fileName.mid(fileName.size()-1, 1) == "c")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "cppFile.png") );
    }
    else if(fileName.mid(fileName.size()-3, 3) == "cpp")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "cppFile.png") );
    }
    else if(fileName.mid(fileName.size()-3, 3) == "java")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "javaFile.png") );
    }
    else if(fileName.mid(fileName.size()-4, 4) == "lisp")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "lispFile.png") );
    }
    else if(fileName.mid(fileName.size()-4, 4) == "bell")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "bell.jpg") );
    }
    else if(fileName == "CMakeLists.txt")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "cmake.png") );
    }
    else if(fileName == "package.xml")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "xmlFile.png") );
    }
    else if(fileName == "manifest.xml")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "xmlFile.png") );
    }
    else if(fileName.mid(fileName.size()-3, 3) == "xml")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "xmlFile.png") );
    }
    else if(fileName.mid(fileName.size()-2, 2) == "rb")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "rubyFile.png") );
    }
    else if(fileName.mid(fileName.size()-3, 3) == "txt")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "file.png") );
    }
    else if(fileName.mid(fileName.size()-4, 4) == "bash")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "shellFile.png") );
    }
    else if(fileName.mid(fileName.size()-4, 4) == "bash")
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "shellFile.png") );
    }
    else
    {
        northTabWidgetPtr->setTabIcon(northTabWidgetPtr->count()-1, QIcon(RosEnv::imagesInstallLoc + "file.png") );
    }
    

    northTabWidgetPtr->setCurrentIndex(northTabWidgetPtr->count()-1);
    Saver::pushToRideFilePtrVec(rideFile);
    
    cout << "Successfully ended file creation sequence" << endl;
}


void LinkFileWithGui::linkExisting(QTabWidget* northTabWidget, QString* absPathToExistingFileStrPtr, QString fileName, FileGui* editor)
{
    ;//TODO implement, or delete if not needed.
}


void LinkFileWithGui::setHighlighterPtr(Highlighter* highlight)
{
    highlighterPtr = highlight;
}


Highlighter* LinkFileWithGui::getHighlighterPtr()
{
    return highlighterPtr;
}


QAbstractItemModel* LinkFileWithGui::modelFromFile(const QString& fileName)
{
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly))
    {
        cout << "ERROR trying to read file" << endl;
        return new QStringListModel(completer);
    }
    else
    {
        cout << "SUCCESS reading file at NewFileGui::modelFromFile" << endl;
    }
        
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    QStringList words;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        if (!line.isEmpty())
            words << line.trimmed();
    }

    QApplication::restoreOverrideCursor();
    return new QStringListModel(words, completer);
}


QString* LinkFileWithGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


LinkFileWithGui::~LinkFileWithGui()
{
    ;
}