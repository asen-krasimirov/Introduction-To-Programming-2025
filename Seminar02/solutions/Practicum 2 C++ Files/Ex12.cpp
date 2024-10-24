#include <iostream>
using namespace std;

int main()
{
    int day,month;

    cin >> day >> month;

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day>31 || day<0){
                cout << "Invalid day";
            }
            else{
                cout << "Next date: ";
                cout << ((++day > 31)?(day-31):day) << " " << ((day>31)?((++month > 12)?(month-12):month):month);
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(day>30 || day<0){
                cout << "Invalid day";
            }
            else{
                cout << "Next date: ";
                cout << ((++day > 30)?(day-30):day) << " " << ((day>30)?((++month > 12)?(month-12):month):month);
            }
            break;
        case 2:
            if(day > 28 || day<0){
                cout << "Invalid day";
            }
            else{
                cout << "Next date: ";
                cout << ((++day > 28)?(day-28):day) << " " << ((day>28)?(++month):month);
            }
            break;
        default:
            cout << "Invalid month";
            break;
    }
    
    return 0;
}