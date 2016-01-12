#include "TextArea.h"


TextArea::TextArea(FileGui* file) : QWidget(file)
{
    this->file = file;
    
}


void TextArea::mousePressEvent(QMouseEvent* e)
{
    cout << "Detected mouse press event at TextArea::mousePressEvent(...)" << endl;
    /*if(codeFoldArea->contentsRect().contains(e->pos()) )
    {
        cout << "\n\nat FileGui::mousePressEvent(...)\n\n" << endl;
    }
    else
    {
        highlightCurrentLine();
    }*/
    
}

        
QSize TextArea::sizeHint() const
{
    ;//return QSize(file->TextAreaWidth(), 0);
}
        

void TextArea::paintEvent(QPaintEvent* event)
{
    //file->TextAreaPaintEvent(event);
    // TODO: make this method pure virtual
}


void TextArea::setFile(FileGui* file)
{
    this->file = file;
}
        
        
FileGui* TextArea::getFile() const
{
    return file;
}


QString* TextArea::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


TextArea::~TextArea()
{
    ;
}