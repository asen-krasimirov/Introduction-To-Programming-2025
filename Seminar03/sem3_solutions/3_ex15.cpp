
#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;

for (int c = 1; c <= n; c++)
{
	for (int b = 1; b <= n; b++)
	{
		for (int a = 1; a <= n; a++)
		{
		
			if (a + b > c && a + c > b && b + c > a)
			{

				if (a < b && a * a + b * b == c * c) {
					std::cout << a << " " << b << " " << c << endl;
				}

			}
			
		}
	}
}


}