/* 
 * File:   TextAreaInterface.h
 * Module: text_editor
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 12, 2016, 5:12 PM
 * Last Modified on January 12, 2016, 5:12 PM
 */

#ifndef TEXT_AREA_INTERFACE_H
#define TEXT_AREA_INTERFACE_H

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

class TextArea : public QWidget
{
    Q_OBJECT
    
public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit TextArea(FileGui* parent = 0);

    /**
     * 
     * 
     * @return 
     */
    QSize sizeHint() const;

    /**
     * Updates the UI area.
     * 
     * @param event
     */
    virtual void paintEvent(QPaintEvent* event) = 0;

    /**
     * 
     * 
     * @param file
     */
    void setFile(FileGui* file);

    /**
     * 
     * 
     * @return 
     */
    FileGui* getFile() const;

    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~TextArea();


protected slots:
    /**
     * 
     * see: http://doc.qt.io/qt-4.8/qplaintextedit.html
     * 
     * @param e
     */
    void mousePressEvent(QMouseEvent* e);



private:
    FileGui* file;
};

#endif /* TEXT_AREA_INTERFACE_H */