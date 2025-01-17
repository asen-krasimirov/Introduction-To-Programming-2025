#include <iostream>

using namespace std;

//Purva
	void swap(int& num1, int& num2)
	{
		/*int numRef = num1;
		num1 = num2;
		num2 = numRef;*/
		num1 = num1 + num2;
		num2 = num1 - num2; 
		num1 = num1 - num2;
	}

//Vtora

	void toUpper(char& letter)
	{
		if (letter >= 'a' && letter <= 'z')
		{
			letter = letter - ('a' - 'A');			
		}
		else 
		{
			std::cout << "Nevaliden simvol - ";
		}	
	}	

//treta

	void sort3(int& min, int& mid, int& max)
	{
		if (min > max) swap(min, max);
		if (mid < min) swap(min, mid);
		if (mid > max) swap(mid, max);
	}
		
//chetvurta
	void Year(int& year)
	{
		if (year < 15 || year > 100)
		{
			year = 15;
		}
	}
	void FacultyNumber(int& facultyNumber) 
	{
		if (facultyNumber < 10000 || facultyNumber> 99999)
		{
			facultyNumber = 10000;
		}
	}
		

//peta
	int gcd(int a, int b)
	{
		if (a < b)
		{
			int c = a;
			a = b;
			b = c;
		}
		for (int i = a; i > 1; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				return i;
			}
		}
	}
	void commonFraction(int& a, int& b)
	{
		int saveGcd = gcd(a, b);
		a /= saveGcd;
		b /= saveGcd;
	}
		
//shesta
		
	int numberLength(int n)
	{
		int result = 0;
		while(n != 0)
		{
			n /= 10;
			result++;
		}
		return result;
	}
	int myPow(int n, int k)
	{
		int result = 1;
		for (int i = 0; i < k; i++)
		{
			result *= n;
		}
		return result;
	}
	void swapDigits(int& n, int& m, int k)
	{
		int digitN = (int)(n / myPow(10, numberLength(n) - k)) % 10;
		int digitM = (int)(m / myPow(10, numberLength(m) - k)) % 10;
		n = n - (digitN * myPow(10, numberLength(n) - k)) + (digitM * myPow(10, numberLength(n) - k));
		m = m - (digitM * myPow(10, numberLength(m) - k)) + (digitN * myPow(10, numberLength(m) - k));
			
	}

//sedma

	void splitNumber(int n)
	{
		int nLength = numberLength(n);
		int a = (n / (myPow(10, nLength / 2)));
		int b = (n % (myPow(10, nLength / 2)));
		std::cout << a << " " << b;

	}
		
//osma
	int primeNumberCount(int n)
	{
		int result = 0;
		for(int i = 2; i <= n; i++)
		{
			if(n % i == 0)
			{
				result++;
				n /= i;
				while (n % i == 0)
				{
					n /= i;
				}
			}
		}
		return result;
	}
	void checkNumberInterval(int& a, int& b, int k)
	{
		int minNum = a;
		int maxNum = a;
		for(int i = a; i <= b; i++)
		{
			if(primeNumberCount(i) == k)
			{
				if(i < minNum)
				{
					minNum = i;
				}
				else if(i > maxNum)
				{
					maxNum = i;
				}
			}
		}
		a = minNum;
		b = maxNum;
	}
		
//deseta
	void transferLastNum(int& a, int& b, int k) 
	{
		int divisor = 1;
		for (int i = 0; i < k; ++i) 
		{
			divisor *= 10; 
		}

		int lastnum = a % divisor;  
		a /= divisor;  

		int num1 = 1;
		int tempB = b;
		while (tempB > 0) 
		{
			tempB /= 10;
			num1 *= 10;  
		}

		b = lastnum * num1 + b;
	}

//edinadeset
	bool isLeapYear(unsigned year) 
	{
		return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
	}
	unsigned daysInMonth(unsigned month, unsigned year) 
	{
		switch (month) 
		{
			case 1:
			case 3: 
			case 5:
			case 7: 
			case 8: 
			case 10:
			case 12: 
				return 31;
			case 4:
			case 6: 
			case 9: 
			case 11:
				return 30;
			case 2: 
				return isLeapYear(year) ? 29 : 28;
				default: return 0;
		}
	}
	bool isValidDate(unsigned day, unsigned month, unsigned year) 
	{
		return month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth(month, year);
	}
	void nextDay(unsigned& day, unsigned& month, unsigned& year)
	{
		if (!isValidDate(day, month, year)) 
		{
			cout << "Invalid!" << endl;
			return;
		}
		day++;

		if (day > daysInMonth(month, year))
		{
			day = 1;
			month++;

			
			if (month > 12) 
			{
				month = 1;
				year++;
			}
		}
	}
	void dateAfterNDays(unsigned& day, unsigned& month, unsigned& year, unsigned n) 
	{
		for (unsigned i = 0; i < n; ++i)
		{
			nextDay(day, month, year);
		}
	}


int main()
{

}
