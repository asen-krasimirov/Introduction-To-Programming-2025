#include <iostream>
using namespace std;
int main()
{
	char symbol;
	cin >> symbol;
	if (symbol >= 'A' && symbol <= 'z')
	{
		if (symbol >= 'A' && symbol <= 'Z')
		{
			symbol = symbol + ('a' - 'A');//+32
			cout << symbol;
		}
		else 
		{
			symbol = symbol - ('a' - 'A');
			cout << symbol;
		}
	}
	else cout << "Invalid character";
}