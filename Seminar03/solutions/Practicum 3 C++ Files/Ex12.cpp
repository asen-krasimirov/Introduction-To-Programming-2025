#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 1; //N must be positive for the problem to have a solution

    cout << "n = ";
    cin >> n;

    if(n<lowerLimit)
    {
        cout << "Invalid number";
    }
    else{

        int sum = 0;
        int temp;

        for(int i=1;i<=n;i++){

            temp = i;

            while(temp!=0){

                sum+=temp;

                temp--;

            }
        }

        cout << sum;

    }

    return 0;
}