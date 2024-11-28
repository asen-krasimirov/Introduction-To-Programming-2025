#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	//First half
	for (int i = 1; i <= n + 2; i++)
	{
		cout << "#";
	}
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "#";
		int temp = i;
		for (int j = 1; j <= n; j++)
		{
			cout << temp;
			if (temp == n) temp = 0;
			temp++;
		}
		cout << "#" << endl;
	}
	//Middle
	cout << "#";
	for (int i = 1; i <=n; i++)
	{
		if (n % 2 == 0)
		{
			if (i == n / 2 || i == n / 2 + 1) cout << "X";
			else cout << " ";
		}
		else
		{
			if (i == (n / 2)+1) cout << "X";
			else cout << " ";
		}
	}
	cout << "#" << endl;
	//Second half
	for (int i = n; i >= 1; i--)
	{
		cout << "#";
		int temp = i;
		for (int j = 1; j <= n; j++)
		{
			cout << temp;
			if (temp == n) temp = 0;
			temp++;
		}
		cout << "#" << endl;
	}
}
