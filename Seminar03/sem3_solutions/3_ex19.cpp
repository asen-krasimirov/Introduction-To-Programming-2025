
#include <iostream>
using namespace std;
int main()
{

	int n;std:: cin >> n;

if (n < 0) {
	return 1;
}

for (int row = 1; row <= n; row++)
{
	for (int col = 1; col <=row; col++)
	{
		std::cout << "$ ";
	}
	std::cout << endl;
}



}