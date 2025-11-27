/*
Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
each fraction is stored internally as a variable of type struct fraction, as discussed in
Exercise 8 in this chapter.
*/

#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int main(){
    int n = 1;

    while (n != 0) {
        Fraction f1, f2, f3; char dummychar; char ope; int count; char ans;
        cout << "Enter in the format: 1/2 + 2/5." << endl; 
        cout << "Enter first fraction, the operation, and second fraction: ";
        cin >> f1.numerator >> dummychar >> f1.denominator >> ope >> f2.numerator >> dummychar >> f2.denominator; 
    
        if (f1.denominator == 0 || f2.denominator == 0){
            cout << "Please type again!" << endl;
            continue;
        }

        switch(ope){
            case '+': 
                f3.numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
                f3.denominator = f1.denominator*f2.denominator;
                break;
            case '-':
                f3.numerator = f1.numerator*f2.denominator - f1.denominator*f2.numerator;
                f3.denominator = f1.denominator*f2.denominator;
                break;
            case '*':
                f3.numerator = f1.numerator*f2.numerator;
                f3.denominator = f1.denominator*f2.denominator;
                break;
            case '/':
                if (f2.numerator == 0){
                    cout << "The second fraction must not be 0." << endl;
                    continue;
                }
                else{
                    f3.numerator = f1.numerator * f2.denominator;
                    f3.denominator = f1.denominator * f2.numerator;
                    break;
                }
            default: 
                cout << "Invalid!" << endl;
                continue;
        }

        if (f3.numerator > f3.denominator) {
            count = f3.numerator / 2;
        }
        else {
            count = f3.denominator / 2;
        }

        for (int i = 2; i <= count; i++){
            while (f3.numerator %i == 0 && f3.denominator %i == 0){
                f3.numerator / i;
                f3.denominator / i;
            }
        }

        cout << "Result: " << f3.numerator << "/" << f3.denominator << endl;

        while (ans != 'y' || ans != 'n'){
                cout << "Do you wish to continue (y/n)? "; cin >> ans;
                if (ans == 'y') {break;}
                else if (ans == 'n') {break;}
                else {cout << "Type again!" << endl;}
            }
    }
    return 0;
}
