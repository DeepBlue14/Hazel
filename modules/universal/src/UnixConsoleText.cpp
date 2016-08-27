#include "UnixConsoleText.h"


string unix_console_text::red(string textStrPtr)
{
        //cout << "\033[1;31mbold red text\033[0m\n");
    return string("\033[0;31m" + textStrPtr + "\033[0m");
}


string unix_console_text::green(string textStrPtr)
{
    return string("\033[0;32m" + textStrPtr + "\033[0m");
}


string unix_console_text::yellow(string textStrPtr)
{
    return string("\033[0;33m" + textStrPtr + "\033[0m");
}


string unix_console_text::blue(string textStrPtr)
{
    return string("\033[0;34m" + textStrPtr + "\033[0m");    
}


string unix_console_text::purple(string textStrPtr)
{
    return string("\033[0;35m" + textStrPtr + "\033[0m");    
}


string unix_console_text::cyan(string textStrPtr)
{
    return string("\033[0;36m" + textStrPtr + "\033[0m");    
}


string unix_console_text::gray(string textStrPtr)
{
    return string("\033[0;37m" + textStrPtr + "\033[0m"); 
}






string unix_console_text::bold(string textStrPtr)
{
    return string("\033[1;30m" + textStrPtr + "\033[0m");
}


string unix_console_text::boldRed(string textStrPtr)
{
    return string("\033[1;31m" + textStrPtr + "\033[0m");    
}


string unix_console_text::boldGreen(string textStrPtr)
{
    return string("\033[1;32m" + textStrPtr + "\033[0m");
}


string unix_console_text::boldYellow(string textStrPtr)
{
    return string("\033[1;33m" + textStrPtr + "\033[0m");
}


string unix_console_text::boldBlue(string textStrPtr)
{
    return string("\033[1;34m" + textStrPtr + "\033[0m");  
}


string unix_console_text::boldPurple(string textStrPtr)
{
    return string("\033[1;35m" + textStrPtr + "\033[0m");
}


string unix_console_text::boldCyan(string textStrPtr)
{
    return string("\033[1;36m" + textStrPtr + "\033[0m");  
}


string unix_console_text::boldGray(string textStrPtr)
{
    return string("\033[1;37m" + textStrPtr + "\033[0m"); 
}





string unix_console_text::italic(string textStrPtr)
{
    return string("\033[3;30m" + textStrPtr + "\033[0m");
}


string unix_console_text::italicRed(string textStrPtr)
{
    return string("\033[3;31m" + textStrPtr + "\033[0m");    
}


string unix_console_text::italicGreen(string textStrPtr)
{
    return string("\033[3;32m" + textStrPtr + "\033[0m");
}


string unix_console_text::italicYellow(string textStrPtr)
{
    return string("\033[3;33m" + textStrPtr + "\033[0m");
}


string unix_console_text::italicBlue(string textStrPtr)
{
    return string("\033[3;34m" + textStrPtr + "\033[0m");    
}


string unix_console_text::italicPurple(string textStrPtr)
{
    return string("\033[3;35m" + textStrPtr + "\033[0m"); 
}


string unix_console_text::italicCyan(string textStrPtr)
{
    return string("\033[3;36m" + textStrPtr + "\033[0m"); 
}


string unix_console_text::italicGray(string textStrPtr)
{
    return string("\033[3;37m" + textStrPtr + "\033[0m"); 
}





string unix_console_text::underlined(string textStrPtr)
{
    return string("\033[4;30m" + textStrPtr + "\033[0m");
}


string unix_console_text::underlinedRed(string textStrPtr)
{
    return string("\033[4;31m" + textStrPtr + "\033[0m");
}


string unix_console_text::underlinedGreen(string textStrPtr)
{
    return string("\033[4;32m" + textStrPtr + "\033[0m");
}


string unix_console_text::underlinedYellow(string textStrPtr)
{
    return string("\033[4;33m" + textStrPtr + "\033[0m");
}


string unix_console_text::underlinedBlue(string textStrPtr)
{
    return string("\033[4;34m" + textStrPtr + "\033[0m");    
}


string unix_console_text::underlinedPurple(string textStrPtr)
{
    return string("\033[4;35m" + textStrPtr + "\033[0m"); 
}


string unix_console_text::underlinedCyan(string textStrPtr)
{
    return string("\033[4;36m" + textStrPtr + "\033[0m"); 
}


string unix_console_text::underlinedGray(string textStrPtr)
{
    return string("\033[4;37m" + textStrPtr + "\033[0m"); 
}





string unix_console_text::strikethrough(string textStrPtr)
{
    return string("\033[9;30m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughRed(string textStrPtr)
{
    return string("\033[9;31m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughGreen(string textStrPtr)
{
    return string("\033[9;32m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughYellow(string textStrPtr)
{
    return string("\033[9;33m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughBlue(string textStrPtr)
{
    return string("\033[9;34m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughPurple(string textStrPtr)
{
    return string("\033[9;35m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughCyan(string textStrPtr)
{
    return string("\033[9;36m" + textStrPtr + "\033[0m");
}


string unix_console_text::strikethroughGray(string textStrPtr)
{
    return string("\033[9;37m" + textStrPtr + "\033[0m");
}