/*
Write a program that reads a group of numbers from the user and places them in an array
of type float. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible.
*/

#include <iostream>
using namespace std;

int main(){
    float arr[100]; float *numPtr = arr;
    char choice;
    int number=0;

    do{
        cout << "Enter number: "; cin >> *(numPtr+number++);
        cout << "Continue(y/n)?"; cin >> choice;
    }while (choice != 'n');

    float sum = 0;
    for (int i=0; i<number; i++){
        sum += *(numPtr+i);
    } 
    float avg = sum/number;

    cout << "The average is: " << avg << endl;
    return 0;
}   