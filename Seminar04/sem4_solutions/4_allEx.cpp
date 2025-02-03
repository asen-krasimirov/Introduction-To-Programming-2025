

#include <iostream>
using namespace std;


int sum(int a, int b);
bool isEven(int num);
bool isPositive(int num);
bool isNegative(int num);
int abs(int num);
double fabs(double num);
void print(char s, int n);
bool isCapitalLetter(char s);
bool checkSymbol(char s);
char to_lower(char ch);
char to_upper(char ch);
int num_length(int n);
int index_of_mun(int n, int k);
void has_sqrt(int number);
int least_common_multiple_of_3_numbers(int num1, int num2, int num3);
int concat(int first, int second);
int aksUser(int from, int to);
int pow(int num, unsigned n);
double calculate(int a, int b, char action);
int greatest_common_divisor_of_4_numbers(int a, int b, int c, int d);
int pow2_num_closest_to_n(int n);
bool is_prime_num(int number);
void print_prime_numbers(int to);
bool has_sum_of_primes(int number);
int sum_of_all_digit_until_1(long long number);
void multiplied_primes(int number);
int sorted_num(long long number);
int main()
{
	std::cout << "Ex1 test" << endl;
	std::cout << sum(5, -23) << endl;

	std::cout << "Ex2 test" << endl;
	std::cout << isEven(7) << endl;
	std::cout << isEven(14) << endl;


	std::cout << "Ex3 test" << endl;
	std::cout << isPositive(0) << endl;
	std::cout << isNegative(0) << endl;
	std::cout << isPositive(15) << endl;
	std::cout << isNegative(-20) << endl;

	std::cout << "Ex4 test" << endl;
	std::cout << abs(13) << endl;
	std::cout << abs(-130) << endl;
	std::cout << fabs(15.923) << endl;
	std::cout << fabs(-20.9842) << endl;

	std::cout << "Ex5 test" << endl;
	print('d', 6);
	print('n', 4);

	std::cout << "Ex6 test" << endl;
	std::cout << isCapitalLetter('d') << endl;//0
	std::cout << isCapitalLetter('A') << endl;//1
	std::cout << checkSymbol('@') << endl;//0
	std::cout << checkSymbol('h') << endl;//1
	std::cout << checkSymbol('H') << endl;//1

	std::cout << "Ex7 test" << endl;
	std::cout << to_lower('h') << endl;//h
	std::cout << to_lower('H') << endl;//h
	std::cout << to_upper('h') << endl;//H
	std::cout << to_upper('H') << endl;//H

	std::cout << "Ex8 test" << endl;
	std::cout << num_length(13) << endl;//2
	std::cout << num_length(14621) << endl;//5



	std::cout << "Ex9 test" << endl;
	std::cout << index_of_mun(97672, 6) << endl;//Out-of-bounds
	std::cout << index_of_mun(15, 1) << endl;//1
	std::cout << index_of_mun(972, 3) << endl;//2
	std::cout << index_of_mun(348, 2) << endl;//4

	std::cout << "Ex10 test" << endl;
	has_sqrt(25);//5
	has_sqrt(24);//?
	has_sqrt(144);//12
	has_sqrt(3437316);//1854

	std::cout << "Ex11 test" << endl;
	std::cout << least_common_multiple_of_3_numbers(15, 21, 33) << endl;
	std::cout << least_common_multiple_of_3_numbers(14, 8, 24) << endl;



	std::cout << "Ex12 test" << endl;
	std::cout << concat(15, 21) << endl;
	std::cout << concat(3, 1) << endl;

	std::cout << "Ex13 test" << endl;
	//std::cout<<aksUser(15, 36)<<" is in the interval";

	std::cout << "Ex14 test" << endl;
	std::cout << pow(12, 2) << endl;
	std::cout << pow(5, 3) << endl;

	std::cout << "Ex15 test" << endl;
	std::cout << calculate(12, 2, '+') << endl;
	std::cout << calculate(5, 3, '-') << endl;
	std::cout << calculate(3, 4, '*') << endl;
	std::cout << calculate(5, 3, '/') << endl;
	std::cout << calculate(12, 2, '%') << endl;
	std::cout << calculate(5, 3, 'a') << endl;

	std::cout << "Ex16 test" << endl;
	std::cout << greatest_common_divisor_of_4_numbers(12, 36, 24, 60) << endl;
	std::cout << greatest_common_divisor_of_4_numbers(15, 25, 30, 40) << endl;

	std::cout << "Ex17 test" << endl;
	int n; std::cin >> n;
	while (n < 100 || n> 100000) {
		std::cin >> n;
	}
	std::cout << pow2_num_closest_to_n(n) << endl;

	std::cout << "Ex18.1 test" << endl;
	std::cout << is_prime_num(5) << endl;
	std::cout << is_prime_num(7) << endl;
	std::cout << is_prime_num(14) << endl;
	std::cout << is_prime_num(17) << endl;
	std::cout << is_prime_num(4) << endl;

	std::cout << "Ex18.2 test" << endl;
	print_prime_numbers(20);

	std::cout << "Ex18.3 test" << endl;
	std::cout << has_sum_of_primes(4) << endl;
	std::cout << has_sum_of_primes(9) << endl;
	std::cout << has_sum_of_primes(30) << endl;

	std::cout << "Ex19 test" << endl;
	std::cout << sum_of_all_digit_until_1(999999999999) << endl;

	std::cout << "Ex20 test" << endl;
	multiplied_primes(225);
	multiplied_primes(31668);

	std::cout << "Ex21 test" << endl;
	std::cout << sorted_num(836051241) << endl;
	std::cout << sorted_num(9283821) << endl;
	std::cout << sorted_num(6342) << endl;
}
//zad1
int sum(int a, int b) {

	return (a + b);
}

