#include <qt4/QtCore/qstringlist.h>

#include "NewFilePage_1.h"


NewFilePage_1::NewFilePage_1(QWidget* parent) : QWidget(parent)
{
    langsStrLstPtr = new QStringList();
    langsStrLstPtr->push_back("Header (C/C++)");
    langsStrLstPtr->push_back("Source (C/C++");
    langsStrLstPtr->push_back("Source (Python)");
    langsStrLstPtr->push_back("Source (Java)");
    langsStrLstPtr->push_back("Source (Lisp)");
    langsStrLstPtr->push_back("Dynamic Configuration (Python)");
    langsStrLstPtr->push_back("Shell Script");
    langsStrLstPtr->push_back("msg");
    langsStrLstPtr->push_back("srv");
    langsStrLstPtr->push_back("css");
    langsStrLstPtr->push_back("xml");
    langsStrLstPtr->push_back("json");
    langsStrLstPtr->push_back("yaml");
    langsStrLstPtr->push_back("sql");
    langsStrLstPtr->push_back("CMakeLists");
    langsStrLstPtr->push_back("package");
    

}


NewFilePage_1::~NewFilePage_1()
{
    ;
}