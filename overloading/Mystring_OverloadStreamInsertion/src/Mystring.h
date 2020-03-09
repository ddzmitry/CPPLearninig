#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    // Overload insertions and output
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);//output
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);//extraction

private:
    char *str;      // pointer to a char[] that hold a C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring( Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    //bool operator==(const Mystring &rhs) const;
    //bool operator!=(const Mystring &rhs) const;

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
