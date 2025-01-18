#include<iostream>
using namespace std;

const int MAX = 1024;

void CopySmall(char str[], char newStr[])
{
    int i = 0, j=0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i <= 'z'])
        {
            newStr[j] = str[i];
            j++;
        }
        i++;
    }
}

int main()
{
    char str[MAX], newStr[MAX];
    cin.getline(str, MAX);
    CopySmall(str, newStr);
    cout << newStr;
}