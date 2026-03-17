/*
Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the 
object; another should report the serial number and position. Write a main() program 
that creates three ships, asks the user to input the position of each, and then displays 
each ship’s number and position.
*/

#include <iostream>
using namespace std;
class Ship {
private:
    int SerialNumber;
    static int count;
    int lat_degree;
    float lat_minute;
    char lat_direction;
    int long_degree;
    float long_minute;
    char long_direction;
public:
    Ship(){
        count++;
        SerialNumber = count;
    }
    void ShipPosition(){
        cout << "--Enter latitude of the ship--" << endl;
        cout << "Enter degree: "; cin >> lat_degree;
        cout << "Enter minute: "; cin >> lat_minute;
        do{
            cout << "Enter direction (N/S): "; cin >> lat_direction;
        } while (lat_direction != 'N' && lat_direction != 'S');

        cout << "--Enter longitude of the ship--" << endl;
        cout << "Enter degree: "; cin >> long_degree;
        cout << "Enter minute: "; cin >> long_minute;
        do{
            cout << "Enter direction (E/W): "; cin >> long_direction;
        } while (long_direction != 'E' && long_direction != 'W');
    }
    void ShipReport(){
        cout << "Ship #" << SerialNumber << endl;
        cout << "Position: " << lat_degree << "°" << lat_minute << "' " << 
        lat_direction << ", " << long_degree << "°" << long_minute << "' " 
        << long_direction << endl;
    }
};
int Ship:: count = 0;
int main(){
    Ship s1, s2, s3;
    s1.ShipPosition(); s1.ShipReport();
    s2.ShipPosition(); s2.ShipReport();
    s3.ShipPosition(); s3.ShipReport();
    return 0;
}