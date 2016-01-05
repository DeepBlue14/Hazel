#include "MasterGui.h"

#if defined(Q_WS_X11)
QString* os = new QString("Linux");
#elif defined (Q_WS_WIN)
QString* os = new QString("Windows");
#elif defined(Q_WS_MACX)
QString* os = new QString("Mac");
#else
QString* os = new QString("Unknown");
#endif


MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    setOsStrPtr(os);
    cout << "System type: " << getOsStrPtr()->toStdString() << endl;
    loadParallels = new LoadParallels();
    loadParallels->load(getOsStrPtr() );
    //cout << loadParallels->toString()->toStdString() << endl;
    
    osCmdSwapPtr = new OsCmdSwap();
    osCmdSwapPtr->setParallels(loadParallels->getDat() );
    
    uTextEdit = new UTextEdit();
    uTextEdit->setOsCmdSwapPtr(osCmdSwapPtr);
    outerLayout = new QGridLayout();
    outerLayout->setContentsMargins(0, 0, 0, 0);
    outerLayout->addWidget(uTextEdit);
    
    QFile file("./src/qss/Classic.css");
    file.open(QFile::ReadOnly);
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
    this->ensurePolished();

    this->setLayout(outerLayout);
    this->setWindowIcon(QIcon("/home/james/NetBeansProjects/rqt_ide/uterm/res/terminal01.png") );
    //this->setWindowTitle("UTerm");
    this->resize(650, 425);
}


void MasterGui::setOsStrPtr(QString* osStrPtr)
{
    this->osStrPtr = osStrPtr;
}


QString* MasterGui::getOsStrPtr()
{
    return osStrPtr;
}


void MasterGui::setOsCmdSwapPtr(OsCmdSwap* osCmdSwapPtr)
{
    this->osCmdSwapPtr = osCmdSwapPtr;
}


OsCmdSwap* MasterGui::getOsCmdSwapPtr()
{
    return osCmdSwapPtr;
}


MasterGui::~MasterGui()
{
    ;
}