/* 
 * File:   ResLoader.h
 * Module: datastream_html_adapter
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class uses the xml_parser API to load the
 *                   conversions.xml data, which contains color and effect
 *                   conversions between a UNIX datastream string and HTML.
 *
 * Created on January 19, 2016, 11:15 PM
 * Last Modified: 1/23/2016
 */

#ifndef RES_LOADER_H
#define RES_LOADER_H

#include <QVector>
// #include <QPair> // using custom pair instead
#include <QFile>
#include <QString>

#include "TextPair.h"

class ResLoader
{
    
public:
    ResLoader();
    void loadData();
    QString* toString();
    ~ResLoader();
    
    
private:
    ;
    
};

#endif /* RES_LOADER_H */