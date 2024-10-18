#include <iostream>
using namespace std;

int main()
{
    //Numbers for a streetlight
    //-1 - red
    //0 - yellow
    //1 - green

    int light;
    
    cin >> light;

    switch (light)
    {
        case -1:
            cout << "The traffic light shows red.\nStop and wait.";
            break;
        case 0:
            cout << "The traffic light shows yellow.\nGet ready.";
            break;
        case 1:
            cout << "The traffic light shows green.\nGo.";
            break;
        default:
            cout << "The traffic light doesn't show a color.\nInvallid number was entered.";
            break;
    }

    return 0;
}