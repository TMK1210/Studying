/*
Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
    Enter first amount: £5.10.6
    Enter second amount: £3.2.6
    Total is £8.13.0
    Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings.
*/

#include <iostream>
using namespace std;

int main(){
    int pounds_1, shillings_1, pence_1;
    int pounds_2, shillings_2, pence_2;
    int pounds = 1, shillings = 1, pence;
    char dummychar;
    char repeat;

    do {
        cout << "Enter the amount in the format of £'pound'.'shilling'.'pence'. For example: £5.10.6" << endl;
        cout << "Enter first amount: £"; cin >> pounds_1 >> dummychar >> shillings_1 >> dummychar >> pence_1;
        cout << "Enter second amount: £"; cin >> pounds_2 >> dummychar >> shillings_2 >> dummychar >> pence_2;

        pence = pence_1 + pence_2;
        if (pence >= 12) {
            pence = pence - 12;
        }
        else {shillings = 0;}

        shillings = shillings + shillings_1 + shillings_2;
        if (shillings >= 20) {
            shillings = shillings - 20;
        }
        else {pounds = 0;}

        pounds = pounds + pounds_1 + pounds_2;

        cout << "Total is £" << pounds << "." << shillings << "." << pence << "." << endl;

        while (repeat != 'y' || repeat != 'n'){
                cout << "Do you wish to continue (y/n)? "; cin >> repeat;
                if (repeat == 'y') {break;}
                else if (repeat == 'n') {break;}
                else {cout << "Type again!" << endl;}
            }
    } while (repeat != 'n');
    return 0;
}