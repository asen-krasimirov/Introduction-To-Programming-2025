#include <iostream>
using namespace std;

int main()
{
    long sumNumbers = 0;

    for(int i=100;i<=999;i++){

        int sum = 0;

        int temp = i;

        while(temp!=0){

            sum+=temp%10;

            temp/=10;

        }

        bool isPrime = true;

        for(int j = 2;j<sum;j++){

            if(sum%j == 0){

                isPrime = false;

                break;

            }

        }

        //There is no use of checking whether the sum is a tripple digit number
        //The sum is maximum 27, which is a double digit number

        if(isPrime && sum>=10)
        {

            sumNumbers += i;

        }

    }

    cout << sumNumbers;

    return 0;
}