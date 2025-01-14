#include <iostream>
using namespace std;

int numOfOnes(char num[], int a)
{
    if(a == 0)
    {return 0;}
    // Бинарно преобразуване
    int i = 0, count = 0;
    while(a > 0)
    {
        if(a % 2 == 0)
        {
            num[i] = 0;
            i++;  
        }
        else if(a % 2 == 1)
        {
            num[i] = 1;
            i++;  
            count++;
        }
        a /= 2;
    }
    return count;
}

void printInBinary(int a){
    if(a == 0){
        cout << "0";
        return;
    }
    char binaryForm[32];
    int i = 0;

    while (a > 0){
        binaryForm[i++] = (a % 2 == 0 ? '0' : '1');
        a /= 2;   
    } 
    for(int j = i-1; j >= 0; j--){
        cout << binaryForm[j];
    }
}

int main()
{
    int input;
    cin >> input;
    char num[32];
    cout << numOfOnes(num, input);
    

}