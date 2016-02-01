/* 
 * File:   CodeFoldingArea.h
 * Module: text_editor
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class handles the area along the left margin next to
 *                   the line number area which contains the line numbers.
 *                   
 *
 * Created on August 28, 2015, 2:04 PM
 * Last Modified: 1/13/2016
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

using std::cout;
using std::endl;

class CodeFoldingArea : public QWidget
{
    Q_OBJECT
    
public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit CodeFoldingArea(FileGui* parent = 0);

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


    /**
     * 
     * 
     * @param file
     */
    void setFileGuiPtr(FileGui* file);


    /**
     * 
     * 
     * @return 
     */
    FileGui* getFileGuiPtr() const;

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * 
     */
    virtual ~CodeFoldingArea();


protected slots:
    /**
     * 
     * see: http://doc.qt.io/qt-4.8/qplaintextedit.html
     * 
     * @param e
     */
    void mousePressEvent(QMouseEvent* e);



private:
    FileGui* fileGuiPtr;
    
};

#endif	/* CODE_FOLDING_AREA_H */