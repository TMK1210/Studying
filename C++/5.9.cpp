/*
Repeat Exercise 8, but instead of two int variables, have the swap() function inter
change two struct time values (see Exercise 6).
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void swap(Time t1, Time t2){
    Time t3;
    t3 = t1; t1 = t2; t2 = t3;
    cout << "The 1st time value after swapping is: " << setfill('0') << setw(2) << t1.hours << ":" << setfill('0') 
    << setw(2) << t1.minutes << ":" << setfill('0') << setw(2) << t1.seconds << endl;
    cout << "The 2nd time value after swapping is: " << setfill('0') << setw(2) << t2.hours << ":" << setfill('0') 
    << setw(2) << t2.minutes << ":" << setfill('0') << setw(2) << t2.seconds << endl;
}

int main(){
    char dummychar; Time t1, t2;
    cout << "Enter the 1st time value (in the format of 12:59:59): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;

    cout << "Enter the 2nd time value (in the format of 12:59:59): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;
    
    swap(t1, t2);

    return 0;
}