/*
Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types.
*/

#include <iostream>
using namespace std;

double power(double d, int p = 2) {
    double result = 1;
    for (int i = 1; i <= p; i++) {
        result = result * d;
    }
    return result;
}

char power(char c, int p = 2) {
    char result = 1;
    for (int i = 1; i <= p; i++) {
        result = result * c;
    }
    return result;
}

int power(int i, int p = 2) {
    int result = 1;
    for (int i = 1; i <= p; i++) {
        result = result * i;
    }
    return result;
}

long power(long l, int p = 2) {
    long result = 1;
    for (int i = 1; i <= p; i++) {
        result = result * l;
    }
    return result;
}

float power(float f, int p = 2) {
    float result = 1.0;
    for (int i = 1; i <= p; i++) {
        result = result * f;
    }
    return result;
}

int main() {
    int p; char type;
    cout << "Enter the type of value you want to input." << endl;
    cout << "d for double, i for int, c for char, l for long, f for float:"; cin >> type;

    switch (type)
    {
    case 'd':
        double d;
        cout << "Enter n: "; cin >> d;
        cout << "Enter p: "; cin >> p;
        cout << "The result: " << power(d, p) << endl;
        break;
    case 'i':
        int i;
        cout << "Enter n: "; cin >> i;
        cout << "Enter p: "; cin >> p;
        cout << "The result: " << power(i, p) << endl;
        break;
    case 'c':
        char c;
        cout << "Enter n: "; cin >> c;
        cout << "Enter p: "; cin >> p;
        cout << "The result: " << (int)power(c, p) << endl;
        break;
    case 'l':
        long l;
        cout << "Enter n: "; cin >> l;
        cout << "Enter p: "; cin >> p;
        cout << "The result: " << power(l, p) << endl;
        break;
    case 'f':
        float f;
        cout << "Enter n: "; cin >> f;
        cout << "Enter p: "; cin >> p;
        cout << "The result: " << power(f, p) << endl;
        break;
    default:
        cout << "Invalid! Please type again!";
        break;
    }
    return 0;
}