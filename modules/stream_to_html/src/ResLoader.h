/* 
 * File:   ResLoader.h
 * Author: james
 *
 * Created on January 19, 2016, 11:15 PM
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