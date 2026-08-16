/*
Make your own version of the library function strcmp(s1,s2),which compares two
strings and returns –1 if s1comes first alphabetically,0 if s1ands2are the same,and 1
ifs2comes first alphabetically. Call your function compstr(). It should take two char*
strings as arguments,compare them character by character,and return an int. Write a
main()program to test the function with different combinations of strings. Use pointer
notation throughout
*/

#include <iostream>
#include <cstring>
using namespace std;

int compstr(char* s1, char* s2){
    while (*s1 != '\0' && *s2 != '\0'){
        if (*s1 != *s2){
            if (*s1 < *s2) {return -1;}
            else {return 1;}
        }
        s1++; s2++;
    }
    //out the loop but haven't return --> s1/s2 is done
    if (*s1 == '\0' && *s2 == '\0') {return 0;}
    else if(*s1 == '\0') {return -1;}
    else {return 1;}
};

int main(){
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "cat";
    char str4[] = "dog";
    char str5[] = "cat";
    char str6[] = "care";

    cout << "compstr 1&2 = " << compstr(str1, str2) << endl;
    cout << "compstr 3&4 = " << compstr(str3, str4) << endl;
    cout << "compstr 3&5 = " << compstr(str3, str5) << endl;
    cout << "compstr 5&6 = " << compstr(str5, str6) << endl;
    return 0;
}