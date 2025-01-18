//Да се напише функция, която приема 2 символни низа и връща нов символен низ, 
//за който е заделено точно количество памет, който представлява конкатенация на малките букви в първия с главните във втория.

#include<iostream>
using namespace std;

int Strlength(char * str)
{
    if(str == nullptr)return 0;
    int i = 0;
    int len = 0;
    while(str[i++] != '\0')
    {
        len++;
    }
    return len;
}

char * Concatenate(char * str1, char * str2, int &resultSize)
{
    if(str1 == nullptr || str2 == nullptr)return nullptr;
    int size = Strlength(str1)+Strlength(str2);
    int index = 0;
    char * temp = new char[size];

    for(int i = 0; i < Strlength(str1); i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            temp[index] = str1[i];
            index++;
        }
    }
    for(int i = 0; i < Strlength(str2); i++)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            temp[index] = str2[i];
            index++;
        }
    }
    
    resultSize = index+1;
    char * resultArr = new char[resultSize];
    for (int j = 0; j < index; j++)
    {
        resultArr[j] = temp[j];
    }
    resultArr[index] = '\0';
    delete[] temp;
    return resultArr;
}

int main()
{
    int size1, size2; 
    char * str1 = new char[100];
    char * str2 = new char[100];
    cout << "Enter first string:" << endl;
    cin.getline(str1, 100);
    cout << "Enter second string:" << endl;
    cin.getline(str2, 100);

    int resultSize;
    char * resultArr = Concatenate(str1, str2, resultSize);

    for(int i = 0; i < resultSize; i++)
    {
        cout << resultArr[i];
    }

    delete[] str1;
    delete[] str2;
    delete[] resultArr;
}