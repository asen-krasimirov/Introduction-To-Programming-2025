//Да се напише функция, която приема символен низ, и връща нов низ,
//за който е заделено точно количество памет, в който са премахнати всички повтарящи се символи.

#include<iostream>
using namespace std;

int Strlength(char * str)
{
    int i = 0, count = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char * No_duplicates(char * str, int size, int &resultSize)
{
    if(str == nullptr)return nullptr;
    char * temp = new char[100];
    int index = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i != j)
            {
                if(str[i] != str[j])
                {
                    temp[index] = str[i];
                    
                }
            }
        }
    }
    temp[index+1] = '\0';
    char * resultArr = new char[index+1];
    for(int i = 0; i < index+1; i++)
    {
        resultArr[i] = temp[i];
    }
    resultSize = index+1;
    delete[] temp;
    return resultArr;
}

int main()
{
    char * input = new char[100];
    cout << "Enter string:" << endl;
    cin.getline(input, 100);
    int size = Strlength(input);
    int resultSize = 0;

    char * resultStr = No_duplicates(input, size, resultSize);

    for(int i = 0; i < resultSize; i++)
    {
        cout << resultStr[i];
    }

    delete[] resultStr;
    delete[] input;
}