#include <iostream>
using namespace std;
void addLength(int& hour, int& minutes, int length)
{
    minutes = length % 60;
    if (minutes > 59)
    {
        hour++;
        minutes = minutes - 59;
    }
    hour = length / 60;
    if (hour > 24) hour = hour - 24;
}
int main()
{
    int n, hour,minutes,length, maxHour=0, maxMinutes=0,maxLength=0;
    cin >> n;
    while (n < 1 || n>5)
    {
        cout << "The number of performances must be between 1 and 5!" << endl;
        cin >> n;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> hour >> minutes;
        while (!(hour > 0 && hour < 25) || (minutes > -1 && minutes < 60))
        {
            cout << "Enter a valid time!" << endl;
            cin >> hour >> minutes;
        }
        cin >> length;
        while (length < 30 || length>300)
        {
            cout << "Invalid performance time!" << endl;
            cin >> length;
        }
        addLength(hour, minutes, length);
    }
   
  
}
