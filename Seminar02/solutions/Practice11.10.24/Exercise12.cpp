#include <iostream>
using namespace std;
int main()
{
    int day, month;
    cin >> day >> month;
    if (day < 28) day++;
    else if (day == 28 && month == 2)
    {
        day = 1;
        month = 3;
    }
    else if (day==30 && (month == 4 || month == 6 || month == 9 || month == 11))
    {
        day = 1;
        month++;
    }
    else if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10))
    {
        day = 1;
        month++;
    }
    else if (day == 31 && month == 12)
    {
        day = 1;
        month = 1;
    }
    cout << day << " " << month;
}
