
#include <iostream>
using namespace std;
int main()
{

	int n; cin >> n;
	int x = 1;

	while (x != n) {


		int y = n - x;

		cout << "x = " << x << ", y = " << y << endl;

		x++;
	}

}