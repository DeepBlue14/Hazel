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
    while(!rideFile->atEnd())
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
    SaveAll::pushToRideFilePtrVec(rideFile);
    
    cout << "Successfully ended file creation sequence" << endl;
}


void LinkFileWithGui::linkExisting(QTabWidget* northTabWidget, QString* absPathToExistingFileStrPtr, QString fileName, FileGui* editor)
{
    ;
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