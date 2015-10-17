/* 
 * File:   LoadTemplate.h
 * Module: NewFile
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 14, 2015, 2:28 PM
 */

#ifndef LOAD_TEMPLATE_H
#define	LOAD_TEMPLATE_H

#include <QDir>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>

#include <iostream>

#include "RosEnv.h"
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

class LoadTemplate
{
    private:
        QString* absPathToTemplateDirStrPtr;
        QStringList* templateStrLstPtr;
        QString* fileContentsStrPtr;
        
    public:
        enum LangTemplate
        {
            BELL = 0,
            C,
            CPP,
            PYTHON
        };
        
        enum FileTemplate
        {
            CLASS_TEMPLATE = 0,
            CLASS_SUB_TEMPLATE,
            CLASS_PUB_TEMPLATE,
            CLASS_SUB_PUB_TEMPLATE,
            MAIN_TEMPLATE,
            MAIN_SUB_TEMPLATE,
            MAIN_PUB_TEMPLATE,
            MAIN_SUB_PUB_TEMPLATE
        };
        
        LoadTemplate();
        QString* loadFile(LangTemplate langTemplate, FileTemplate fileTemplate);
        void setAbsPathToTemplateDirStrPtr(QString* absPathToTemplateDirStrPtr);
        QString* getAbsPathToTemplateDirStrPtr();
        void setTemplateStrLstPtr(QStringList* templateStrLstPtr);
        QStringList* getTemplateStrLstPtr();
        void setFileContentsStrPtr(QString* fileContentsStrPtr);
        QString* getFileContentsStrPtr();
        //-----
        
        //-----
        QString* toString();
        ~LoadTemplate();
};

#endif	/* LOADTEMPLATE_H */