#include "EditorGui.h"


EditorGui::EditorGui(QMainWindow* parent) : QMainWindow(parent)
{
    centralWidPtr = new EditorCentralWid();
    westGuiPtr = new WestGui();
    
    QDockWidget* westDock = new QDockWidget();
    westDock->setWidget(westGuiPtr);
    
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