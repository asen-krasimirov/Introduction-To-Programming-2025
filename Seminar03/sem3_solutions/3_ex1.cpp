
#include <iostream>
using namespace std;
int main()
{

	int a;
	std::cin >> a;
	int factorial = 1;

	for (int i = a ; i > 1; i--) {

		factorial *= i;
	}

	cout << "Factorial: " << factorial;

}

