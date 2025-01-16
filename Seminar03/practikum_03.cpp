
#include <iostream>
using namespace std;
int main() {

	//zad1
	  /*int N;
	  cin >> N;
	  int factorial = 1;

	  if(N > 0){

	  for (int i = 1; i <= N; i++) {
		  factorial *= i;
	    }

        cout << "Factorial: " << factorial;
	  } else{

	  cout<< "Invalid input.";
	  }
	*/

	  //zad2
	  /*int n, m;
	  cout << "Start: ";
	  cin >> n;
	  cout << endl << "End: ";
	  cin >> m;
	  char letter;
	  bool areValidNumbers = n >= 0 && n <= 255 && m >= 0 && m <= 255;

	  if (areValidNumbers) {

		  for (int i = n; i <= m; i++) {
		  letter = i;
		  cout << i << " --> " << letter << endl;
			  }
			}
	  else {
		  cout << "Invalid codes!";
	  }*/

	  //zad3
	  /*int n;
	  cin >> n;
	  int y = 0;

	  for (int x = 1; x < n; x++) {
		  y = n - x;
		  cout << "x = " << x << ", y = " << y << endl;
	  }*/

	  //zad4
	  /*long long n;
	  cin >> n;
	  int sum = 0;
	  int currentDigit = 0;

	  while (n>0) {
		   currentDigit = n % 10;
		  sum += currentDigit;
		  n /= 10;
	  }

	  while (sum >= 10) {
		  int newNumber = sum;
		  sum = 0;
		  currentDigit = 0;

		  while(newNumber > 0){
			  currentDigit = newNumber % 10;
			  sum += currentDigit;
			  newNumber /= 10;
		  }
	  }
	  cout << sum;*/

	//zad5
	/*int n;
	cin >> n;
	int sqr = 1;
	if (n > 0) {
		sqr = n * n;

		while (sqr > 0) {
			int currentDigit = sqr % 10;
			sqr /= 10;

			if (currentDigit != 0) {
				cout << currentDigit;
			}
			else {
				continue;
			}
		}
	 }
	 else {
	 	cout << "Invalid number.";
	 }*/

	//zad6
	/*int m, n;
	cin >> m >> n;
	int currentNumber = 1;
	bool arePositive = m > 0 && n > 0;

	if (arePositive) {
         for (int i = 0; i < m; i++) {
         
         		for (int j = 1; j <= n; j++) {
         			cout << currentNumber << " ";
         			currentNumber ++;
         		}
         		cout << endl;
         	}
	}
	else {
		cout << "Invalid numbers.";
	}*/
	

	//zad7
	/*int hundreds, tens, ones;
	int sumOfDigits = 0;
	int sumOfNumbers = 0;

	for (int number = 100; number < 1000; number++) {

		 hundreds = number / 100;
		 tens = (number % 100) / 10;
		 ones = number % 10;
		 sumOfDigits = hundreds + tens + ones;

		 if (sumOfDigits >= 10) {
		 int divisorCount = 0;

		 for (int j = 1; j <= sumOfDigits; j++) {
			 if (sumOfDigits % j == 0) {
				 divisorCount++;
			  }
		  }

		 if (divisorCount < 3) {
			 sumOfNumbers += number;
		 }

		}
	}

	cout << sumOfNumbers;*/

	//zad8
	/*int n;
	 cin >> n;

	 int fibonacciNumbersCount = 2;
	 int first = 0;
	 int second = 1;

	 if (n == 1) {
		cout << first;
	 }
	 else if (n == 2) {
		cout << second;
	 }
	 else {

		cout << first << " " << second << " ";

		while (fibonacciNumbersCount < n) {
			int third = first + second;
			first = second;
			second = third;
			cout << third << " ";
			fibonacciNumbersCount++;
		}
	 }*/

	 //zad9
	 /*int N, M;
	 cin >> N >> M;
	 int sum = 0;
	 bool arePositive = N > 0 && M > 0;

	if (arePositive) {
	 for (int i = N; i <= M; i++) {
		int divisorCount = 0;

		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				divisorCount++;
			}
		}

		if (divisorCount < 3) {
			sum += i;
		}
	 }
	 cout << "Sum of primes: " << sum;
	 } else{
	 cout << "Invalid numbers.";
	 */

	 //zad10
	 /*int N;
	 cin >> N;
	 int sum = 0;
	 int sumOfAll = 0;

	 for (int i = 0; i < N - 1; i++) {
		 int num;
		 cin >> num;
		 cout << endl;
		 sum += num;
	 }
	 for (int i = 1; i <= N; i++) {
		 sumOfAll += i;
	 }
	 int missingNum = sumOfAll - sum;
	 cout << missingNum;*/

	 //zad11
	 /*while (true) {
		int num;
		cin >> num;
		int temp = num;
		int sumOfDigits = 0;

		while (temp > 0) {
			int currentDigit = temp % 10;
			sumOfDigits += currentDigit;
			temp /= 10;
		}

		int endSum = num + sumOfDigits;

		if (endSum % 10 != 0) {
			cout << "Bad number - " << endSum << " is not divisible by 10.";
			continue;
		}
		else {
			cout << "End of program - " << endSum << " is divisible by 10.";
			break;
		}
	 }*/

	 //zad12
	 /*int N;
	 cin >> N;
	 int finalSum = 0;
	  int sumParticle = 0;
	 for (int i = 1; i <= N; i++) {
			sumParticle = 0;
		 for (int j = 1; j <= i; j++) {
			 sumParticle += j;
		 }
		 finalSum += sumParticle;
	 }
	 cout << finalSum;*/

	 //zad13
	 /*int hr1, hr2, min1, min2;
	 cin >> hr1 ;
	 cout << ":";
	 cin >> min1;
	 cin >> hr2;
	 cout << ":";
	 cin >> min2;

	 bool areValidTimes = hr1 >= 0 && hr1<=24 && hr2 >= 0 && hr2<=24 && min1>=0 && min1<=59 && min2>=0 && min2<=59;

	 if(arweValidTimes){

	 if (hr1 > hr2 || (hr1 == hr2 && min1 > min2)) {
		 int tempH = hr1;
		 hr1 = hr2;
		 hr2 = tempH;
		 int tempM = min1;
		 min1 = min2;
		 min2 = tempM;
	 }

	 while (hr1 < hr2 || (hr1 == hr2 && min1 < (min2 - 1))) {
		  min1++;

		 if (min1 == 60) {
			 min1 = 0;
			 hr1++;
		 }

		 if (hr1 == 24) {
			 hr1 = 0;
		 }

		 if (min1 < 10 && hr1 > 10) {
			 cout << hr1 << ":0" << min1 << endl;
		 }
		 else if (min1 > 10 && hr1 < 10) {
			 cout << "0" << hr1 << ":" << min1 << endl;
		 }
		 else if (min1 < 10 && hr1 < 10) {
			 cout << "0" << hr1 << ":0" << min1 << endl;
		 }
		 else {
			 cout << hr1 << ":" << min1 << endl;
		 }
	 }
	 } else{
	 cout<< "Invalid input.";*/

	   //zad14
	   /*int N;
	   cin >> N;
	   
	   int num;
	   cin >> num;
	   int sum = 0;
	   while (num != -1) {
	   	 cin >> num;
	   
	   	 if (num > 0) {
	   
	   		 int max = 0;
	   		 int min = 0;
	   		 if (num > N) {
	   			 max = num;
	   			 min = N;
	   
	   		 }
	   		 else {
	   			 max = N;
	   			 min = num;
	   		 }
	   		 int commonDivisorsCount = 0;
	   		 for (int i = 1; i <= min; i++) {
	   			 if (min % i == 0) {
	   				 if (max % i == 0) {
	   					 commonDivisorsCount++;
	   				 }
	   			 }
	   		 }
	   
	   		 if (commonDivisorsCount == 1) {
	   			 if (min == N) {
	   				 sum += max;
	   			 }
	   			 else {
	   				 sum += min;
	   			 }
	   		 }
	   	 }
	   	 else {
	   		 cout << "Invalid number";
	   		 break;
	   	 }
	   }
	   cout << sum;*/

	   
	   //zad15 
	   /*int N;
	   cin >> N;
	   
	   bool pythagoreanTh;
	   bool isValidTriangle;
	   for (int a = 1; a <= N; a++) {
	   
	   	 for (int b = a; b <= N; b++) {
	   
	   		 for (int c = 1; c <= N; c++) {
	   
	   			 pythagoreanTh = (a * a + b * b) == c * c;
	   			 isValidTriangle = a + b > c && a + c > b && b + c > a;
	   
	   			 if (pythagoreanTh && isValidTriangle) {
	   				 cout << a << " " << b << " " << c << endl;
	   			 }
	   		 }
	   	 }
	   }*/
	   

	   //zad16
	   /*int m, n;
	   cin >> m >> n;
	   bool arePositive = m > 0 && n > 0;
	   if(arePositive){
	   for (int i = m; i <= n; i++) {
		   int sum = 0;
		   for (int j = 1; j < i; j++) {
			   if (i % j == 0) {
				   sum += j;
			   }
		   }
		   if (sum == i) {
			   cout << i << " ";
		   }
	   }
	   } else{
	   cout << "Invalid numbers.";
	   }
	   */


	   //zad18
	   /*int K, N, M;
	   cin >> K >> N >> M;

	   if (K > 0) {
		   bool isSpecialNumber = true;

		   for (int i = N; i <= M; i++) {

			   int temp = i;
			   while (temp > 0) {
				   int currentDigit = temp % 10;

				   if (currentDigit != 0) {
					   if (K % currentDigit != 0) {
						   isSpecialNumber = false;
						   break;
					   }
					   else {
						   isSpecialNumber = true;
					   }
				   }
				   else {
					   isSpecialNumber = false;
					   break;
				   }
				   temp /= 10;
			   }

			   if (isSpecialNumber) {
				   cout << i << " ";
			   }
		   }
	   }
	   else {
		   cout << "Invalid input for K.";
	   } */

	   //zad19
	   /*int n;
	   cin >> n;
	   
	   if(n > 0){
	   
	   for (int i = 1; i <= n; i++) {
	    for (int j = 1; j <= i; j++) {
	     cout << "$";
	    }
	    cout << endl;
	   }
	   } else{
	   cout << "Invalid number.";
	   }*/

		 //zad20
	     int n;
	     cin >> n;
	     int spaceCount;

		 if(n > 0){
	     for (int i = 1; i <= n; i++) {
	     
	     	for (int j = 1; j <= i; j++) {
	     		cout << j << " ";
	     	}
	     
	          spaceCount = 5 * n - 4 * i;
	     
	     	for (int k = 1; k <= spaceCount; k++) {
	     		if (i == n) {
	     			cout << "-";
	     		}
	     		else {
	     		cout << " ";
	     		}
	     	}
	     
	     	for (int t = i; t >= 1; t--) {
	     		cout << " " << t;
	     	}
	     
	     	cout << endl;
	     }
	     
	     int remainingLines = n - 1;
	     for (int i = remainingLines; i >= 1; i--) {
	     
	     	for(int j = 1; j <= i; j++) {
	     		cout << j << " ";
	     	}
	     
	     	spaceCount = 5 * n - 4 * i;
	     	for (int k = 1; k <= spaceCount; k++) {
	     		cout << " ";
	     	}
	     
	     	for (int t = i; t >= 1; t--) {
	     		cout << " " << t;
	     	}
	     	cout << endl;
	     }
		 }
		 else {
			 cout << "Invalid number.";
		 }

	return 0;

}
