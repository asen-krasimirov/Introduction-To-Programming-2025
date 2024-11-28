#include <iostream>
using namespace std;
int askUser(int from, int to)
{        
    int n;
    cin >> n;
    if (n >= from && n <= to) return n;
    else return 0;
}
int main()
{
    int n, from, to;
    cin >> from >> to;
    while (from >= to)
    {
        cout << "Enter valid input." << endl;
        cin >> from >> to;
    }
    do
    {   
        cout << "Enter a number between " << from << " and " << to << endl;      
    } 
    while (!(n = askUser(from, to)));
    cout << n;

}
