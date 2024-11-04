
#include <iostream>
using namespace std;
int main()
{

int n; std::cin >> n;
int sum_of_n = n * (n + 1) / 2;
for (int i = 1; i <= n - 1; i++)
{
	int num; std :: cin >> num;
	sum_of_n -= num;
}
std::cout << sum_of_n;



}