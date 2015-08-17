/* 
 * File:   ModTemplate.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Insert the user's custom data into the template.
 *
 * Created on August 16, 2015, 9:41 AM
 */

#ifndef MOD_TEMPLATE_H
#define	MOD_TEMPLATE_H

#include <QString>
#include <QRegExp>

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

using namespace std;

class ModTemplate
{
    private:
        ;
        
    public:
        ModTemplate();
        QString* replaceAllOldWithNew(QString* data, QString* oldToken, QString* newToken);
        QString* toString();
        ~ModTemplate();
};

#endif	/* MOD_TEMPLATE_H */