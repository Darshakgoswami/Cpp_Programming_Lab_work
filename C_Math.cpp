#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double x = 9.0, y = 2.0;
    cout << "Square root of x: " << sqrt(x) << endl;
    cout << "x raised to y: " << pow(x, y) << endl;
    cout << "Sine of x: " << sin(x) << endl;
    cout << "Cosine of x: " << cos(x) << endl;
    cout << "Natural log of x: " << log(x) << endl;
    cout << "Base-10 log of x: " << log10(x) << endl;
    cout << "Absolute value of -x: " << fabs(-x) << endl;
    cout << "Ceil of 3.14: " << ceil(3.14) << endl;
    cout << "Floor of 3.14: " << floor(3.14) << endl;
    cout << "fmod(9.0, 2.0): " << fmod(x, y) << endl;
    return 0;
}