#include "CodeFoldingArea.h"


CodeFoldingArea::CodeFoldingArea(FileGui* file) : QWidget(file)
{
    this->fileGuiPtr = file;
    
}


void CodeFoldingArea::mousePressEvent(QMouseEvent* e)
{
    cout << "Detected mouse press event at CodeFoldingArea::mousePressEvent(...)" << endl;
    /*if(codeFoldArea->contentsRect().contains(e->pos()) )
    {
        cout << "\n\nat FileGui::mousePressEvent(...)\n\n" << endl;
    }
    else
    {
        highlightCurrentLine();
    }*/
    
}

        
QSize CodeFoldingArea::sizeHint() const
{
    ;//return QSize(file->codeFoldingAreaWidth(), 0);
}
        

void CodeFoldingArea::paintEvent(QPaintEvent* event)
{
    fileGuiPtr->codeFoldingAreaPaintEvent(event);
}


void CodeFoldingArea::setFileGuiPtr(FileGui* file)
{
    this->fileGuiPtr = file;
}
        
        
FileGui* CodeFoldingArea::getFileGuiPtr() const
{
    return fileGuiPtr;
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