/* 
 * File:   FTDirMenu.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for directories listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 3:40 PM
 */

#ifndef FT_DIR_MENU_H
#define	FT_DIR_MENU_H

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

class FTDirMenu : public QMenu
{
    private:
        ;
        
    public:
        FTDirMenu();
        void initMenu();
        ~FTDirMenu();
};

#endif	/* FT_DIR_MENU_H */