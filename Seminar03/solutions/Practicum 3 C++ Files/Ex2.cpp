#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int lowerLimit = 0;
    int upperLimit = 255;

    cout << "Start ";
    cin >> n;
    
    cout << "End ";
    cin >> m;

    if(n<lowerLimit || n>upperLimit || m<lowerLimit || m>upperLimit){
        cout << "Invalid codes!";
    }
    else{

        while(n<=m){

            cout << n << " --> " << (char)n << endl;

            n++;
            
        }
    }

    return 0;
}