#include "OutputUi.h"


OutputUi::OutputUi(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
    
    this->setCentralWidget(buildDisplayPtr);
}


void OutputUi::setup()
{
    QFile file("./src/qss/Classic.css");
    if(!file.open(QFile::ReadOnly) )
    {
        cerr << "ERROR: failed to open css file @ OutputUi::setup()" << endl;
    }
    
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
    this->ensurePolished();
    
    buildDisplayPtr = new BuildDisplay();
    outputToolbarPtr = new OutputToolbar();
    debugToolbarPtr = new DebugToolbar();
    outputWidPtr = new QToolBar();
    debugWidPtr = new QToolBar();
    
    QVector<QAction*>* tmpOutputActVec = outputToolbarPtr->getActions();
    QVector<QAction*>* tmpDebugActVec = debugToolbarPtr->getActions();
    
    for(size_t i = 0; i < tmpOutputActVec->size(); i++)
    {
        outputWidPtr->addAction(tmpOutputActVec->at(i) );
    }
    
    for(size_t i = 0; i < tmpDebugActVec->size(); i++)
    {
        debugWidPtr->addAction(tmpDebugActVec->at(i) );
    }

    
    // TODO: if the user presses the "debug" button, enable/vis this
    //debugWidPtr->setEnabled(false);
    //debugWidPtr->setVisible(false);
    
    this->addToolBar(Qt::LeftToolBarArea, outputWidPtr);
    this->addToolBar(Qt::RightToolBarArea, debugWidPtr);
}
 
 
QString* OutputUi::toString()
{
    return new QString("***METHOD STUB***");
}


OutputUi::~OutputUi()
{
    ;
}