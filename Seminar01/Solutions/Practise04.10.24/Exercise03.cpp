#include <iostream>
using namespace std;
int main()
{
    double money;
    cin >> money;
    double dolarKurs = 0.56;
    double evroKurs = 0.51;
    cout << "Your money in dollars is " << money * dolarKurs << endl;
    cout << "Your money in euro is " << money * evroKurs << '\n';

}

