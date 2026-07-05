/*
 A matrix is a two-dimensional array. Create a class matrix that provides the same safety
feature as the array class in Exercise 7; that is, it checks to be sure no array index is out
of bounds. Make the member data in the matrix class a 10-by-10 array. A constructor
should allow the programmer to specify the actual dimensions of the matrix (provided
they’re less than 10 by 10). The member functions that access data in the matrix will now
need two index numbers: one for each dimension of the array. Here’s what a fragment of
a main() program that operates on such a class might look like:
matrix m1(3, 4);           // define a matrix object
int temp = 12345;          // define an int value
m1.putel(7, 4, temp);      // insert value of temp into matrix at 7,4
temp = m1.getel(7, 4);     // obtain value from matrix at 7,4
*/

#include <iostream>
using namespace std;

const int LIMIT = 10;

class matrix {
private:
    int arr[LIMIT][LIMIT]; 
    int rows;              
    int cols;              
public:
    matrix(int r, int c) {
        if (r > 0 && r <= LIMIT && c > 0 && c <= LIMIT) {
            rows = r;
            cols = c;
        } else {
            cout << "The size has to be maximum at 10x10." << endl;
            rows = LIMIT;
            cols = LIMIT;
        }
    }

    void putel(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            arr[r][c] = value;
        } 
        else {
            cout << "The (" << r << ", " << c << ") is out of the matrix!" << endl;
        }
    }

    int getel(int r, int c) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return arr[r][c];
        } 
        else {
            cout << "The (" << r << ", " << c << ") is out of the matrix!" << endl;
            return -1;
        }
    }
};

int main() {
    matrix m1(3, 4); 
    int temp = 12345;

    m1.putel(7, 4, temp); 
    temp = m1.getel(7, 4); 

    m1.putel(2, 3, 999); 
    cout << "The value at (2, 3) is: " << m1.getel(2, 3) << endl;

    int r, c, value;
    cout << "Enter the size of matrix: " << endl;
    cout << "Enter the row of the matrix: ", cin >> r;
    cout << "Enter the column of the matrix: ", cin >> c;
    matrix m2(r, c);

    cout << "Enter the value of matrix: " << endl;
    cout << "Enter the row of the matrix: ", cin >> r;
    cout << "Enter the column of the matrix: ", cin >> c;
    cout << "Enter the value: ", cin >> value;
    m2.putel(r, c, value);

    int result = m2.getel(r, c);
    if (result != -1) {
        cout << "The value at (" << r << ", " << c << ") is " << result << endl;
    }

    return 0;
}