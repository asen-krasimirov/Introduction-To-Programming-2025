
#include <iostream>
using namespace std;
int main()
{


	int n; std::cout << "n = "; std::cin >> n;
int sum = 0;

for (int group = 1; group <= n; group++)
{
	for (int numbers_to_add = 1; numbers_to_add <= group; numbers_to_add++)
	{

		sum += numbers_to_add;

	}

}
std::cout << sum;



}