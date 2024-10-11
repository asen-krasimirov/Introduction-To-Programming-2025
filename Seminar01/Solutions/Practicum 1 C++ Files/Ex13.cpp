#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    bool x1_bigger_x2 = x1 > x2;
    bool y1_bigger_y2 = y1 > y2;

    double a = ((x1 - x2) * x1_bigger_x2) + ((x2 - x1) * !x1_bigger_x2);
    double b = ((y1 - y2) * y1_bigger_y2) + ((y2 - y1) * !y1_bigger_y2);

    //Due to this solution using the Pythagorean theorem, it is required to use the math.h library for the sqrt() function
    int c = sqrt((a*a) + (b*b))/0.01;
    double AB = c / 100.0;

    cout << "AB: " << AB << endl;

    return 0;
}