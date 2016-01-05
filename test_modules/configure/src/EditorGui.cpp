#include "EditorGui.h"


EditorGui::EditorGui(QMainWindow* parent) : QMainWindow(parent)
{
    centralWidPtr = new EditorCentralWid();
    makeWestTabPtr = new WestTab(WestTab::MAKE);
    pkgWestTabPtr = new WestTab(WestTab::BUILD);
    hWestTabPtr = new WestTab(WestTab::HEADER);
    cWestTabPtr = new WestTab(WestTab::SOURCE);
    pyWestTabPtr = new WestTab(WestTab::PYTHON);
    miscWestTabPtr = new WestTab(WestTab::MISC);
    
    QTabWidget* tabWidget = new QTabWidget();
    tabWidget->addTab(makeWestTabPtr, "make");
    tabWidget->addTab(pkgWestTabPtr, "pkg");
    tabWidget->addTab(hWestTabPtr, "inc");
    tabWidget->addTab(cWestTabPtr, "src");
    tabWidget->addTab(pyWestTabPtr, "py");
    tabWidget->addTab(miscWestTabPtr, "misc");
    
    QDockWidget* westDock = new QDockWidget();
    westDock->setWidget(tabWidget);
    
    QDockWidget* centralDock = new QDockWidget();
    centralDock->setWidget(centralWidPtr);
    this->setCentralWidget(centralDock);
    this->addDockWidget(Qt::LeftDockWidgetArea, westDock);
}


QString* EditorGui::toString()
{
    return new QString("***METHOD STUB @ Editor::Gui::toString()");
}


EditorGui::~EditorGui()
{
    ;
}