#include "EditorGui.h"


EditorGui::EditorGui(QMainWindow* parent) : QMainWindow(parent)
{
    centralWidPtr = new EditorCentralWid();
    navLstWidPtr = new QListWidget();
    
    QDockWidget* westDock = new QDockWidget();
    westDock->setWidget(navLstWidPtr);
    
    this->setCentralWidget(centralWidPtr);
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