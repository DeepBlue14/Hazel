/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FormatAdapter.h
 * Module: datastream_html_adapter
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Converts between UNIX console and HTML text formats. 
 *
 * Created on January 23, 2016, 11:48 AM
 * Last Modified: 1/23/2016
 */

#ifndef FORMAT_ADAPTER_H
#define FORMAT_ADAPTER_H

#include <QString>

#include <iostream>

#include "FontSpecs.h"

using std::cout;
using std::endl;

namespace FormatAdapter
{
    QString toHtml(QString unixStr);
    QString toUnix(QString unixStr);
}


#endif /* FORMAT_ADAPTER_H */