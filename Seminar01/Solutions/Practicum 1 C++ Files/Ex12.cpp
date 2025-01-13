#include <iostream>
using namespace std;

int main()
{
    long input;

    cout << "Seconds: ";

    cin >> input;

    int days,hours,minutes,seconds;

    seconds = input % 60;
    minutes = (input / 60) % 60;
    hours = (input / (60*60)) % 24;
    days = input / (60*60*24);

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds\n";
    
    return 0;
}