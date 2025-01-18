#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort3(int& min, int& mid, int& max)
{
    if (min > mid && min > max)
    {
        if (mid > max) swap(min, max);
        else
        {
            swap(mid, max);
            swap(min, max);
        }
        
    }
    else if (mid > min && mid > max)
    {
        if (min > max)
        {
            swap(mid, max);
            swap(mid, min);
        }
        else swap(mid, max);
    }
    else
    {
        if (min > mid) swap(min, mid);
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    sort3(a, b, c);
    cout << a << " " << b << " " << c << endl;
}
