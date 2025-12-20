/*
Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
fmul(), and fdiv(). Each of these functions should take two arguments of type struct
fraction, and return an argument of the same type.
*/

#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

Fraction reduceFraction(Fraction f) {
    int a = abs(f.numerator);
    int b = abs(f.denominator);

    while (b != 0) {  //find GCD
        int temp = b;
        b = a % b;
        a = temp;
    }

    f.numerator /= a;
    f.denominator /= a;
    return f;
}

Fraction fadd(Fraction f1, Fraction f2) {
    Fraction f3;
    f3.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    f3.denominator = f1.denominator * f2.denominator;
    return reduceFraction(f3);
}

Fraction fsub(Fraction f1, Fraction f2) {
    Fraction f3;
    f3.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    f3.denominator = f1.denominator * f2.denominator;
    return reduceFraction(f3);
}

Fraction fmul(Fraction f1, Fraction f2) {
    Fraction f3;
    f3.numerator = f1.numerator * f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;
    return reduceFraction(f3);
}

Fraction fdiv(Fraction f1, Fraction f2) {
    Fraction f3;
    f3.numerator = f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.numerator;
    return reduceFraction(f3);
}

int main() {
    char ans = 'y';

    while (ans == 'y') {
        Fraction f1, f2, f3; char dummychar, op;

        cout << "Enter in the format: 1/2 + 2/5" << endl;
        cin >> f1.numerator >> dummychar >> f1.denominator
            >> op
            >> f2.numerator >> dummychar >> f2.denominator;

        if (f1.denominator == 0 || f2.denominator == 0) {
            cout << "Denominator cannot be zero." << endl;
            continue;
        }

        switch (op) {
            case '+': f3 = fadd(f1, f2); break;
            case '-': f3 = fsub(f1, f2); break;
            case '*': f3 = fmul(f1, f2); break;
            case '/':
                if (f2.numerator == 0) {
                    cout << "Cannot divide by zero." << endl;
                    continue;
                }
                f3 = fdiv(f1, f2);
                break;
            default:
                cout << "Invalid operator." << endl;
                continue;
        }

        cout << "Result: " << f3.numerator << "/" << f3.denominator << endl;

        do {
            cout << "Do you wish to continue (y/n)? "; cin >> ans;
        } while (ans != 'y' && ans != 'n');
    }

    return 0;
}
