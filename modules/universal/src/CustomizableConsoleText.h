/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cct.h
 * Author: james
 *
 * Created on August 25, 2016, 12:48 PM
 */

#ifndef CCT_H
#define CCT_H

#ifdef _WIN32
#include "WindowsConsoleText.h"
namespace cct = windows_console_text;
#elif __APPLE
#include "UnixConsoleText.h"
namespace cct = unix_console_text;
#elif __linux
#include "UnixConsoleText.h"
namespace cct = unix_console_text;
#endif



#endif /* CCT_H */