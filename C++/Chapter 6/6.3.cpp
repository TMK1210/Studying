/*
Create a class called time that has separate int member data for hours, minutes, and 
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
Amain() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class Time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time(): hours(0), minutes(0), seconds(0) { }
        Time(int h, int m, int s): hours(h), minutes(m), seconds(s) { }
        void Display_time() const{
            cout << "The time: " << setfill ('0') << setw(2) << hours << ":"
            << setfill ('0') << setw(2) << minutes << ":"
            << setfill ('0') << setw(2) << seconds << endl;
        }
        void Add_time(const Time&t1, const Time&t2){
            seconds = t1.seconds + t2.seconds;
            minutes = t1.minutes + t2.minutes + seconds/60;
            hours = t1.hours + t2.hours + minutes/60;

            seconds %= 60; minutes %= 60;
        }
};

int main(){
    const Time t1(1, 20, 30);
    const Time t2(2, 40, 55);
    Time t3;

    t3.Add_time(t1, t2);
    t3.Display_time();
    return 0;
}