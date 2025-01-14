
#include <iostream>
using namespace std;

//1 
void my_swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//2
void toUpper(char& ch) {
	if (ch >= 'a' && ch <= 'z') {
		ch -=  ('a' - 'A');
	}
}

void toLower(char& ch) {
	if (ch >= 'A' && ch <= 'Z') {
		ch += ('a' - 'A');
	}
}

//3
void sort3(int& min, int& mid, int& max) {
	
	if (min > mid) {
		my_swap(min, mid);
	}
	
	if (mid > max) {
		my_swap(mid, max);
	}
	
	if (min > mid) {
		my_swap(min, mid);
	}
}

//4
void validAgeFN(int& age, int& facultyNumber) {
	
	
	if (age < 15) {
		age = 15;
	}

	else if (age > 100) {
		age = 100;
	}

	if (facultyNumber < 10000) {
		facultyNumber = 10000;
	}

	else if (facultyNumber > 99999) {
		facultyNumber = 99999;
	}
}

//5
int gcd(int a, int b)
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void simplify(int& numerator, int& denominator) {
	int divisor = gcd(numerator, denominator);
	numerator /= divisor;
	denominator /= divisor;
}

//6
int count_digits(int number)  {
	int count = 0;
	while (number > 0) {
		number /= 10;
		count++;
	}
	return count;
}

int my_pow(int base, int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}

int get_kth_digit(int number, int k) {
	int total_digits = count_digits(number);
	int target_position = total_digits - k + 1; 

	int divisor = my_pow(10, target_position - 1);
	return (number / divisor) % 10;
}

int replace_kth_digit(int number, int k, int new_digit) {
	int total_digits = count_digits(number);
	int target_position = total_digits - k + 1; 

	int divisor = my_pow(10, target_position - 1);
	int current_digit = (number / divisor) % 10;

	number -= current_digit * divisor;

	number += new_digit * divisor;

	return number;
}

void swapKthDigit(int& num1, int& num2, int k) {
	
	int digits1 = count_digits(num1);
	int digits2 = count_digits(num2);

	int digit1 = get_kth_digit(num1, k);
	int digit2 = get_kth_digit(num2, k);

	num1 = replace_kth_digit(num1, k, digit2);
	num2 = replace_kth_digit(num2, k, digit1);
}

//7

void split_number(int number, int& part1, int& part2) {
	int num_digits = count_digits(number);
	int half_digits = num_digits / 2;

	int divisor = 1;
	for (int i = 0; i <  half_digits ; i++) {
		divisor *= 10;
	}

	part1 = number / divisor;  
	part2 = number % divisor; 
	
}

//8
void calculate_end_time(int start_hour, int start_minute, int duration, int& end_hour, int& end_minute) {
	int total_minutes = start_hour * 60 + start_minute + duration;
	end_hour = total_minutes / 60;
	end_minute = total_minutes % 60;

	if (end_hour >= 24) {
		end_hour -= 24;
	}
}

void find_latest_show(int n) {
	int latest_hour = 0, latest_minute = 0;

	for (int i = 0; i < n; ++i) {
		int start_hour, start_minute, duration;
		cin >> start_hour >> start_minute >> duration;

		int end_hour, end_minute;
		calculate_end_time(start_hour, start_minute, duration, end_hour, end_minute);

		if (end_hour > latest_hour || (end_hour == latest_hour && end_minute > latest_minute)) {
			latest_hour = end_hour;
			latest_minute = end_minute;
		}
	}

	cout << latest_hour << " " << latest_minute << endl;
}

//9 x
bool isPrime(int num) {
	
	if (num < 2){ 
		return false;
	}

	for (int i = 2; (i ^ 2) <= num; i++) {
		
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int count_prime_divisors(int num) {
	int count = 0;

	for (int i = 2; i <= num; i++) {
		if (num % i == 0 && isPrime(i)) {
			count++;
			while (num % i == 0) {
				num /= i;
			}
		}
	}

	return count;
}

//10

void move_last_k_digits(int a, int b, int k, int& result) {
	int divisor = my_pow(10, k);
	int last_k_digits = a % divisor;
	a /= divisor;
	result = last_k_digits * my_pow(10, count_digits(b)) + b;
}

//11

bool isLeapYear(unsigned year) {
	return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int days_in_month(unsigned month, unsigned year) {
	if (month == 2) {
		return isLeapYear(year) ? 29 : 28;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	return 31;
}

void next_day(int& day, int& month, int& year) {
	day++;
	
	if (day > days_in_month(month, year)) {
		day = 1;
		month++;
		
		if (month > 12) {
			month = 1;
			year++;
		}
	}
}

void find_date_after_n_days(int day, int month, int year, int n) {
	
	for (int i = 0; i < n; ++i) {
		next_day(day, month, year);
	}
	cout << day << " " << month << " " << year << endl;
}

int main()
{
	//1

	//int a, b;
	//cin >> a >> b;
	//my_swap(a, b);
	//cout << a << ' ' << b << endl;
	
	//2
	
	//char ch;
	//cin >> ch;
	//toUpper(ch);
	//toLower(ch);
	//cout << ch;

	//3 
	
	// int min; int mid; int max;
	//cin >> min >> mid >> max;
	//sort3(min, mid, max);
	//cout << min << ' ' << mid << ' ' << max;

	//4
	
	//int age, facultyNumber;
	//cin >> age >> facultyNumber;
	//validAgeFN(age, facultyNumber);
	//cout << age << ' ' << facultyNumber << endl;

	//5
	
	//int numerator, denominator;
	//cin >> numerator >> denominator;
	//simplify(numerator, denominator);
	//cout << numerator << ' ' << denominator << endl;
	//6

	//6
	
	//int n, m, k;
	//cin >> n >> m >> k;
	//swapKthDigit(n, m, k);
	//cout << n << ' '<< m;
	
	//7

	//int number, part1, part2;
	//cin >> number;
	//split_number(number, part1, part2);
	//cout << part1 << " " << part2 <<endl;

	//8
	
	//int n;
	//cin >> n;
	//find_latest_show(n);
	
	//9
	
	//int a=19,b=32,k=3, 
	//cin >> a >> b >> k;
	
	//10
	
	//int a, b , k , result;
	//cin >> a >> b >> k;
	//move_last_k_digits(a, b, k, result);
	//cout << result << std::endl;

	//11

	int day, month, year, n;
	cin >> day >> month >> year >> n;
	find_date_after_n_days(day, month, year, n);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
