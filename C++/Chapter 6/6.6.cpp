/*
Extend the employee class of Exercise 4 to include a date class (see Exercise 5) and an
etype enum (see Exercise 6 in Chapter 4). An object of the date class should be used to
hold the date of first employment; that is, the date when the employee was hired. The
etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
These two items will be private member data in the employee definition, just like the
employee number and salary. You’ll need to extend the getemploy() and putemploy()
functions to obtain this new information from the user and display it. These functions will
probably need switch statements to handle the etype variable. Write a main() program that
allows the user to enter data for three employee variables and then displays this data.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Date {
private:
    int month, day, year;
public:
    void getdate(){
        char slash;
        cout << "Enter a date MM/DD/YYYY): ";
        cin >> month >> slash >> day >> slash >> year;
    }
    void showdate(){
        cout << setfill('0') << setw(2) << month << "/"
        << setw(2) << day << "/" << setw(2) << year << endl;
    }
};      

class Employee{
private:
    int employee_number;
    float employee_compensation;
    Date first_day;
    enum etype {laborer, secretary, manager, accountant, executive, researcher};
    etype employee_type;
public:
    void get_employ(){
        char type;
        cout << "Enter employee number: "; cin >> employee_number;
        cout << "Enter employee compensation: "; cin >> employee_compensation;
        cout << "Enter employee first day working: "; first_day.getdate();
        cout << "Enter employee type (l, s, m, a, e, r): "; 
            cin >> type;
            switch (type) {
                case 'a': employee_type = accountant; break;
                case 'e': employee_type = executive; break;
                case 'l': employee_type = laborer; break;
                case 'm': employee_type = manager; break;
                case 'r': employee_type = researcher; break;
                case 's': employee_type = secretary; break;
                default:
                    cout << "Invalid! Auto change to researcher!" << endl;
                    employee_type = researcher;
            }
        }
    void put_employ(){
        cout << "Number: " << employee_number << " ; " << "Compensation: " << employee_compensation 
        << " ; " << "First day working: "; first_day.showdate();
        " ; Type: ";
        switch (employee_type) {
            case accountant: cout << "accountant."; break;
            case executive: cout << "executive."; break;
            case laborer: cout << "laborer."; break;
            case manager: cout << "manager."; break;
            case researcher: cout << "researcher."; break;                    
            case secretary: cout << "secretary."; break;
        }
        cout << endl; 
    }
};

int main(){
    Employee e1, e2, e3; 

    e1.get_employ();
    e2.get_employ();
    e3.get_employ();

    cout << "-----Employee Information-----" << endl;

    e1.put_employ();
    e2.put_employ();
    e3.put_employ();

    return 0;
}
