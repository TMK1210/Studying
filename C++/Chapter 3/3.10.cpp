/*
Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.)
*/

#include <iostream>
using namespace std;

int main(){
    float initial_amount; float interest_rate; float final_amount;
    int year = 0;
    cout << "Enter initial amount: "; cin >> initial_amount;
    cout << "Enter interest rate (percent per year): "; cin >> interest_rate;
    cout << "Enter final amount: "; cin >> final_amount;
    while (initial_amount < final_amount){
        initial_amount = initial_amount + initial_amount * (interest_rate / 100);
        year++;
    }
    cout << "You will have " << final_amount << " dollars after " << year << " years." << endl;
}