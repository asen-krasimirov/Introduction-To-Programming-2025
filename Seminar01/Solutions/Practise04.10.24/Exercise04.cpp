#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter the length of the first side : ";
	double aSide;
	cin >> aSide;
	cout << "Please enter the length of the other side : ";
	double bSide;
	cin >> bSide;
	cout << "The perimeter of the rectangle is " << 2 * (aSide + bSide) << endl;
	cout << "The area of the rectangle is " << aSide * bSide;
}