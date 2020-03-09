#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str {nullptr} {
    	// check if nullpointer was passed , create empty string with value of \0
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
        	// create a new string on the heap
            str = new char[std::strlen(s)+1];
            //copy string to new string C-strings
            std::strcpy(str, s);
        }
}

// Copy constructor Mystring b{a}
Mystring::Mystring(const Mystring &source)
     : str{nullptr} {
    	 // create a new string on the heap
        str = new char[std::strlen(source.str )+ 1];
        //copy string to new string C-string
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }

  // string getter
 const char *Mystring::get_str() const { return str; }




