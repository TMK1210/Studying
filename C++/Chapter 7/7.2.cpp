/*
Create a class called employee that contains a name (an object of class string) and an
employee number (type long). Include a member function called getdata() to get data
from the user for insertion into the object, and another function called putdata() to
display the data. Assume the name has no embedded blanks.
Write a main() program to exercise this class. It should create an array of type employee,
and then invite the user to input data for up to 100 employees. Finally, it should print out
the data for all the employees.
*/

#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string emp_name;
    long emp_num;
public: 
    void getdata(){
        cout << "Enter employee's name (no space): "; cin >> emp_name;
        cout << "Enter employee's number: "; cin >> emp_num; 
    }
    void putdata(){
        cout << "Name: " << emp_name << " |" << "Number: " << emp_num << endl;
    }
};

int main(){
    const int SIZE = 100;
    Employee employee[SIZE];
    int count = 0; char choice;

    do{
        cout << "Employee " << (count + 1) << ": " << endl;
        employee[count].getdata();
        count++;

        if(count >= SIZE){
            cout << "Reach the limit!" << endl;
            break;
        }

        cout << "Enter 'y' to continue entering: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "-------Employees Data-------" << endl;
    for(int i = 0; i < count; i++){
        cout << "Employee " << (i+1) << ": ";
        employee[i].putdata();
    }

    return 0;
}