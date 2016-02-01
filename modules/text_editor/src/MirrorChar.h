/* 
 * File:   MirrorChar.h
 * Module: text_editor
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class is a type for parentheses, curly and square
 *                   braces (i.e. "mirror" characters).  
 *
 * Created on August 14, 2015, 4:29 PM
 * Last Modified: 8/14/2015
 */

#ifndef MIRROR_CHAR_H
#define	MIRROR_CHAR_H

#include <QStringBuilder>
#include <QString>
#include <QChar>


#include <iostream>

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

class MirrorChar
{


public:
    enum Type 
    {
        OPN_PAREN,
        CLS_PAREN,
        OPN_CRLY_BRACE,
        CLS_CRLY_BRACE,
        OPN_SQR_BRACE,
        CLS_SQR_BRACE,
        UNKNOWN_CHAR
    };
    
    /**
     * Constructor.
     */
    MirrorChar();

    /**
     * 
     * 
     * @param text
     */
    MirrorChar(QChar* text);

    /**
     * 
     * 
     * @param text
     * @param myType
     */
    MirrorChar(QChar* text, Type myType);

    /**
     * 
     * 
     * @param text
     */
    void setText(QChar* text);

    /**
     * 
     * 
     * @return 
     */
    QChar* getText();

    /**
     * 
     * 
     * @param myType
     */
    void setType(Type myType);

    /**
     * 
     * 
     * @return 
     */
    Type getType();

    /**
     * 
     * 
     * @param mirrorType
     * @return 
     */
    QString* typeToString(Type mirrorType);

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * Destructor.
     */
    ~MirrorChar();

    
private:
    Type mirrorType;
    QChar* mirrorChar;
    
    
};

#endif	/* MIRROR_CHAR_H */
