#include <iostream>
#include <string.h>

class String {
    private:
        char* s_ptr;    //ptr to heap
        int len;
    public:
        String( );                  // default constructor – empty string
        String(char*);              // parameterized constructor
        ~String();                  // destructor
        String(const String &rhs);  // copy constructor
        
        //  accessor & mutators
        int getLen( );      // get length of string
        void setLen(int );  // reset length of string
        
        //  overloaded operators
        String& operator=(const String &rhs);  // string assignment (copy)
        String operator+(const String &rhs);   // concatenate strings
        bool operator==(const String &rhs);    // identical strings ???
        char operator[ ](int spot);            // retrieve nth letter
        friend 
        std::ostream &operator << (std::ostream &out, const String &rhs);

        //other member functions
        char* find(char target);              //target finder
};


/////////////////////////////////////////////////


int main(void)
{
    String S1("To be or not to be");
    String S2("that is the question");
    String S3;
    
    S3 = S1 + S2;
    std::cout << "S1 = " << S1 << " S2 = " << S2;
    std::cout << "S3";

    // bool T = (S1 == S2);

    int offset = 7;
    std::cout << "S1[offset] = " << S1[offset] << std::endl;

    //modify the letter ‘o’ in S1 to be ‘u’


    return 0;
}


/////////////////////////////////////////////////


String::String()
{
    len = 0;
    s_ptr = new char[32];
}

String::String(char* str)
{
    len = 0;
    s_ptr = str;
    for (int i = 0; str[i] != '\0'; ++i)
        len++;
}

String::~String()
{
    len = 0;
    s_ptr = NULL;
    delete s_ptr;
}

String::String(const String &rhs)
{
    len = rhs.len;
    s_ptr = new char[rhs.len];
}

String &String::operator=(const String &rhs)
{

}

String String::operator+(const String &rhs)
{

}

bool String::operator==(const String &rhs)
{

}

char String::operator[](int spot)
{
    if (spot - 1 < len)
        return s_ptr[spot - 1]; 
}

std::ostream &operator<<(std::ostream &out, const String &Rhs)
{

}
