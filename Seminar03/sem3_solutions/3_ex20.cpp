
#include <iostream>
using namespace std;
int main()
{

	int n; std::cin >> n;
int width =5*n;

//top part
for (int row = 1; row < n; row++)
{
	
	for (int num = 1; num <= row; num++)
	{
	
	std::cout << num << " ";
	}
	for (int space = 1; space <= (width - (row * 4)); space++)
	{
		std::cout << " ";
	}

	for (int rev_num = row; rev_num >=1 ; rev_num--)
	{
	std::cout << " " << rev_num;
	}

	std::cout << endl;

}

//middle part

for (int num = 1; num <= n; num++)
{
	std::cout << num << " ";
}

for (int space = 1; space <= n; space++)
{
	std::cout << "-";
}


for (int rev_num = n; rev_num >= 1; rev_num--)
{
	std::cout << " " << rev_num;
}
std::cout << endl;

//bottom part

for (int row = n - 1; row >= 1; row--)
{

	for (int num = 1; num <= row; num++)
	{

	std::cout << num << " ";
	}
	for (int space = 1; space <= (width - (row * 4)); space++)
	{
		std::cout << " ";
	}

	for (int rev_num = row; rev_num >= 1; rev_num--)
	{
		std::cout << " " << rev_num;
	}

	std::cout << endl;

}


}