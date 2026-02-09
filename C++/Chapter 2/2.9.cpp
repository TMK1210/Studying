/*
If you have two fractions, a/b and c/d, their sum can be obtained from the formula
a      c      a*d + b*c--- + ---  =  ----------
b      d         b*d
 For example, 1/4 plus 2/3 is
 1     2       1*3 + 4*2       3 + 8       11--- + ---  =  -----------  =  -------  =  ---
4     3          4*3            12        12
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator (>>) can be chained to
read in more than one quantity at once:
cin >> a >> dummychar >> b;*/

#include <iostream>
using namespace std;

int main(){
    
    while (true) {
        int a1; int a2; int b1; int b2; char dummychar; int upper; int lower; int count;
        cout << "Enter the first fraction: "; cin >> a1 >> dummychar >> a2;
        cout << "Enter the second fraction: "; cin >> b1 >> dummychar >> b2;
    
        if (a2 == 0 || b2 == 0){
            cout << "Please type again!\n";
            continue;
        }
     
        upper = a1*b2 + a2*b1;
        lower = a2*b2;

        if (upper > lower){
            count = upper;
        }
        else{
            count = lower;
        }

        for (int i = 2; i <= count / 2; i++) {
            while (upper % i == 0 && lower % i == 0) {
                upper /= i;
                lower /= i;
                }
            }

            cout << "Sum: " << upper << "/" << lower << endl;
    }
    return 0;
}