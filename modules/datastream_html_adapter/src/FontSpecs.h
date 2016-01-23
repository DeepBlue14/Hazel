/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FontSpecs.h
 * Module: datastream_html_adapter
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 23, 2016, 11:24 AM
 * Last Modified: 1/23/2016
 */

#ifndef FONT_SPECS_H
#define FONT_SPECS_H

#include <QString>
#include <QByteArray>
#include <QPair>
#include <QVector>

#include <iostream>

using std::cout;
using std::endl;

namespace FontSpecs
{
    enum Color
    {
        BLACK,
        WHITE,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        PURPLE,
        CYAN,
        GRAY, 
    };
    
    
    enum Effect
    {
        NONE,
        BOLD,
        ITALIC,
        UNDERLINE,
        STRIKE_THROUGH,
    };
    
    
    /**
     * Contains the unix stream and html codes.
     */
    extern QVector<QPair<QString, QString> > codesStrPairVec;

    
    extern void loadCodes();
    
}

#endif /* FONT_SPECS_H */