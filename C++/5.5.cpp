/*
Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.
*/

#include <iostream>
using namespace std;

void hms_to_secs(int hrs, int min, int sec){
    long totalsec = hrs * 3600 + min * 60 + sec;
    cout << "The total second of the time is: " << totalsec;
}

int main (){
    int hrs, min, sec; char dummychar;
    cout << "Enter the time (format 12:59:59)" << endl;
    cout << "Enter the time: "; cin >> hrs >> dummychar >> min >> dummychar >> sec;
    hms_to_secs(hrs, min, sec);

    return 0;
}