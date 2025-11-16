/* Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/

#include <iostream>
using namespace std;

struct Employee{
    int employee_num;
    float compensation;
};

int main(){
    Employee e1, e2, e3;

    cout << "Enter employee 1 number: "; cin >> e1.employee_num;
    cout << "Enter employee 1 compensation: "; cin >> e1.compensation;
    cout << "Enter employee 2 number: "; cin >> e2.employee_num;
    cout << "Enter employee 2 compensation: "; cin >> e2.compensation;
    cout << "Enter employee 3 number: "; cin >> e3.employee_num;
    cout << "Enter employee 3 compensation: "; cin >> e3.compensation;

    cout << e1.employee_num << ", " << e1.compensation << endl;
    cout << e2.employee_num << ", " << e2.compensation << endl;
    cout << e3.employee_num << ", " << e3.compensation << endl;

}