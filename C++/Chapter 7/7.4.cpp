/*
Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called maxint() that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number. 
*/
#include <iostream>
using namespace std;

int maxint(int numbers[], int size){
    int max_index = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] > numbers[max_index]){
            max_index = i;
        }
    }
    return max_index;
}
int main(){
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter integers (maximum 10): \n";
    for(int j = 0; j < SIZE; j++){
        cin >> numbers[j];
    }
    
    int index = maxint(numbers, SIZE);
    cout << "Largest element: " << numbers[index];
    cout << "| Index: " << index;
    return 0;
}
