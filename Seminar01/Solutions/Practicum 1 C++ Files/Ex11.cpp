#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;

    bool is_a_bigger = a>b;
    bool is_b_bigger = a<b;

    cout << "Max: " << ((is_a_bigger * a) + (is_b_bigger * b)) << endl << "Min: " << ((is_b_bigger * a) + (is_a_bigger * b));
    
    return 0;
}