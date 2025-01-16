#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 1;

    cin >> n;

    if(n<lowerLimit)
    {
        cout << "Invalid input";
    }
    else
    {
        int maxSum = 0;
        int difference;
        int maxDifference = 0;
        int sum1 = 0;
        int sum2 = 0;
        int input;
        int temp = n*=2;

        bool sumSwitch = false;

        while(temp>0)
        {
            cin >> input;

            //After each pair switch variables
            if(temp%2==0){

                sumSwitch = ( sumSwitch ? false : true );

                //Check on an even switch maximum values
                if(sumSwitch){
                    
                    maxSum = ( (maxSum>sum1) ? maxSum : sum1 );
                    maxSum = ( (maxSum>sum2) ? maxSum : sum2 );

                    difference = (sum1-sum2) * ( (sum1-sum2) < 0 ? -1 : 1 );

                    maxDifference = ( (maxDifference>difference) ? maxDifference : difference );

                }

                //Switch variables
                sum1 = sum2;
                sum2 = 0;
            }

            sum2+=input;

            temp--;

        }

        //Check the last pair

        maxSum = ( (maxSum>sum1) ? maxSum : sum1 );
        maxSum = ( (maxSum>sum2) ? maxSum : sum2 );
        
        difference = (sum1-sum2) * ( (sum1-sum2) < 0 ? -1 : 1 );

        maxDifference = ( (maxDifference>difference) ? maxDifference : difference );
                
        //See results
        
        if(maxDifference != 0)
            cout << "Different sums. Max Difference: " << maxDifference;
        else
            cout << "Equal sums: " << maxSum;
    }

    return 0;
}  