#include<iostream>
using namespace std;

const int MAX = 1024;

unsigned int length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    unsigned int beg, end, strLength = 0;
    char str[MAX];
    cout << "Enter string:" << endl;
    cin.getline(str, MAX);
    cout << "Enter beggining index:" << endl;
    cin >> beg;
    cout << "Enter ending index:" << endl;
    cin >> end;
    strLength = length(str);

    if(beg > strLength || beg == end || beg > end)
    {
        cout << "\" \"";
    }
    else if(end > strLength)
    {
        for(int i = beg; i <= strLength; i++)
        {
            cout << str[i];
        }
    }
    else{
        for(int i = beg; i <= end; i++)
        {
            cout << str[i];
        }
    }
}