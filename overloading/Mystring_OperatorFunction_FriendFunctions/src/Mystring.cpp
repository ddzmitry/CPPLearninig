#include <iostream>
#include <cstring>
#include <cctype>
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
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source)
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment operator
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment operator
Mystring &Mystring::operator=( Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
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


// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Make lowercase
Mystring operator-(const Mystring &obj) {
	// create buffer size of the string
    char *buff = new char[std::strlen(obj.str) + 1];
    // copy string to buffer
    std::strcpy(buff, obj.str);
    // make it small
    for (size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    // create new string and return it
    Mystring temp {buff};
    delete [] buff;
    // here we go
    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
	// create buffer of the lenght of two string
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    // copy and concatinate two strings to buffer
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    // create new MYstring object
    Mystring temp {buff};
    // delete temp
    delete [] buff;
    // return it
    return temp;
}

//    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs); //output

// friend std::istream &operator>> (std::istream &os, Mystring &rhs);//extraction

//insertion operator

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
	// if not const can use rhs.str
    os << rhs.get_str();
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}





