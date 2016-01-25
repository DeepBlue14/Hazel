/*
 * File:   main.cpp
 * Module: 
 * Author: james
 * Email:
 * File Description: 
 *
 * Ref: http://www.tutorialspoint.com/cplusplus/input_output_operators_overloading.htm
 * 
 * Created on January 24, 2016, 10:54 PM
 * Last Modified: 1/24/2016
 */

#include <iostream>
#include <string>

using namespace std;

struct String
{
    String(string s)
    {
    	str = s;
    }

    
    String& operator+=(const String& rhs) 
    {
       str += rhs.str;
       return *this;
    }

    
    const String operator+(const String& rhs) const
    {
    	String sum = *this;
    	return sum += rhs;
    }
    
    
    friend ostream& operator<<(ostream& output, const String& str)
    {
        output << str.str;
        return output;
    }
    
    

    string str;
};


int main()
{
    /*
    String s1("this");
    String s2(" is");
    String s3(" war!");

    s1 += s2;
    s1 += s3;

    cout << s1.str << endl;
    */
    
    String s4("Hello");
    String s5(" World!");
    cout << s4.str + s5.str << endl;
    cout << s4 << endl;

    return 0;
}
