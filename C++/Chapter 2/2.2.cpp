/* Write a program that generates the following table: 
1990      135 
1991     7290 
1992    11300 
1993    16200 
Use a single coutstatement for all output. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(8) << "1990" << setw(8) << "135" << endl
        << setw(8) << "1991" << setw(8) << "7290" << endl
        << setw(8) << "1992" << setw(8) << "11300" << endl
        << setw(8) << "1993" << setw(8) << "16200" << endl;
    return 0;
}