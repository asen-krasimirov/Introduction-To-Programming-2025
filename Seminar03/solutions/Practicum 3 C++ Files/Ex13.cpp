#include <iostream>
using namespace std;

int main()
{
    //Entering time in format HH:MM means that we need to enter a string to not cause errors
    //Examples: 12:45 ; 23:05 ; 02:00

    //This means that we need to use string operations for the solution of the problem
    //Because of this and the fact that, for now, we avoid string operations the problem can be solved in two ways:

    //1. Time format is assumed to be HH MM (two int variables separated with a space)    
    //2. Time format is assumed to be HH : MM (two int variables separated with spaces and a char variable that needs to be ':')

    //Note: To see solution 2. uncomment the commented parts below

    int h1,h2,m1,m2;
    //char separ1,separ2;
    int timeInMinutes1 = 0;
    int timeInMinutes2 = 0;
    int lowerLimit = 0;
    int upperLimitHour = 23;
    int upperLimitMinute = 59;

    cin >> h1 >>/* separ1 >>*/ m1;
    cin >> h2 >>/* separ2 >>*/ m2;

    bool hourLimitCheck = !(h1<lowerLimit || h1>upperLimitHour || h2<lowerLimit || h2>upperLimitHour);
    bool minuteLimitCheck = !(m1<lowerLimit || m1>upperLimitMinute || m2<lowerLimit || m2>upperLimitMinute);
    //bool separatorCheck = !(separ1 != ':' || separ2 != ':');

    if(!hourLimitCheck || !minuteLimitCheck /*|| !separatorCheck*/)
    {
        cout << "Invalid input";
    }
    else
    {
        timeInMinutes1 = m1 + (h1*60);
        timeInMinutes2 = m2 + (h2*60);

        if(timeInMinutes1>timeInMinutes2)
        {
            while(timeInMinutes2!=timeInMinutes1-1)
            {
                timeInMinutes2++;
                cout << ( (timeInMinutes2/60<10) ? "0" : "" ) << (timeInMinutes2/60);
                cout << ":";
                cout << ( (timeInMinutes2%60<10) ? "0" : "" ) << (timeInMinutes2%60);
                cout << endl;
            }
        }
        else
        {
            while(timeInMinutes1!=timeInMinutes2-1)
            {
                timeInMinutes1++;
                cout << ( (timeInMinutes1/60<10) ? "0" : "" ) << (timeInMinutes1/60);
                cout << ":";
                cout << ( (timeInMinutes1%60<10) ? "0" : "" ) << (timeInMinutes1%60);
                cout << endl;
            }
        }
    }

    
    return 0;
}