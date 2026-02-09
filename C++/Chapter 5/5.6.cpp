/*
Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two
struct time values. Keep the same functionality, but modify the program so that it 
uses two functions. The first, time_to_secs(), takes as its only argument a structure 
of type time, and returns the equivalent in seconds (type long). The second function,
secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
structure of type time.
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int time_to_secs(int hrs, int min, int sec){
    int totalsecs = hrs*3600 + min*60 + sec;
    return totalsecs;
}

Time secs_to_time(int totalsecs){
    Time t;
    
    t.hours = totalsecs / 3600; totalsecs %= 3600;
    t.minutes = totalsecs / 60; totalsecs %= 60;
    t.seconds = totalsecs;

    return t;
}

int main() {
    Time t1, t2, t3; char dummychar;

    cout << "Enter the 1st time value (in the format of 12:59:59): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;

    cout << "Enter the 2nd time value (in the format of 12:59:59): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;

    int time1 = time_to_secs(t1.hours, t1.minutes, t1.seconds);
    int time2 = time_to_secs(t2.hours, t2.minutes, t2.seconds);

    t3 = secs_to_time(time1 + time2);

    cout << "The combined time is: " << setfill('0') << setw(2) << t3.hours << ":" << setfill('0') 
    << setw(2) << t3.minutes << ":" << setfill('0') << setw(2) << t3.seconds << endl;
    return 0;
}