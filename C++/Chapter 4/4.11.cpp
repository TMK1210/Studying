/*
Use the time structure from Exercise 9, and write a program that obtains two time values 
from the user in 12:59:59 format, stores them in struct time variables, converts
each one to seconds (type int), adds these quantities, converts the result back to hours
minutes-seconds, stores the result in a time structure, and finally displays the result in
12:59:59 format.
*/

#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1, t2, t3; char dummychar;

    cout << "Enter the 1st time value (in the format of 12:59:59): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;

    cout << "Enter the 2nd time value (in the format of 12:59:59): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;

    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds + t2.hours*3600 + t2.minutes*60 + t2.seconds;
    t3.hours = totalsecs / 3600; totalsecs %= 3600;
    t3.minutes = totalsecs / 60; totalsecs %= 60;
    t3.seconds = totalsecs;


    cout << "The combined time is: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds << endl;
    return 0;
}