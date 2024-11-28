#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int nMember, nMinus1Member = 1, nMinus2Member = 1;
    if (input == 1)cout << "0";
    else if (input == 2)cout << "0 1 ";
    else if (input >= 3) cout << "0 1 1 ";
    for (int i = 4; i < input; i++)
    {
        nMember = nMinus1Member + nMinus2Member;
        cout << nMember << " ";
        nMinus1Member = nMinus2Member;
        nMinus2Member = nMember;
    }
}
