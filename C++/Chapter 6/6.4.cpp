/*
Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.
*/

#include <iostream>
using namespace std;

class Employee{
    private:
        int employee_number;
        float employee_compensation;
    public:
        void Enter_data(){
            cout << "Enter employee number: "; cin >> employee_number;
            cout << "Enter employee compensation: "; cin >> employee_compensation;
        }
        void Display_data(){
            cout << "Number: " << employee_number << "; Compensation: " << employee_compensation << endl;
        }
};

int main(){
    Employee e1, e2, e3;
    cout << "__Employee 1__" << endl;
    e1.Enter_data();
    cout << "__Employee 2__" << endl;
    e2.Enter_data(); 
    cout << "__Employee 3__" << endl;
    e3.Enter_data(); 

    cout << "Employee 1: "; e1.Display_data();
    cout << "Employee 2: "; e2.Display_data();
    cout << "Employee 3: "; e3.Display_data();
    return 0;
}