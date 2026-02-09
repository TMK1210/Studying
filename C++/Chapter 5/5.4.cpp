/*
Write a function that takes two Distance values as arguments and returns the larger one.
Include a main() program that accepts two Distance values from the user, compares
them, and displays the larger. (See the RETSTRC program for hints.)
*/

#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches; /* 1 feet = 12 inches*/
};

void compareDistance (Distance d1, Distance d2){
    float sum1, sum2;

    if (d1.inches >= 12.0) {d1.inches -= 12.0; d1.feet += 1;}
    sum1 = d1.feet + d1.inches/12;

    if (d2.inches >= 12.0) {d2.inches -= 12.0; d2.feet += 1;}
    sum2 = d2.feet + d2.inches/12;

    if (sum1 > sum2){
        cout << "Sum of the 1st distance: " << sum1;
    }
    else if (sum1 < sum2){
        cout << "Sum of the 2nd distance: " << sum2;
    }
    else {
        cout << "The 2 distances are equal.";
    }
}
int main(){
    Distance d1, d2;

    cout << "Enter feet of 1st distance: "; cin >> d1.feet;
    cout << "Enter inches of 1st distance: "; cin >> d1.inches;

    cout << "Enter feet of 2nd distance: "; cin >> d2.feet;
    cout << "Enter inches of 2nd distance: "; cin >> d2.inches;

    compareDistance(d1, d2);

    return 0;
}