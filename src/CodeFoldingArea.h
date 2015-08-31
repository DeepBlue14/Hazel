/* 
 * File:   CodeFoldingArea.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class handles the area along the left margin next to
 *                   the line number area which contains the line numbers.
 *                   
 *
 * Created on August 28, 2015, 2:04 PM
 */

#ifndef CODE_FOLDING_AREA_H
#define	CODE_FOLDING_AREA_H

#include <QWidget>
#include <QPaintEvent>
#include <QSize>
#include <QString>

#include <iostream>

#include "FileGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class CodeFoldingArea : public QWidget
{
    private:
        FileGui* file;
        
    protected slots:
        /**
         * 
         * see: http://doc.qt.io/qt-4.8/qplaintextedit.html
         * 
         * @param e
         */
        void mousePressEvent(QMouseEvent* e);
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        CodeFoldingArea(FileGui* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QSize sizeHint() const;
        
        /**
         * 
         * 
         * @param event
         */
        void paintEvent(QPaintEvent* event);
        
        
        void setFile(FileGui* file);
        
        
        FileGui* getFile();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~CodeFoldingArea();
};

#endif	/* CODE_FOLDING_AREA_H */