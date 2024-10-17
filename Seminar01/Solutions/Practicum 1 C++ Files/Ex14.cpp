#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool is_n_negative = n<0;
    double sum = ((n/2.0)*(n+1)) * !is_n_negative;
    cout << "Sum: " << sum;
    return 0;
}