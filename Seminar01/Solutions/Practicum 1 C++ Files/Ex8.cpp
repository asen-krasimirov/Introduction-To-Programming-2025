#include <iostream>
using namespace std;

int main()
{
    int r;
    double PI = 3.14159265;

    cin >> r;

    double length = 2 * PI * r;
    double face = PI * r * r;

    cout << "Circle Length: " << length << endl << "Circle Face: " << face << endl;
    
    return 0;
}