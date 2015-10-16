/* 
 * File:   ThemeTxtElem.h
 * Module: XmlLib
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Container class for a subelement of <text> in a theme
 *                   file.
 *
 * Created on October 10, 2015, 12:48 PM
 */

#ifndef THEME_TXT_ELEM_H
#define	THEME_TXT_ELEM_H

#include <QString>

#include <iostream>

using namespace std;

class ThemeTxtElem
{
    private:
        enum Effect
        {
            BOLD,
            ITALIC,
            UNDERLINE_STRAIGHT,
            UNDERLINE_WAVY
        };
        
        QString* elemNameStrPtr; /** The name of the element tag. */
        // attributes of the element
        QString* foregroundColorStrPtr;
        QString* backgroundColorStrPtr;
        Effect effect;
        QString* effectColorStrPtr; /** the color if the effect (if applicable)
                                     * .  This is a QString*, NOT an enum,
                                     * because the result can be passed either
                                     * as a word, or as a HTML or RGB
                                     * representation. */
        
    public:
        ThemeTxtElem();
        void setElemNameStrPtr(QString* elemNameStrPtr);
        QString* getElemNameStrPtr();
        void setForegroundStrPtr(QString* foregroundColorStrPtr);
        QString* getForegroundStrPtr();
        void setBackgroundStrPtr(QString* backgroundColorStrPtr);
        QString* getBackgroundStrPtr();
        void setEffect(Effect effect);
        Effect getEffect();
        void setEffectColorStrPtr(QString* effectColorStrPtr);
        QString* getEffectColorStrPtr();
        QString* toString();
        ~ThemeTxtElem();
};

#endif	/* THEME_TXT_ELEM_H */