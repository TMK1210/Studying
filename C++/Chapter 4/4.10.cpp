/*
Create a structure called sterling that stores money amounts in the old-style British
system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members
could be called pounds, shillings, and pence, all of type int. The program should
ask the user to enter a money amount in new-style decimal pounds (type double), convert 
it to the old-style system, store it in a variable of type struct sterling, and then
display this amount in pounds-shillings-pence format.
*/

#include <iostream>
using namespace std;

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

int main(){
    double new_money; sterling s1;

    cout << "Enter a money amount in new-style decimal pounds: "; cin >> new_money;

    s1.pounds = static_cast<int>(new_money); new_money = (new_money - s1.pounds) * 20;
    s1.shillings = static_cast<int>(new_money); new_money = (new_money - s1.shillings) * 12;
    s1.pence = static_cast<int>(new_money);

    cout << "In pounds-shillings-pence format: £" << s1.pounds << "." << s1.shillings << "." << s1.pence << "." << endl;
}