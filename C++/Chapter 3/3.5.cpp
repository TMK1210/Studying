/*Use for loops to construct a program that displays a pyramid of Xs on the screen. 
The pyramid should look like this
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.
*/

#include <iostream>
using namespace std;

int main(){
    int height = 20;

    for (int line = 1; line <= height; line++){
        for (int space = 1; space <= height - line; space++){
            cout << " ";
        }

        for (int x = 1; x <= 2* line - 1; x++){
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}