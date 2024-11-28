#include <iostream>
using namespace std;

int main()
{
    int N;
    int lowerLimit = 0;

    cin >> N;

    if(N<lowerLimit){

        cout << "Invalid number";

    }
    else{

        int result = 1;

        while(N!=0)
        {

            result *= N;

            N--;

        }

        cout << result;
    }

    return 0;
}