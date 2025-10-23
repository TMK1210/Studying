/* Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. Some 
interaction with the program might look like this:
    Enter initial amount: 3000
    Enter number of years: 10
    Enter interest rate (percent per year): 5.5
    At the end of 10 years, you will have 5124.43 dollars.
 
At the end of the first year you have 3000 + (3000 * 0.055), which is 3165. At the end 
of the second year you have 3165 + (3165 * 0.055), which is 3339.08. Do this as many
times as there are years. A for loop makes the calculation easy.
*/

#include <iostream>
using namespace std;

int main(){
    float initial_amount; int year; float interest_rate;
    cout << "Enter initial amount: "; cin >> initial_amount;
    cout << "Enter number of years: "; cin >> year;
    cout << "Enter interest rate (percent per year): "; cin >> interest_rate;
    for (int i = 1; i < (year + 1); i++){
        initial_amount = initial_amount + initial_amount * (interest_rate / 100.0);
    }

    cout << "At the end of " << year << " years, you will have " << initial_amount << " dollars." << endl;
    return 0;
}