/* 
 * File:   QtTypeConvs.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 16, 2015, 2:05 PM
 */

#ifndef MISC_HELPERS_H
#define	MISC_HELPERS_H

#include <QString>
#include <QStringList>

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

namespace MiscHelpers
{
    
    
    /**
     * 
     * 
     * @param str
     * @param these
     * @param cs
     * @return 
     */
    bool containsOneOfThese(QString* str, QStringList* these, Qt::CaseSensitivity cs = Qt::CaseInsensitive);
    
    /**
     * 
     * 
     * @param str
     * @param these
     * @param cs
     * @return 
     */
    bool isPartOfOneOfThese(QString* str, QStringList* these, Qt::CaseSensitivity cs = Qt::CaseInsensitive);
    
    
}

#endif	/* MISC_HELPERS_H */