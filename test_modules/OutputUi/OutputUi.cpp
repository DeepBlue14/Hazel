#include "OutputUi.h"


OutputUi::OutputUi(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
    
    this->setCentralWidget(buildDisplayPtr);
}


void OutputUi::setup()
{
    QFile file("./Classic.css");
    if(!file.open(QFile::ReadOnly) )
    {
        cerr << "ERROR: failed to open css file @ OutputUi::setup()" << endl;
    }
    
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
    this->ensurePolished();
    
    buildDisplayPtr = new BuildDisplay();
    debugToolbarPtr = new DebugToolbar();
    debugWidPtr = new QToolBar();
    
    QVector<QAction*>* tmpActVec = debugToolbarPtr->getActions();
    for(size_t i = 0; i < tmpActVec->size(); i++)
    {
        debugWidPtr->addAction(tmpActVec->at(i) );
        
    }
    
    // TODO: if the user presses the "debug" button, enable/vis this
    //debugWidPtr->setEnabled(false);
    //debugWidPtr->setVisible(false);
    
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