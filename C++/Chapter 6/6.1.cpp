/*
Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to dis
play it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result.
*/

#include <iostream>
using namespace std;

class Int {
    private:
        int integer;
    public:
        void initialize_0(){
            integer = 0;
        }
        void initialize_int(int i){
            integer = i;
        }
        void Display(){
            cout << integer;
        }
        Int Add(Int i){
            Int result;
            result.integer = integer + i.integer;
            return result;
        }

};

int main(){
    Int i1, i2, i3;
    i1.initialize_0();
    i2.initialize_int(1);
    i3.initialize_int(2);
    
    i3 = i1.Add(i2);
    cout << "Result: "; i3.Display(); cout << endl;

    return 0;
}