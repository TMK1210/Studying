/*
Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
Member data is the fraction’s numerator and denominator. Member functions should
accept input from the user in the form 3/5, and output the fraction’s value in the same
format. Another member function should add two fraction values. Write a main() program
that allows the user to repeatedly input two fractions and then displays their sum. After
each operation, ask whether the user wants to continue.
*/

#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        void Enter_Function(){
            char slash;
            cout << "Enter the fraction (in the format of nominator/denominator): "; 
            cin >> numerator >> slash >> denominator;
            
            while (denominator == 0){
                cout << "Denominator cannot be 0! Type again!";
                cin >> numerator >> slash >> denominator;
            }
        }

        void Display(){
            cout << numerator << "/" << denominator;
        }

        Fraction Add(Fraction f){
            Fraction f3;
            f3.numerator = numerator*f.denominator + denominator*f.numerator;
            f3.denominator = denominator*f.denominator;
            return Reduce_Fraction(f3);
        }

        Fraction Reduce_Fraction(Fraction f) {
            int a = abs(f.numerator);
            int b = abs(f.denominator);

            while (b != 0) {  //find GCD
                int temp = b;
                b = a % b;
                a = temp;
            }

            f.numerator /= a;
            f.denominator /= a;
            return f;
        }
};

int main(){
    char answer;

    do{
        Fraction f1, f2, f3;

        f1.Enter_Function(); f2.Enter_Function();
        f3 = f1.Add(f2);
        cout << "Sum: "; f3.Display(); cout << endl;

        cout << "Continue? (y/n): "; cin >> answer;

    } while (answer == 'y');

    return 0;
}