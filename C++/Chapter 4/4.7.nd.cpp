/*
Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting pro
gram so that the user enters four items of information for each of three employees: an
employee number, the employee’s compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents.
*/

#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Employee{
    int employee_num;
    float compensation;
    char type;
    Date first_day;
};

int main(){
    enum etype {laborer, secretary, manager, accountant, executive, researcher};
    Employee e1, e2, e3; char dummychar; etype employee_type;


    cout << "Enter employee number, the employee’s compensation, the employee type, and the date of first employment, separate by ','" << endl;
    cout << "Enter employee 1 number: "; cin >> e1.employee_num;
    cout << "Enter employee 1 compensation: "; cin >> e1.compensation;
    cout << "Enter employee type (first letter only) (laborer, secretary, manager, accountant, executive, researcher): "; cin >> e1.type;
    cout << "Enter employee 1 date of first employment: "; 


    switch(e1.type) {
        case 'a': employee_type = accountant; break;
        case 'e': employee_type = executive; break;
        case 'l': employee_type = laborer; break;
        case 'm': employee_type = manager; break;
        case 'r': employee_type = researcher; break;
        case 's': employee_type = secretary; break;
        default:
            cout << "Please type again!" << endl;
    }


}