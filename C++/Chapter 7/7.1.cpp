/*
Write a function called reversit() that reverses a C-string (an array of char). Use a for
loop that swaps the first and last characters, then the second and next-to-last characters,
and so on. The string should be passed to reversit() as an argument.
Write a program to exercise reversit(). The program should get a string from the user,
call reversit(), and print out the result. Use an input method that allows embedded
blanks. Test the program with Napoleon’s famous phrase, “Able was I ere I saw Elba.”
*/

#include <iostream>
using namespace std;
void reversit(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }

    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
int main(){
    const int MAX = 80;
    char str[MAX];

    cout << "Enter the string: "; cin.get(str, MAX);
    reversit(str);
    cout << "The reversed: " << str << endl;
    return 0;
}

/*
Way 2: using string
#include <iostream>
#include <string>
using namespace std;
void reversit(string text){
    char temp;
    for(int i = 0; i < size(text)/2; i++){
        temp = text[i];
        text[i] = text[size(text) - 1 - i];
        text[size(text) - 1 - i] = temp;
    }
}
int main(){
    string text;
    cout << "Enter the string: "; getline(cin, text);
    reversit(text);
    cout << "The reversed: " << text << endl;
    return 0;
}
*/