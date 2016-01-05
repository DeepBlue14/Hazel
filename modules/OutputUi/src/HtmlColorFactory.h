/* 
 * File:   HtmlColorFactory.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class converts text to HTML with color and effect
 *                   tags (the QT API support's HTML in QTextEdit and
 *                   QLineEdit types). 
 *
 * Created on November 28, 2015, 3:35 PM
 * Last Modified 11/27/2015 By JK
 */

#ifndef HTML_COLOR_FACTORY_H
#define	HTML_COLOR_FACTORY_H

#include <QString>
#include <QTextEdit>

#include <iostream>

using std::cout;
using std::endl;

class HtmlColorFactory
{

public:
    /**
     * Type of color to be used in text.
     */
    enum Color {
        DEFAULT,
        LIGHT_RED,
        RED,
        DARK_RED,
        LIGHT_YELLOW,
        YELLOW,
        DARK_YELLOW,
        LIGHT_GREEN,
        GREEN,
        DARK_GREEN,
        LIGHT_BLUE,
        BLUE,
        DARK_BLUE,
        LIGHT_PURPLE,
        PURPLE,
        DARK_PURPLE,
        LIGHT_GRAY,
        GRAY,
        DARK_GRAY,
        BLACK,
        WHITE,
        LIGHT_BROWN,
        BROWN,
        DARK_BROWN,
        LIGHT_ORANGE,
        ORANGE,
        DARK_ORANGE
    };

    /**
     * Type of effect to be used in text.
     */
    enum Effect {
        NONE,
        BOLD,
        ITALIC,
        UNDERLINE,
        STRIKE_THROUGH
    };
    
    /**
     * Constructor
     */
    explicit HtmlColorFactory();
    
    /**
     * Converts text to HTML with effects and colors.
     * 
     * @param textRef
     * @param color
     * @param effect
     * @return 
     */
    QString& toHtml(QString& textRef, Color color = DEFAULT, Effect effect = NONE);
    
    /**
     * 
     * 
     * @param htmlTextRef
     */
    void debugDisplay(QString& htmlTextRef);
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~HtmlColorFactory();
    
private:
    // FIXME: this class can and should be made part of my CCT library.

    
    
    
};

#endif	/* HTML_COLOR_FACTORY_H */