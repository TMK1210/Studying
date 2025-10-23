/* Suppose you give a dinner party for six guests, but your table seats only four. In how
many ways can four of the six guests arrange themselves at the table? Any of the six guests 
can sit in the first chair. Any of the remaining five can sit in the second chair. Any of 
the remaining four can sit in the third chair, and any of the remaining three can sit in
the fourth chair. (The last two will have to stand.) So the number of possible arrangements 
of six guests in four chairs is 6*5*4*3, which is 360. Write a program that calculates the 
number of possible arrangements for any number of guests and any number of chairs. 
(Assume there will never be fewer guests than chairs.) Don’t let this get too complicated. 
A simple for loop should do it
*/

#include <iostream>
using namespace std;

int main(){
    int ini_guest; int ini_chair; int pos_arrangement = 1;
    cout << "Enter the number of guests: "; cin >> ini_guest;
    cout << "Enter the number of chairs: "; cin >> ini_chair;

    if (ini_guest < ini_chair){
        cout << "Please type again the number of guests and chairs.";
        return 1;
    }

    else {
    int guest = ini_guest;
    for (int i = 1; i < (ini_chair + 1); i++){
        pos_arrangement *= guest;
        guest--;
    }
    cout << "The number of possible arrangements of " << ini_guest << " guest in " << ini_chair << " chairs is " << pos_arrangement << endl;
    return 0;
    }
}