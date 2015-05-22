#include "RunGui.h"


RunGui::RunGui(QWidget* parent) : QWidget(parent)
{
            
    runPage_1Ptr = new RunPage_1();
    runPage_2Ptr = new RunPage_2();
    runPage_3Ptr = new RunPage_3();
    
    outerLayoutPtr = new QGridLayout();

}


RunGui::~RunGui()
{
    ;
}