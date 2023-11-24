#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){

    int num1,num2;

    cout << "Enter Your Two Number : ";

    cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    float sum = num1 + num2;
    cout << setw(30) << "The Sum Is : " << sum;
    cout << endl;



    float sub = num1 - num2;
    cout << setw(30) << "The Subtraction Is : " << sub;
    cout << endl;

    float multi = num1 * num2;
    cout << setw(30) << "The Multiplication Is : " << multi;
    cout << endl;

    double div = (float)num1 / num2;
    cout << setw(30) << "The Division Is : " << div;
    cout << endl;








getch();
}
