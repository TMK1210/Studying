/*
Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular 
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities.
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

int main(){
    book b1; tape t1;
    b1.getdata();
    t1.getdata();
    cout << "The data: " << endl;
    b1.putdata();
    t1.putdata();
    return 0;
}