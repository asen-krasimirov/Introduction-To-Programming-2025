#include <iostream>
using namespace std;

int main()
{
    cout << "Arabic numeral: ";

    int a;

    cin >> a;

    cout << "Romanian numerals: ";

    if(a<=0 || a>=10){
        cout << "Invalid input";
    }
    else{
        switch(a){
            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
        }
    }

    return 0;
    
}