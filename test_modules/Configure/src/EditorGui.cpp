#include "EditorGui.h"


EditorGui::EditorGui(QMainWindow* parent) : QMainWindow(parent)
{
    centralWidPtr = new EditorCentralWid();
    makeWestTabPtr = new WestTab();
    pkgWestTabPtr = new WestTab();
    
    QTabWidget* tabWidget = new QTabWidget();
    tabWidget->addTab(makeWestTabPtr, "Make");
    tabWidget->addTab(pkgWestTabPtr, "Pkg");
    
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