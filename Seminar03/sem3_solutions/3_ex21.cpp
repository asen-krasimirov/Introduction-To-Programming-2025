
#include <iostream>
using namespace std;
int main()
{
	int n; std::cin >> n;

//top part

for (int i = 1; i <= n+2; i++)
{
	std::cout << "#";
}
std::cout << endl;

int number = 0;
int divisor = 1;
for (int num = 1; num <= n; num++)
{
	divisor *= 10;
	number *= 10;
	number += num;

}
divisor /= 10;


//first mid part
std::cout << "#" << number << "#" << endl;
for (int i = 1; i < n; i++)
{
	;
	int first_digit = number / divisor;

	number = (number % divisor) * 10 + first_digit;
	std::cout << "#" << number << "#" << endl;
}


//sec mid part

std::cout << "#";
if (n % 2 == 0)
{
    for (int i = 1; i <= n; i++){
	
	if (i == n / 2)
		{
			std::cout << "XX";
			i++;
		}
		else
		{
			std::cout << " ";
		}
	
    }

}
else
{

	for (int i = 1; i <= n; i++) {

		if (i == (n / 2) + 1)
		{
			std::cout << "X";
		}
		else
		{
			std::cout << " ";
		}

	}

}


std::cout << "#" << endl;




//third mid part
std::cout << "#" << number << "#" << endl;
for (int i = 1; i < n; i++)
{
	
	int last_digit = number % 10;
	number/=10;
	number = divisor * last_digit + number;
	std::cout << "#" << number << "#" << endl;
}



//bottom
for (int i = 1; i <= n + 2; i++)
{
	std::cout << "#";
}




}