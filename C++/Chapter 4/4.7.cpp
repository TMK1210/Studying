/*
Add a variable of type enum etype (see Exercise 6), and another variable of type
struct date (see Exercise 5) to the employee class of Exercise 4. Organize the
resulting pro gram so that the user enters four items of information for each of
three employees: an employee number, the employee’s compensation, the employee
type, and the date of first employment. The program should store this
information in three variables of type employee, and then display their
contents.
*/

#include <iostream>
using namespace std;

struct Date {
  int day;
  int month;
  int year;
};

struct Employee {
  int employee_num;
  float compensation;
  string Date;
  Date first_day;
};

int main() {
  enum etype { laborer, secretary, manager, accountant, executive, researcher };
  Employee e1, e2, e3;
  char dummychar;

  cout << "Enter employee number, the employee’s compensation, the employee "
          "type, and the date of first employment, separate by ','"
       << endl;
  cout << "Enter employee 1 number: ";
  cin >> e1.employee_num;
  cout << "Enter employee 1 compensation: ";
  cin >> e1.compensation;
  cout << "Enter employee type (first letter only) (laborer, secretary, "
          "manager, accountant, executive, researcher): ";

  cout << e1.employee_num << ", " << e1.compensation << endl;
  cout << e2.employee_num << ", " << e2.compensation << endl;
  cout << e3.employee_num << ", " << e3.compensation << endl;
}