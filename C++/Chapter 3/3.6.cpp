/*Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.
*/

// factor.cpp
// calculates factorials, demonstrates FOR loop
#include <iostream>
using namespace std;

int main()
{
    unsigned int numb; 
    unsigned long fact = 1;

    cout << "Enter a number: "; cin >> numb; 
    while (numb != 0){
        fact *= numb;
        numb--;
    }
    
    cout << "Factorial is: " << fact << endl;
    return 0;
}
