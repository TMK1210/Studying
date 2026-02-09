/* On a certain day the British pound was equivalent to $1.487 U.S., 
the French franc was $0.172, the German deutschemark was $0.584, and 
the Japanese yen was $0.00955. Write a program that allows the user 
to enter an amount in dollars, and then displays this value converted 
to these four other monetary units.
*/

#include <iostream>
using namespace std;

int main(){
    long double US_dollars;
    cout << "Enter an amount in dollars: "; cin >> US_dollars;
    long double BRI_pound = 1.487 * US_dollars;
    long double FRA_franc = 0.172 * US_dollars;
    long double GER_deutschemark = 0.584 * US_dollars;
    long double JAP_yen = 0.00955 * US_dollars;
    cout << "Value: \n" << "British pound: " << BRI_pound << "\nFrench franc: " << FRA_franc 
    << "\nGerman deutschemark: " << GER_deutschemark << "\nJapanese yen: " << JAP_yen << endl;
    return 0;
}