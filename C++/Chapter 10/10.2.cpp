/*
 Start with the String class from the NEWSTR example in this chapter. Add a member
function called upit() that converts the string to all uppercase. You can use the 
toupper() library function, which takes a single character as an argument and returns a
character that has been converted (if necessary) to uppercase. This function uses the
CCTYPE header file. Write some code in main() to test upit().
*/

// newstr.cpp
// using new to get memory for strings
#include <iostream>
#include <cstring>   // for strcpy(), strlen()
using namespace std;
////////////////////////////////////////////////////////////////
class String                    // user-defined string type
{
private:
    char* str;                  // pointer to string
public:
    String(const char* s)       // constructor, one arg
    {
        int length = strlen(s);       // length of string argument
        str = new char[length + 1];   // get memory
        strcpy(str, s);               // copy argument to it
    }

    ~String()                   // destructor
    {
        cout << "Deleting str.\n";
        delete[] str;            // release memory
    }

    void display()               // display the String
    {
        cout << str << endl;
    }

    void upit(){
        int length = strlen(str);
        for(int i=0; i<length; i++){
            *(str+i) = toupper(*(str+i));
        }
    }
};

////////////////////////////////////////////////////////////////
int main()
{
    String s1 = "Who knows nothing doubts nothing.";  // uses 1-arg constructor

    cout << "s1=";       // display string
    s1.display();

    s1.upit();
    cout << "s1=";
    s1.display();

    return 0;
}