/* 
 * File:   ThemeDat.h
 * Module: xml_parser
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Container class for UI theme data.
 *
 * Created on October 10, 2015, 11:34 AM
 * Last Modified: 1/23/2016
 */

#ifndef THEME_DAT_H
#define	THEME_DAT_H

#include <QString>
#include <QVector>

#include <iostream>

#include "ThemeTxtElem.h"

using std::cout;
using std::endl;

class ThemeDat
{


public:
    ThemeDat();
    void setNameStrPtr(QString* nameStrPtr);
    QString* getNameStrPtr();
    void setLocStrPtr(QString* locStrPtr);
    QString* getLocStrPtr();
    void setFontNameStrPtr(QString* fontNameStrPtr);
    QString* getFontNameStrPtr();
    void setFontSize(int fontSize);
    int getFontSize();
    void setBackgroundColorStrPtr(QString* backgroundColorStrPtr);
    QString* getBackgroundColorStrPtr();
    void setForegroundColorStrPtr(QString* ForegroundColorStrPtr);
    QString* getForegroundColorStrPtr();
    void setFoldFontNameStrPtr(QString* foldFontNameStrPtr);
    QString* getFoldFontNameStrPtr();
    void setFoldFontSize(int foldFontSize);
    int getFoldFontSize();
    void setTxtBackgroundColorStrPtr(QString* txtBackgroundColorStrPtr);
    QString* getTxtBackgroundColorStrPtr();
    void setTxtForegroundColorStrPtr(QString* txtForegroundColorStrPtr);
    QString* getTxtForegroundColorStrPtr();
    void setTxtFontNameStrPtr(QString* txtFontNameStrPtr);
    QString* getTxtFontNameStrPtr();
    void setTxtFontSize(int txtFontSize);
    int getTxtFontSize();
    void pushToThemeTxtElemPtrVecPtr(ThemeTxtElem* themeTxtElem);
    ThemeTxtElem* popFromThemeTxtElemPtrVecPtr();
    void setThemeTxtElemPtrVecPtr(QVector<ThemeTxtElem*>* themeTxtElemPtrVecPtr);
    QVector<ThemeTxtElem*>* getThemeTxtElemPtrVecPtr();
    QString* toString();
    ~ThemeDat();


private:
    // <general> element
    QString* nameStrPtr;
    QString* locStrPtr;

    // <line_number_area> element
    QString* fontNameStrPtr;
    int fontSize;

    // <background_color> element
    QString* backgroundColorStrPtr;
    QString* foregroundColorStrPtr;

    // <code_folding_area> element
    QString* foldFontNameStrPtr;
    int foldFontSize;

    // <text_field> element
    QString* txtBackgroundColorStrPtr;
    QString* txtForegroundColorStrPtr;
    QString* txtFontNameStrPtr;
    int txtFontSize;

    QVector<ThemeTxtElem*>* themeTxtElemPtrVecPtr;
    
    
};

#endif	/* THEME_DAT_H */