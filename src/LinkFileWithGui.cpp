#include "LinkFileWithGui.h"


void LinkFileWithGui::linkNew(QTabWidget* northTabWidgetPtr, QString* absPathToNewFileStrPtr, FileGui* editor)
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
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    completer = new QCompleter();
    completer->setModel(modelFromFile("wordlist.txt"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    editor->setCompleter(completer);
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    setHighlighterPtr(highlighterPtr = new Highlighter(editor->document() ) );

    //create physical file and tab
    RFile* rideFile = new RFile(*absPathToNewFileStrPtr);
    //-----------------


    rideFile->openRdWrFile();
    cout << "HERE" << endl;
    QByteArray tmpBArr;
    tmpBArr.append(editor->toPlainText());
    editor->setPlainText(rideFile->readAll() );
    northTabWidgetPtr->addTab(editor, "Replace");
    
    rideFile->setParallelFileGuiPtr(editor);
    SaveAll::pushToRideFilePtrVec(rideFile);
    
    cout << "Successfully ended file creation sequence" << endl;
}


void LinkFileWithGui::linkExisting(QTabWidget* northTabWidget, QString* absPathToExistingFileStrPtr, FileGui* editor)
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