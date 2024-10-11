#include <iostream>
using namespace std;

int main()
{
    double sideA,sideB;

    cout << "Please enter the length of the first side: ";
    cin >> sideA;

    cout << "Please enter the length of the second side: ";
    cin >> sideB;
    
    cout << "The Face of the Rectangle is: " << (sideA * sideB) << endl;
    return 0;
}