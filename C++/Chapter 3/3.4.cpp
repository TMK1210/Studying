/*
Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or 
dividing the two numbers. Use a switch statement to select the operation. Finally, 
display the result.
When it finishes the calculation, the program should ask whether the user wants to do
another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
program might look like this:
    Enter first number, operator, second number: 10 / 3
    Answer = 3.333333
    Do another (y/n)? y
    Enter first number, operator, second number: 12 + 100
    Answer = 112
    Do another (y/n)? n
*/

#include <iostream>
using namespace std;

int main(){
    int n = 1;
    while (n != 0) {
        float a; float b; char ope; float ans; char repeat;
        cout << "Enter first number, operator, second number: "; 
        cin >> a >> ope >> b;

        switch (ope){
            case '+': ans = a + b; break;
            case '-': ans = a - b; break;
            case '*': ans = a * b; break;
            case '/': 
                if (b == 0) { cout << "Cannot devide by zero! Type again!\n"; continue;}
                ans = a / b; break;
            default: cout << "Invalid, please type again!"; break;
        }
        cout << "Answer: " << ans << endl;

        while (repeat != 'y' || repeat != 'n'){
            cout << "Do another (y/n)? "; cin >> repeat;
            if (repeat == 'y') {
                n = 1;
                break;
            }
            else if (repeat == 'n') {
                n = 0;
                break;
            }
            else {
                cout << "Type again!" << endl;
            }
        }
    }
    return 0;
}