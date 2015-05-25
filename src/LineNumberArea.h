/* 
 * File:   LineNumberArea.h
 * Author: james
 * Email:  
 * Created on May 11, 2015, 11:21 AM
 */

#ifndef LINENUMBERAREA_H
#define	LINENUMBERAREA_H

#include <QWidget>
#include <QPaintEvent>
#include <QSize>

#include "FileGui.h"

class LineNumberArea : public QWidget
{
    private:
        FileGui* file;
        
    public:
        LineNumberArea(FileGui* parent = 0);
        QSize sizeHint() const;
        void paintEvent(QPaintEvent* event);
        ~LineNumberArea();
};

#endif	/* LINENUMBERAREA_H */

