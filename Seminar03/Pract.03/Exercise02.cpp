#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;
    while (start < 0 || start>255 || end < 0 || end>255)
    {
        cout << "Invalid codes!" << endl;
        cin >> start >> end;
    }
    for (int i = start; i <= end; i++)
    {
        cout << i << " --> " << (char)i << endl;
    }
}
