/*
We said earlier that C++ I/O statements don’t automatically understand the data types of
enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers. 
You can overcome this limitation by using switch statements to translate between 
the user’s way of expressing an enumerated variable and the actual values of the enumerated 
variable. For example, imagine an enumerated type with values that indicate an
employee type within an organization:
    enum etype { laborer, secretary, manager, accountant, executive, researcher };
Write a program that first allows the user to specify a type by entering its first letter
(‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.
    Enter employee type (first letter only)
    laborer, secretary, manager,
    accountant, executive, researcher): a
    Employee type is accountant.
You’ll probably need two switch statements: one for input and one for output.
*/

#include <iostream>
using namespace std;

int main(){
    enum etype {laborer, secretary, manager, accountant, executive, researcher};
    char input; etype employee;
    cout << "Enter employee type (first letter only) (laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> input;

    switch(input) {
        case 'a': employee = accountant; break;
        case 'e': employee = executive; break;
        case 'l': employee = laborer; break;
        case 'm': employee = manager; break;
        case 'r': employee = researcher; break;
        case 's': employee = secretary; break;
        default:
            cout << "Please type again!" << endl;
    }
    
    cout << "Employee type is ";
    switch (employee) {
        case accountant: cout << "accountant."; break;
        case executive: cout << "executive."; break;
        case laborer: cout << "laborer."; break;
        case manager: cout << "manager."; break;
        case researcher: cout << "researcher."; break;
        case secretary: cout << "secretary."; break;
    }
    return 0;
}