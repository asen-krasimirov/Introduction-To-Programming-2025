#include <iostream>
using namespace std;
int main()
{
    int startHours, startMinutes;
    cin >> startHours >> startMinutes;
    int endHours, endMinutes;
    cin >> endHours >> endMinutes; 
    while (startHours != endHours || startMinutes != endMinutes)
    {
        if (startMinutes < 59) startMinutes++;
        else
        {
            startMinutes = 0;
            if (startHours < 23) startHours++;
            else startHours = 0;
        }
        if(startMinutes<10)cout << startHours << ":" <<"0"<< startMinutes << endl;
        else cout << startHours << ":" << startMinutes<<endl;
    }
}
