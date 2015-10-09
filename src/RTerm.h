/* 
 * File:   RTerm.h
 * Module: RTerm
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class is the frontend of RTerm, a terminal emulator
 *                   build using the QT library.  The benefit of this is
 *                   a QT-native terminal which can be easily embeded into
 *                   QT applications.  
 *
 * Created on June 25, 2015, 2:13 PM
 */

#ifndef RTERM_H
#define	RTERM_H

#include <QTextEdit>

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

class RTerm : public QTextEdit
{
    private:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        RTerm();
        
        /**
         * Destructor.
         */
        ~RTerm();
};

#endif	/* RTERM_H */