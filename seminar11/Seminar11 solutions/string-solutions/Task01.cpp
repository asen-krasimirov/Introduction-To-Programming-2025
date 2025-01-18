#include<iostream>
using namespace std;

const int MAX = 1024;

int main()
{
    char ch;
    char str[MAX];

    cout << "Enter character to count" << endl;
    cin >> ch;
    cin.ignore();
    cout << "Enter string to check" << endl;
    cin.getline (str, MAX);

    int i = 0;
    int count = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        };
        i++;
    }  
    cout << count;
    
}