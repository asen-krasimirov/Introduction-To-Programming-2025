
#include <iostream>
using namespace std;
int main()
{

	int numbers[1000] = {0,1};

for (int position = 2; position <= n - 1; position++) {
	
	numbers[position] = numbers[position - 1] + numbers[position - 2];

}

for (int i =0 ; i <n; i++){
	std::cout << numbers[i] << " ";
}

}