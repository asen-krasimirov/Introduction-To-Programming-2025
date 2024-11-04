
#include <iostream>
using namespace std;
int main()
{

int number; 
bool is_bad_number= true;

   while (is_bad_number) {

        std::cin >> number;
        int save_number = number;
        int sum = 0;
          while (number != 0) {

	sum += number % 10;
	number /= 10;

           }

      if ((save_number + sum) % 10 == 0)
       {
	std::cout << save_number << " -> End of program [ " << save_number << " + " << sum << " = " << (save_number + sum) << " which is divisible by 10 ]" << endl;
	is_bad_number = false;
       }
          else {

	std::cout << save_number << " -> Bad number [ " << save_number << " + " << sum << " = " << (save_number + sum) << " is not divisible by 10 ]" << endl;

          }


   }

}