/*
Assume that the publisher in Exercises 1 and 3 decides to add a third way to distribute
books: on computer disk, for those who like to do their reading on their laptop. Add a
disk class that, like book and tape, is derived from publication. The disk class should
incorporate the same member functions as the other classes. The data item unique to this
class is the disk type: either CD or DVD. You can use an enum type to store this item.
The user could select the appropriate type by typing c or d.
*/

#include <iostream>
#include <string>
using namespace std;

class publication{
protected:
    string title;
    float price;
public:
    void getdata(){
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: "; cin >> price;
        cin.ignore();
    }   
    void putdata() const{
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    } 
};

class sales{
protected:
    float sales_data[3];
public:
    void getdata(){
        cout << "Enter sales for the last 3 months: " << endl;
        for (int i = 0; i < 3; i++){
            cout << " Month " << (i+1) << ": ";
            cin >> sales_data[i];
        }
        cin.ignore();
    }
    void putdata() const{
        cout << "Sales figures (last 3 months): " << endl;
        for (int i = 0; i < 3; i++){
            cout << " Month " << (i+1) << ": $" << sales_data[i] << endl;
        }
    }
};

class book : public publication, public sales{
private:
    int page_count;
public:
    void getdata(){
        publication::getdata();
        cout << "Enter page count: "; cin >> page_count;
        cin.ignore();
        sales::getdata();
    }   
    void putdata() const{
        publication::putdata();
        cout << "Pages: " << page_count << endl;
        sales::putdata();
    } 
};

class tape: public publication, public sales{
private:
    float play_time_minute;
public:
    void getdata(){
        publication::getdata();
        cout << "Enter play time minutes: "; cin >> play_time_minute;
        cin.ignore();
        sales::getdata();
    }   
    void putdata() const{
        publication::putdata();
        cout << "Playing time: " << play_time_minute << endl;
        sales::putdata();
    } 
};

class disk: public publication, public sales{
private:
    enum DiskType {CD, DVD};
    DiskType disk_type;
public:
    void getdata(){
        publication::getdata();
        char choice;
        cout << "Enter disk type (c = CD, d = DVD): "; cin >> choice;

        while (choice != 'c' && choice != 'd'){
            cout << "Invalid choice. Enter c or d: ";
            cin >> choice;
        }

        if (choice == 'c') {
            disk_type = CD;
        }
        else{
            disk_type = DVD;
        }

        cin.ignore();
        sales::getdata();
    }   
    void putdata() const{
        publication::putdata();
        cout << "Disk type: ";
        if (disk_type == CD){cout << "CD" << endl;}
        else {cout << "DVD" << endl;}
        sales::putdata();
    } 
};

int main(){
    book b1; tape t1; disk d1;
    b1.getdata();
    t1.getdata();
    d1.getdata();
    cout << "The data: " << endl;
    b1.putdata();
    t1.putdata();
    d1.putdata();
    return 0;
}