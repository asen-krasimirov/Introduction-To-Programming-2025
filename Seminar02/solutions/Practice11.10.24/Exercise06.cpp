#include <iostream>
using namespace std;
int main()
{
    int green, yellow, red;
    green = 2, yellow = 1, red = 0;
    int action;
    cin >> action;
    switch (action)
    {
    case 2: cout << "Go\n"; break;
    case 1: cout << "Wait\n";
    case 0: cout << "Stop\n"; break;
    }
}
