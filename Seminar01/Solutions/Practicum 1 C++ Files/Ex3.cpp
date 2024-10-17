#include <iostream>
using namespace std;

int main()
{
    int lev;

    cin >> lev;

    cout << "Lev: " << lev << endl;
    cout << "Euro: " << (lev/1.96) << endl;
    cout << "USD:  " << (lev/1.77) << endl;
    
    return 0;
}