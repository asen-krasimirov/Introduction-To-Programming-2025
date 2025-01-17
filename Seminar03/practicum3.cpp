// practicum3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
 //purva zadacha

		/*int factorial = 0;
		while (true)
		{
			int n;
			cin >> n;
			if (n < 0)
			{
				break;
			}
			factorial = n * (n-1);
			cout << factorial;
			return 0;
		}*/


 //vtora

		/*int n;
		int m;
		cout << "Start: ";
		cin >> n;
		cout << "End: ";
		cin >> m;
		if ((n < 0) || (n > 255) && (m < 0)|| (m > 255))
		{
			cout << "Doesn't exist!";
		}
		else
		{
			for(int i = n; i <= m; i++)
			{
				cout << (int)i << " --> " << (char)i << endl;
			}
		}*/

 //treta

		/*int n;
		cin >> n;
		for (int x = 1; x < n; x++)
		{
			int y = n - x;
			cout << "x = " << x << ", y = " << y << endl;
		}*/


 //chetvurta purva chast

		// '%' deli i vzima ostatuka
		//while trqbwa da e izpylneno koga shte vleze

		/*int number;
		cin >> number;
		int sum = 0;
		while (number != 0)
		{
			sum += number % 10;
			number /= 10;
		}
		cout << sum;*/

 //chetvurta vtora chast

		//int number;
		/*cin >> number;
		int sum = 0;
		while(true)
		{
			while (number != 0)
			{
				sum += number % 10;
				number /= 10;
			}
			if (sum < 10) break;
			number = sum;
			sum = 0;
		}
		cout << sum;*/

 //peta
		/*int n;
		cin >> n;
		n = n * n;
		bool secondDigit = false;
		while(n != 0)
		{
			int digit = n % 10;
			n /= 10;
			if (digit == 0 && !secondDigit) continue;
			cout << digit;
			secondDigit = true;*/
			/*}*/
 
 //shesta

		/*int m, n;
		cin >> m;
		cin >> n;
		for (int i = 1; i <= m*n; i++)
		{
			cout << i << ' ';
			if (i % n == 0)
			{
				cout << endl;
			}
		}*/

 // Nachin za prosto chislo
		/*int n;
		cin >> n;
		bool isPrime = true;
		if(n == 1)
		{
			isPrime = false;
		}
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				isPrime = false;
			}
		}
		cout << isPrime;*/

//Vtori nachin za prosto chislo
		/*int n;
		cin >> n;
		bool isPrime = true;
		if (n == 1) isPrime = false;
		else if (n == 2) isPrime = true;
		else
		{
			int limit = sqrt(n);
			for(int i = 2; i <= limit;i++)
			{
				if(n % i == 0)
				{
					isPrime = false;
					break;
				}
			}
		}
		cout << isPrime;*/

 //sedma
		/*int totalSum = 0;
		for (int n = 100; n < 1000; n++)
		{
			int sum = 0;
			int loopN = n;
			while (loopN != 0)
			{
				int digit = loopN % 10;
				sum += digit;
				loopN /= 10;
			}
			if (sum >= 10)
			{
				bool isPrime = true;
				for (int i = 2; i <= sqrt(sum); i++)
				{
					if (sum % i == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime)
				{
					totalSum += n;
				}
			}
		}
	    cout << totalSum;*/

//osma
		/*int n;
		cin >> n;
		int firstNum = 0;
		int secondNum = 1;
		for (int i = 1; i < n + 1; i++)
		{
			cout << firstNum << ' ';
			int fibonaciNum = firstNum + secondNum;
			firstNum = secondNum;
			secondNum = fibonaciNum;
		}*/
		

// deveta 
		///*int N, M;
		//cin >> N >> M;
		//int result = 0;
		//if (N < M)
		//{
		//	for (int i = N; i < M+1; i++)
		//	{
		//		bool isPrime = true;
		//		for (int j = 2; j <= sqrt(i); j++)
		//		{
		//			if (i % j == 0)
		//			{
		//				isPrime = false;
		//				break;
		//			}
		//		}
		//		if (isPrime == true)
		//		{
		//			result += i;
		//		}
		//	}
		//}
		//else { cout << "Invalid!"; }
		//cout << result;*/

//deseta
		/*int N;
		cin >> N;
		int sum = 0;
		int missSum = 0;
		sum = N * (N + 1) / 2;
		int missNum = 0;
		for (int i = 0; i < N-1; i++)
		{
			int number;
			cin >> number;
			missSum += number;
		}
		missNum = sum - missSum;

		cout << missNum;*/

//edinadeseta
		/*int num;
		cin >> num;
		int number = num;
		int result = 0;
		while (num != 0)
		{
			result += num % 10;
			num /= 10;
		}
		int sum = number + result;
		if (sum % 10 != 0)
		{
			cout << "Invalid";
		}
		cout << "End";*/

// dvanadeseta
		/*int N;
		cin >> N;
		int sum = 0;
		for (int i = 0; i <= N; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				sum += j;
			}
		}
		cout << sum;*/

//chetirinadeseta
		/*int N;
		cin >> N;
		int num = N;
		int number;
		int sum = 0;
		while (N > 0)
		{
			cin >> number;
			
			if (number == -1)
			{
				break;
			}
			while (number != 0)
			{
				int temp = number;
				number =  N % number;
				N = temp;
				
			}
			if (number > 0 && N == 1)
			{
				sum += number;
			}
		}
		cout << num << " " << sum;*/

// shestnaista 
	/*int n, m; cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		int cpy = i;
		int sum = 0;
		while (cpy != 0)
		{
			sum += cpy % 10;
			cpy /= 10;
		}
		if (sum == i) cout << i << endl;
	}*/

	//sedemnaista
	/*int n; cin >> n;
	int a, b;
	int current = INT_MIN;
	bool flag;
	for (int i = 0; i < 2*n; i++)
	{
		cin >> a >> b;
		if(current==INT_MIN) current = a + b;
		else if (current != a + b)
		{
			flag = false;
		}
	}*/
			;

}

