//Да се напише програма, която прочита от стандартния вход число N и след него N на брой цели числа. 
//Програмата да отпечатва числата в обратен на въвеждането им ред
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *numbers = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for(int i = n-1; i >= 0; --i)
    {
        cout << numbers[i] << " ";
    }
    delete[] numbers;
}