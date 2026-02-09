/*
Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.
*/

#include <iostream>
using namespace std;

void zeroSmaller(int a, int b){
    if (a > b){b = 0;}
    else if (a < b){a = 0;}
    else{cout << "The numbers are equal!" << endl;}

    cout << "The 1st number: " << a << endl;
    cout << "The 2nd number: " << b << endl;
}

int main(){
    int a, b;
    cout << "Enter the 1st number: "; cin >> a;
    cout << "Enter the 2rd number: "; cin >> b;

    zeroSmaller(a, b);

    return 0;
}