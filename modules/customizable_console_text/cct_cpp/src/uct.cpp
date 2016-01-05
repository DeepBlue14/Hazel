#include <sstream>

#include "uct.h"



string uct::intToString(int i)
{
    stringstream ss;
    ss << i;
    string cppStr = ss.str();
    
    return cppStr;
}


string uct::doubleToString(double d)
{
    stringstream ss;
    ss << d;
    string cppStr = ss.str();
    
    return cppStr;
}