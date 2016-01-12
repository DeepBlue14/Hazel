#include "GitStatusArea.h"


GitStatusArea::GitStatusArea(FileGui* file) : QWidget(file)
{
    this->fileGuiPtr = file;
    
}


void GitStatusArea::mousePressEvent(QMouseEvent* e)
{
    cout << "Detected mouse press event at GitStatusArea::mousePressEvent(...)" << endl;
    /*if(codeFoldArea->contentsRect().contains(e->pos()) )
    {
        cout << "\n\nat FileGui::mousePressEvent(...)\n\n" << endl;
    }
    else
    {
        highlightCurrentLine();
    }*/
    
}


QSize GitStatusArea::sizeHint() const
{
    ;//return QSize(file->GitStatusAreaWidth(), 0);
}


void GitStatusArea::paintEvent(QPaintEvent* event)
{
    fileGuiPtr->gitStatusAreaPaintEvent(event);
}


void GitStatusArea::setFileGuiPtr(FileGui* file)
{
    this->fileGuiPtr = file;
}
        
        
FileGui* GitStatusArea::getFileGuiPtr() const
{
    return fileGuiPtr;
}


QString* GitStatusArea::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


GitStatusArea::~GitStatusArea()
{
    ;
}