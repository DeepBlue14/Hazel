#include "CodeFoldingArea.h"


CodeFoldingArea::CodeFoldingArea(FileGui* file) : QWidget(file)
{
    this->file = file;
    
}
        
QSize CodeFoldingArea::sizeHint() const
{
    ;//return QSize(file->codeFoldingAreaWidth(), 0);
}
        
void CodeFoldingArea::paintEvent(QPaintEvent* event)
{
    ;//file->codeFoldingAreaPaintEvent(event);
}


void CodeFoldingArea::setFile(FileGui* file)
{
    this->file = file;
}
        
        
FileGui* CodeFoldingArea::getFile()
{
    return file;
}


QString* CodeFoldingArea::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


CodeFoldingArea::~CodeFoldingArea()
{
    ;
}