/*
Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:
 Addition: a/b + c/d = (a*d + b*c) / (b*d)
 Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
 Multiplication: a/b * c/d = (a*c) / (b*d)
 Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.
*/

#include <iostream>
using namespace std;

int main(){
    
    while (true){
        int ope; int a1; int a2; int b1; int b2; char dummychar; int upper; int lower; int count;

        cout << "Please enter the fraction in the format of a/b." << endl;
        cout << "Enter the first fraction: "; cin >> a1 >> dummychar >> a2;
        cout << "Enter the second fraction: "; cin >> b1 >> dummychar >> b2;

        if (a2 == 0 || b2 == 0){
            cout << "Please type again!" << endl;
            continue;
        }

        cout << "Enter 1 for addition, enter 2 for subtraction, enter 3 for multiplication, enter 4 for division: "; cin >> ope;

        switch(ope) {
            case 1: 
                upper = a1*b2 + a2*b1;
                lower = a2*b2;
                break;
            case 2:
                upper = a1*b2 - a2*b1;
                lower = a2*b2;
                break;
            case 3:
                upper = a1*b1;
                lower = a2*b2;
                break;
            case 4:
                if (b1 == 0) {
                    cout << "Cannot devide by zero! Type again!";
                    continue;
                }
                upper = a1*b2;
                lower = a2*b1;
                break;
            default: cout << "Please type again!" << endl; continue;
        }

        if (upper > lower){
            count = upper / 2;
        }
        else{
            count = lower / 2;
        }

        for (int i = 2; i <= count; i++){
            while (upper %i == 0 && lower % i == 0){
                upper /= i;
                lower /= i;
            }
        }

        cout << "Result: " << upper << "/" << lower << endl;
    }
    return 0;
}