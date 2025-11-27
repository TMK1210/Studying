/*
Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
Basics.” This program stores the numerator and denominator of two fractions before
adding them, and may also store the answer, which is also a fraction. Modify the 
program so that all fractions are stored in variables of type struct fraction, whose 
two members are the fraction’s numerator and denominator (both type int). All fraction
related data should be stored in structures of this type.
*/

#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int main(){
    
    while (true) {
        Fraction f1, f2, f3; char dummychar; int count;
        cout << "Enter the first fraction: "; cin >> f1.numerator >> dummychar >> f1.denominator;
        cout << "Enter the second fraction: "; cin >> f2.numerator >> dummychar >> f2.denominator;
    
        if (f1.denominator == 0 || f2.denominator == 0){
            cout << "Please type again!\n";
            continue;
        }
     
        f3.numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
        f3.denominator = f1.denominator*f2.denominator;
        
        if (f3.numerator > f3.denominator){
            count = f3.numerator;
        }
        else{
            count = f3.denominator;
        }

        for (int i = 2; i <= count / 2; i++) {
            while (f3.numerator % i == 0 && f3.denominator % i == 0) {
                f3.numerator /= i;
                f3.denominator /= i;
                }
            }

            cout << "Sum: " << f3.numerator << "/" << f3.denominator << endl;
    }
    return 0;
}