//zad2
bool isEven(int num) {


	return (num % 2 == 0) ? true : false;

}

//zad 3
bool isPositive(int num) {

	return (num > 0) ? true : false;

}

bool isNegative(int num) {
	return (num < 0) ? true : false;
}

//zad4
int abs(int num) {
	return (num < 0) ? num * (-1) : num;
}

double fabs(double num) {
	return (num < 0) ? num * (-1) : num;
}


//zad5

void print(char s, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << s << " " << endl;
	}
}


//zad6

bool isCapitalLetter(char s) {

	return (s >= 65 && s <= 90) ? true : false;

}
bool checkSymbol(char s) {

	return ((s >= 65 && s <= 90) || (s >= 97 && s <= 122)) ? true : false;

}


//zad7
//грешно условие ?!
//to_lower логично би трябвало да прави главните букви малки,а
//to_upper обратното!!!

char to_lower(char ch) {
	return(ch >= 65 && ch <= 90) ? char(ch + 32) : ch;
}

char to_upper(char ch) {
	return(ch >= 97 && ch <= 122) ? char(ch - 32) : ch;
}

//zad8

int num_length(int n) {
	int length = 0;

	while (n != 0) {
		n /= 10;
		length++;
	}

	return length;

}

//zad9

int index_of_mun(int n, int k) {

	int length = 0;
	int divisor = 1;
	int num = n;
	while (num != 0) {
		num /= 10;
		length++;
		divisor *= 10;
	}

	if (length < k) {
		std::cout << "Out of bounds";
		return 0;
	}
	else {
		for (int position = 0; position <= length; position++)
		{
			int last_digit = n / divisor;
			n %= divisor;
			divisor /= 10;

			if (position == k) {
				return last_digit;
			}
		}
	}




}


//zad10

void has_sqrt(int number) {
	int a = -1;
	int num_save = number;
	int counter = 0;
	while (number > 0) {

		a += 2;
		number -= a;
		counter++;

	}
	std::cout << num_save;
	if (number == 0) {
		std::cout << " - yes (" << counter << "^2)" << endl;

	}
	else {
		std::cout << " - no (?^2)" << endl;

	}

}


