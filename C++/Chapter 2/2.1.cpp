/* Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
 enter a number of gallons,and then displays the equivalent in cubic feet. */

#include <iostream>
using namespace std;

int main(){
    double gallons;
    cout << "Enter a number of gallons: ";
    cin >> gallons;
    double cubic_feet = gallons / 7481;
    cout << "The equivalent in cubic feet: " << cubic_feet;
    return 0;
}