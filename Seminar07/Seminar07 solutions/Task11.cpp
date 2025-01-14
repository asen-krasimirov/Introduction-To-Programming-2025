#include <iostream>
using namespace std;

int magicNumber;

void read_matrix(int matrix[][20], int n)
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void columns(int matrix[][20], int n)
{
    int temp;
    bool magicSquare = true;
    for(int i=0; i < n; i++)
    {
        temp = 0;
        for(int j=0; j < n; j++)
        {           
           temp += matrix[j][i];
           cout << matrix[j][i] << " ";
        }
        if(temp == magicNumber)
        {
            continue;
        }
        else{
           cout << "Not a magic square";
           magicSquare = false;
           break;
        }
    }
    if(magicSquare)
    {
        cout << "Square is a magic square!" << endl;
        cout << "All rows, columns and diagonals equal " << magicNumber;
    }
    else{
        cout << "Not a magic square";
    }
}

void rows(int matrix[][20], int n)
{
    int temp;
    bool magicSquare = true;
    for(int i=0; i < n; i++)
    {
        temp = 0;
        for(int j=0; j < n; j++)
        {           
            temp += matrix[i][j];
        }
        if(temp == magicNumber)
        {
            continue;
        }
        else{
           magicSquare = false;
           break;
        }
    }
    if(magicSquare)
    {
        columns(matrix, n);
    }
    else{
        cout << "Not a magic square";
    }
}

void second_diagonal(int matrix[][20], int n)
{
    int temp;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i + j == n-1)
            {
                temp += matrix[i][j];
            }
        }
    }
    if(temp == magicNumber)
    {
        rows(matrix, n);
    }
    else{
        cout << "Not a magic square";
    }
}

void main_diagonal(int matrix[][20], int n)
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i == j)
            {
                magicNumber += matrix[i][j];
            }
        }
    }
    second_diagonal(matrix, n);
}

int main()
{
    int matrix[20][20];
    int n;
    cout << "Enter square side length: ";
    cin >> n;
    read_matrix(matrix, n);
    main_diagonal(matrix, n);
}
