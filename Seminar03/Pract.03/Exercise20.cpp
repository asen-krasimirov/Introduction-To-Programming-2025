#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	//Part1 (left side)
	for (int i = 1; i <=n-1; i++)
	{
		//nums
		for (int j = 1; j <=i; j++)
		{
			cout << j<<" ";
		}
		//distance between nums
		for (int j = 1; j <=5*n-4*i; j++)
		{
			cout << " ";
		}
		//nums
		for (int j = i; j >= 1; j--)
		{
			cout <<" " <<j;
		}
		cout << endl;
	}
	//Part 2 (the knot)
	for (int i = 1; i <=n; i++)
	{
		cout << i << " ";
	}
	for (int i = 1; i <=n; i++)
	{
		cout << "-";
	}
	for (int i = n; i >= 1; i--)
	{
		cout <<" "<< i;
	}
	cout << endl;
	//Part 3 (right side)
	for (int i = n-1; i >=1; i--)
	{
		//nums
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		//distance between nums
		for (int j = 1; j <= 5*n-4*i; j++)
		{
			cout << " ";
		}
		//nums
		for (int j = i; j >= 1; j--)
		{
			cout << " " << j;
		}
		cout << endl;
	}
}
