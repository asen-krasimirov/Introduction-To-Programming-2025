#include <iostream>
using namespace std;
int main()
{
    int n, sumPairs=0, diffPairs=0;
    cin >> n;
	int num1, num2;
    cin >> num1 >> num2;
	sumPairs = num1 + num2;
	for (int i = 0; i<n-1; i++)
	{
		cin >> num1 >> num2;
		if (sumPairs != num1 + num2 && diffPairs < abs((num1 + num2) - diffPairs))
			diffPairs = abs((num1 + num2) - diffPairs);
	}
	if (diffPairs != 0)cout << "Different sums. Max Difference: " << diffPairs;
	else cout << "Equal sums: " << sumPairs;
}
