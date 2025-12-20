/*
Write a function called swap() that interchanges two int values passed to it by the call
ing program. (Note that this function swaps the values of the variables in the calling pro
gram, not those in the function.) You’ll need to decide how to pass the arguments. Create
a main() program to exercise the function.
*/

#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp = 0;
    temp = a; a = b; b = temp;
    cout << "The 1st int value after swapping: " << a << endl; 
    cout << "The 2nd int value after swapping: " << b << endl; 
}

int main(){
    int a, b;
    cout << "Enter the 1st int value: "; cin >> a;
    cout << "Enter the 2nd int value: "; cin >> b;
    
    swap(a, b);

    return 0;
}