/* You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying 
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point 
number representing degrees Celsius, and then displays the corresponding degrees Fahrenheit. */

 #include <iostream>
 using namespace std;

int main() {
    float Cel_deg;
    float Fah_deg;
    cout << "Enter a number of Celsius degrees: ";
    cin >> Cel_deg;
    Fah_deg = Cel_deg * 9/5 + 32;
    cout << "In Fahrenheit degrees: " << Fah_deg << endl;
    return 0;
}