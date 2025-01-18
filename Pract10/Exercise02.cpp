#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
	int result=0;
	int mask = 1;
	for (int i = 0; i < k; i++)
	{
		if (n & mask)
		{
			mask = mask << 1;
			result = result + pow(2,i);
		}
		else
		{
			mask = mask << 1;
			continue;
		}
	}
	cout << result;
}
