#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double aX, aY, bX, bY;
	cin >> aX >> aY >> bX >> bY;
	double distance = sqrt((aX - bX)*(aX - bX) + (aY - bY)*(aY - bY));
	cout << distance;
}
