/*Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
floating-point numbers. Interaction with the program might look like this:

Type 1 to convert Fahrenheit to Celsius,
     2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
*/

#include <iostream>
using namespace std;

int main() {
    int ans; float Fah_deg, Cel_deg;

    while (true) {
        cout << "Type 1 to convert Fahrenheit to Celsius\n"
             << "Type 2 to convert Celsius to Fahrenheit: ";
        cin >> ans;

        if (ans == 1) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> Fah_deg;
            Cel_deg = (Fah_deg - 32) * 5/9;
            cout << "In Celsius that's: " << Cel_deg << endl;
            break;  
        } 
        else if (ans == 2) {
            cout << "Enter temperature in Celsius: ";
            cin >> Cel_deg;
            Fah_deg = Cel_deg * 9/5 + 32;
            cout << "In Fahrenheit that's: " << Fah_deg << endl;
            break; 
        } 
        else {
            cout << "Please enter 1 or 2 only.\n";
        }
    }
    return 0;
}
