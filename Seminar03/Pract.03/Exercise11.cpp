#include <iostream>
using namespace std;
int main()
{
    int input,sum, temp, sumDigits = 0;
    do
    {   
        sumDigits = 0;
        sum = 0;
        cin >> input;
        temp = input;
        while (temp != 0)
        {
            sumDigits += temp % 10;
            temp = temp / 10;
        }  
        sum = input + sumDigits;    
        if(sum % 10 != 0)cout << input << " -> Bad number [" << input << " + " << sumDigits << " = " << sum << " not divisable by 10]" << endl;      
    } while (sum % 10 != 0);
    
    
}
