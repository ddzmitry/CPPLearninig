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



// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    // if a==a assignment to itself return it back
    if (this == &rhs)
        return *this;
    //delete [] str; OR
    delete [] this->str;
    // on heap create a new string of referenced string length + 1 for string terminator
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }

  // string getter
 const char *Mystring::get_str() const { return str; }




