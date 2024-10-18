#include <iostream>
using namespace std;
int main()
{
    int inputSeconds;
    cout << "Seconds: ";
    cin >> inputSeconds;
    int seconds = inputSeconds % 60;
    int allMinutes = inputSeconds / 60;
    int minutes = allMinutes % 60;
    int allHours = allMinutes / 60;
    int days = allHours / 24;
    int hours = allHours - days * 24;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";
}