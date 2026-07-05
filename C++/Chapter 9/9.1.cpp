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
    }   
    void putdata() const{
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    } 
};

class book : protected publication{
private:
    int page_count;
public:
    void getdata(){
        publication::getdata();
        cout << "Enter page count: "; cin >> page_count;
    }   
    void putdata() const{
        publication::putdata();
        cout << "Pages: " << page_count << endl;
    } 
};

class tape: protected publication{
private:
    float play_time_minute;
public:
    void getdata(){
        cout << "Enter play time minutes: "; cin >> play_time_minute;
    }   
    void putdata() const{

        cout << "Playing time: " << play_time_minute << endl;
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