//zad11

int least_common_multiple_of_3_numbers(int num1, int num2, int num3) {

	int lcm = 2;

	while (true) {

		if ((num1 % lcm == 0) && (num2 % lcm == 0) && (num3 % lcm == 0)) {
			return lcm;
		}
		lcm++;
	}



}


//zad12

int concat(int first, int second) {

	int save_sec = second;

	while (save_sec != 0) {
		save_sec /= 10;
		first *= 10;

	}

	return first + second;


}

//zad13

int aksUser(int from, int to) {

	int n;
	std::cin >> n;
	while (!(n >= from && n <= to)) {

		cin >> n;

	}
	return n;
}

//zad14
int pow(int num, unsigned n) {
	n--;
	while (n != 0) {
		num *= num;
		n--;
	}
	return num;
}

//zad15

double calculate(int a, int b, char action) {

	switch (action)
	{
	case'+':
	default:
		return a + b;

	case'-':
		return a - b;

	case'*':
		return a * b;

	case'/':

		return (double)a / b;;

	case'%':
		return a % b;


	}
}


//zad16
int greatest_common_divisor_of_4_numbers(int a, int b, int c, int d) {

	int first = (a >= b) ? a : b;
	int sec = (c >= d) ? c : d;

	int gcd = (first >= sec) ? first : sec;

	while (true) {

		if ((a % gcd == 0) && (b % gcd == 0) && (c % gcd == 0) && (d % gcd == 0)) {
			return gcd;
		}
		gcd--;
	}



}

//zad17

int pow2_num_closest_to_n(int n) {

	int high_pow_num = 1;

	while (high_pow_num < n) {
		high_pow_num *= 2;
	}
	int low_pow_num = high_pow_num / 2;


	if (n - low_pow_num < high_pow_num - n) {
		return low_pow_num;
	}
	else
	{
		return high_pow_num;
	}


}


//zad18
//a)
bool is_prime_num(int number) {
	int count = 0;
	for (int divisor = 1; divisor <= number; divisor++)
	{
		if (number % divisor == 0)
		{
			count++;
		}
	}

	if (count == 2) {
		return true;
	}
	else
	{
		return false;
	}

}

//b)

void print_prime_numbers(int to) {

	for (int i = 1; i <= to; i++)
	{
		if (is_prime_num(i))
		{
			std::cout << i << endl;
		}
	}

}

//c)

bool has_sum_of_primes(int number) {

	for (int i = 1; i <= number; i++)
	{
		if (is_prime_num(i))
		{
			if (is_prime_num(number - i))
			{
				cout << i << " + " << number - i << " = " << number << endl;
				return true;
			}
		}
	}
	return false;
}

//zad19

int sum_of_all_digit_until_1(long long number) {

LOOP_START:
	int sum = 0;
	while (number != 0) {

		int last_gigit = number % 10;
		sum += last_gigit;
		number /= 10;

	}
	number = sum;
	if (number > 9) {
		goto LOOP_START;
	}
	else
	{
		return number;
	}


}

//zad20
void multiplied_primes(int number) {

	int i = 2;
	while (number != 1) {
	REPEAT:
		if (number % i == 0)
		{
			number /= i;
			std::cout << i;
			if (number == 1)
			{
				break;
			}
			else {
				std::cout << ".";
			}

			goto REPEAT;
		}
		else
		{
			i++;
		}

	}
	std::cout << endl;
}

//zad21
int sorted_num(long long number) {
	int new_num = 0;

	for (int digit = 0; digit < 9; digit++)
	{
		for (int temp = number; temp > 0; temp /= 10)
		{
			if (temp % 10 == digit)
			{
				new_num *= 10;
				new_num += digit;
			}
		}
	}

	return new_num;


}
