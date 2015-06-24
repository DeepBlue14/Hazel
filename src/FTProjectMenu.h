/* 
 * File:   FTProjectMenu.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for projects listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 3:41 PM
 */

#ifndef FT_PROJECT_MENU_H
#define	FT_PROJECT_MENU_H

#include <QMenu>

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

class FTProjectMenu : public QMenu
{
    private:
        ;
        
    public:
        FTProjectMenu();
        void initMenu();
        ~FTProjectMenu();
};

#endif	/* FT_PROJECT_MENU_H */