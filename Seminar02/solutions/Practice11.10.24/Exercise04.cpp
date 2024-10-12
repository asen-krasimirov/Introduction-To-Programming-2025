#include <iostream>
using namespace std;
int main()
{
	int percent;
	cin >> percent;
	if (percent < 40) cout << "2";
	else if (percent >= 40 && percent < 60) cout << "3";
	else if (percent >= 60 && percent < 70) cout << "4";
	else if (percent >= 70 && percent < 80) cout << "5";
	else cout << "6";
}
