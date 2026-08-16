/*
Start with an array of pointers to strings representing the days of the week, as found in
the PTRTOSTR program in this chapter. Provide functions to sort the strings into alphabeti
cal order, using variations of the bsort() and order() functions from the PTRSORT pro
gram in this chapter. Sort the pointers to the strings, not the actual strings.
*/

// ptrtostr.cpp
// an array of pointers to strings
#include <iostream>
#include <cstring>
using namespace std;

const int DAYS = 7;   // number of pointers in array

void bsort(const char** ptr, int n){
    void order(const char**, const char**);
    int j, k;

    for (j=0; j<n-1; j++)
        for(k=j+1; k<n; k++)
            order(ptr+j, ptr+k);
}

void order(const char** p1, const char** p2){
    if(strcmp(*p1, *p2)>0){
        const char* temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}
int main()
{
    // array of pointers to char
    const char* arrptrs[DAYS] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                                   "Thursday", "Friday", "Saturday" };

    bsort(arrptrs, DAYS);                               
    for (int j = 0; j < DAYS; j++)
        cout << arrptrs[j] << endl;

    return 0;
}