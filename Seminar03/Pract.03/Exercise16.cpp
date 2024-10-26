#include <iostream>
using namespace std;
int main()
{
    int m, n,sumDividers=0;
    cin >> m >> n;
	for (int i = m; i <=n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)sumDividers += j;
		}
		if (i == sumDividers)cout << i << endl;
		sumDividers = 0;
	}
}
