#include "SigTextEdit.h"


SigTextEdit::SigTextEdit(QTextEdit* parent) : QTextEdit(parent)
{   
    ;
}


void SigTextEdit::keyPressEvent(QKeyEvent* e)
{
    cout << "@ SigTextEdit::keyPressEvent(...)" << endl;
    
    //if the key sequence was [CTRL]C or [CTRL]\, then send a pass the signal
    //on to terminate the process.
    if(e->key() == Qt::Key_C && e->modifiers().testFlag(Qt::ControlModifier) )
    {
        cout << "@ SigTextEdit::keyPressEvent(...); detected [CTRL]C" << endl;
    }
    else if(e->key() == Qt::Key_Backslash && e->modifiers().testFlag(Qt::ControlModifier) )
    {
        cout << "@ SigTextEdit::keyPressEvent(...); detected [CTRL]\\" << endl;
    }
}


QString* SigTextEdit::toString()
{
    return new QString("***METHOD STUB***");
}


SigTextEdit::~SigTextEdit()
{
    ;
}