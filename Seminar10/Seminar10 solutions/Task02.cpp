#include<iostream>
using namespace std;

void PtrToLower(char *& pCh)
{
    *pCh += 32;
}

void PtrToUpper(char *& pCh)
{
    *pCh -= 32;
}

void RefToLower(char & ch)
{
    ch += 32;
}

void RefToUpper(char & ch)
{
    ch -= 32;
}

int main()
{
    char ch;
    cin >> ch;
    // char * pCh = &ch;

    // With pointer
    
    // if(*pCh >= 'A' && *pCh <= 'Z')
    // {
    //     PtrToLower(pCh);
    // }
    // else if(*pCh >= 'a' && *pCh <= 'z')
    // {
    //     PtrToUpper(pCh);
    // }
    // else{
    //     cout << "Enter a letter";
    // }
    // cout << *pCh;

    // With reference
    if(ch >= 'A' && ch <= 'Z')
    {
        RefToLower(ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        RefToUpper(ch);
    }
    else{
        cout << "Enter a letter";
    }
    cout << ch;
} 