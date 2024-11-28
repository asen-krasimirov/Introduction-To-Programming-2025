#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp = i;
		for (int j = 1; j <= n; j++)
		{
			cout << temp << "  ";
			if (j % 2 == 0)
			{
				temp = temp + (2 * i) - 1;
			}
			else temp = temp + ((2 * (n - i)) + 1);
		}
		cout << endl;
	}
}
