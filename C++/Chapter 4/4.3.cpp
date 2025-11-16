/*
Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Volume{
    Distance length;
    Distance width;
    Distance height;
};

int main(){
    Volume room;

    room.length.feet = 3;
    room.length.inches = 3.0;
    room.width.feet = 4;
    room.width.inches = 4.0;
    room.height.feet = 5;
    room.height.inches = 5.0;

    float l = room.length.feet + room.length.inches / 12;
    float w = room.width.feet + room.width.inches / 12;
    float h = room.height.feet + room.height.inches / 12;
    
    cout << "Room volume is " << l * w * h << " cube feet.\n";
    return 0;
}
