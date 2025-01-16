#include <iostream>
using namespace std;

int main()
{
    int a;
    int lowerLimit = 0;

    cin >> a;

    if (a<lowerLimit){
        cout << "Invalid number";
    }
    else{

        int b = a*a;
        int bReversed = 0;
        
        while(b!=0){

            bReversed *= 10; // 0 * 10 = 0

            bReversed += b%10; // 0 + 0 = 0   ->    The leading 0s are automatically ignored

            b/=10;

        }

        cout << bReversed;
    }
    
    return 0;
}