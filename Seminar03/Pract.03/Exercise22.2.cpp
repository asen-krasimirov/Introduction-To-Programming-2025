#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	for (int i = 1; i <=n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = n*i; j >= (n*i)-n+1; j--)
			{
				cout << j << " ";
			}
		}
		else
		{
			for (int j = (n*i)-n+1; j <= n*i; j++)
			{
				cout << j << " ";
			}
		}
		cout << endl;
	}
}
