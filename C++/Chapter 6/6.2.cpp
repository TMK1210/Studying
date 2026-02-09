/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit
*/

#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth{
    private:
        unsigned int total_car_numbers;
        double total_money_collected;
    public:
        tollBooth(): total_car_numbers(0), total_money_collected(0.0)
            {   }
        void payingCar(){
            total_car_numbers ++;
            total_money_collected += 0.5;
        }
        void nopayCar(){
            total_car_numbers ++;
        }
        void display(){
            cout << "Total cars: " << total_car_numbers << endl;
            cout << "Total cash: " << total_money_collected << endl;
        }
};

int main(){
    char key; tollBooth tb;
    cout << "Enter 'y' to count a paying car." << endl;
    cout << "Enter 'n' to count a nonpaying car." << endl;
    cout << "Enter ESC to print out the total cars, total cash, then exit." << endl;
    
    while (true){
        key = _getch();

        if (key == 'y'){
            tb.payingCar();
            cout << "Pressed y" << endl;
        }
        else if (key == 'n'){
            tb.nopayCar();
            cout << "Pressed n" << endl;
        }
        else if (key == 27){ //ASCII for ESC
            tb.display();
            break;
        } 
    }
    
    return 0;
}