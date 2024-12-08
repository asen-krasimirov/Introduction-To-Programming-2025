#include <iostream>
using namespace std;


//Setting up functions to treat the long long data type as an array
//Solution includes bubble sort

//Returns a^n
long long pow(int a,int n)
{
    long long result = 1;
    while(n>0)
    {
        result*=a;
        n--;
    }
    return result;
}

//Returns the n digit of a
int getIndex(long long a, int n)
{
    n--;
    return (a/pow(10,n))%10;
}

//Returns the length of a
int length(long long a)
{

    int result = 0;
    while(a!=0)
    {
        result++;
        a/=10;
    }

    return result;
}

//Switches two indexes
int switchIndex(long long number,int look_at_index, int replace_with_index)
{

    int digit_one = getIndex(number,look_at_index);
    int digit_two = getIndex(number,replace_with_index);
    look_at_index--;
    replace_with_index--;

    number-=digit_one * pow(10,look_at_index);
    number+= digit_two * pow(10,look_at_index);

    number-=digit_two * pow(10,replace_with_index);
    number+=digit_one * pow(10,replace_with_index);

    return number;
}

//Implementation of Bubble sort algorithm
long long sort(long long a)
{
    int len = length(a);
    int index_one,index_two;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            index_one = j+1;
            index_two = j+2;
            if(getIndex(a,index_one) > getIndex(a,index_two))
                a = switchIndex(a,index_one,index_two);
        }
    }

    return a;
}

int main()
{
    long long a;
    long long lowerLimit = 0;

    cin >> a;
    if(a<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Result: " << sort(a);

    return 0;
}