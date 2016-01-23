/* 
 * File:   TextPair.h
 * Module: stream_to_html
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: More customized, encapsulated structure similar to QPair.
 *
 * Created on January 19, 2016, 11:21 PM
 */

#ifndef TEXT_PAIR_H
#define TEXT_PAIR_H

#include <QString>

class TextPair
{
    
public:
    TextPair();
    void setUnixElem(QString& unixElem);
    QString* getUnixElem();
    void setHtmlElem(QString& htmlElem);
    QString* getHtmlElem();
    QString* toString();
    ~TextPair();
    
    
private:
    QString* unixElem;
    QString* htmlElem;
    
};

#endif /* TEXT_PAIR_H */