#include <iostream>
using namespace std;
int magic(int number, int index, int bytes)
{
	int result = 0;
	int mask = 1;
	mask = mask << index-1;
	for (int i = 0; i < bytes; i++)
	{
		result = result + (number & mask);
		mask = mask << 1;
	}
	result = result >> index-1;
	return result;
}
int main()
{
    int x, m, n;
    cin >> x >> m >> n;
	cout << magic(x, m, n);
}
