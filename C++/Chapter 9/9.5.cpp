/*
 Derive a class called employee2 from the employee class in the EMPLOY program in this
chapter. This new class should add a type double data item called compensation, and
also an enum type called period to indicate whether the employee is paid hourly, weekly,
or monthly. For simplicity you can change the manager, scientist, and laborer classes
so they are derived from employee2 instead of employee. However, note that in many
circumstances it might be more in the spirit of OOP to create a separate base class called
compensation and three new classes manager2, scientist2, and laborer2, and use 
multiple inheritance to derive these three classes from the original manager, scientist,
and laborer classes and from compensation. This way none of the original classes
needs to be modified.
*/

#include <iostream>
using namespace std;
const int LEN = 80; 

class employee{
private:
    char name[LEN];              //employee name
    unsigned long number;        //employee number
public:
    void getdata(){
        cout << "\n Enter last name: "; cin >> name;
        cout << "   Enter number: ";      cin >> number;
    }
    void putdata() const{
        cout << "\n Name: " << name;
        cout << "   Number: " << number;
    }
};

class employee2 : public employee{
private:
    double compensation;
    enum Period { hourly, weekly, monthly };
    Period period;
public:
    void getdata(){
        employee::getdata();
        cout << "  Enter compensation amount: "; cin >> compensation;

        int choice;
        do {
            cout << "  Enter pay period (0=hourly, 1=weekly, 2=monthly): ";
            cin >> choice;
        } while (choice < hourly || choice > monthly);
        period = static_cast<Period>(choice); //convert int value to enum value in Period
    }
    void putdata() const{
        employee::putdata();
        cout << "\n  Compensation: " << compensation;
        cout << "\n Pay period: ";
        switch (period){
            case hourly: cout << "hourly"; break;
            case weekly: cout << "weekly"; break;
            case monthly: cout << "monthly"; break;
        }
    }
};

class manager : public employee2{
private:
    char title[LEN];             //”vice-president” etc.
    double dues;                 //golf club dues
public:
    void getdata(){
        employee2::getdata();
        cout << "  Enter title: ";          cin >> title;
        cout << "  Enter golf club dues: "; cin >> dues;
    }
    void putdata() const{
        employee2::putdata();
        cout << "\n   Title: " << title;
        cout << "\n   Golf club dues: " << dues;
    }
};

class scientist : public employee2{
private:
    int pubs;
public:
    void getdata(){
        employee2::getdata();
        cout << "  Enter number of pubs: "; cin >> pubs;
    }
    void putdata() const{
        employee2::putdata();
        cout << "\n   Number of publications: " << pubs;
    }
};

class laborer : public employee2{

};


int main(){
    manager m1, m2;
    scientist s1;
    laborer l1;
    cout << endl;           //get data for several employees
    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for manager 2";
    m2.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();

    //display data for several employees
    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on manager 2";
    m2.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    return 0;
}





