/*
Suppose you have a main() with three local arrays, all the same size and type (say
float). The first two are already initialized to values. Write a function called 
addarrays() that accepts the addresses of the three arrays as arguments; adds the con
tents of the first two arrays together, element by element; and places the results in the
third array before returning. A fourth argument to this function can carry the size of the
arrays. Use pointer notation throughout; the only place you need brackets is in defining
the arrays.
*/

#include <iostream>
using namespace std;
void addarr (float* arr1, float* arr2, float* arr3, int size){
    for (int i=0; i<size; i++){
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
    }
};

int main(){
    const int SIZE = 3;
    float arr1[SIZE] = {1.2, 2.3, 4.5};
    float arr2[SIZE] = {4.3, 2.25, 9.3};
    float arr3[SIZE] = {};

    addarr(arr1, arr2, arr3, SIZE);

    for (int i=0; i<SIZE; i++){
        cout << arr1[i] << " + " << arr2[i] << " = " << arr3[i] << endl;
    }
    

    for (int i=0; i<SIZE; i++){
        cout << "arr3[" << i << "] = " << arr3[i] << endl;
    }
    return 0;
}