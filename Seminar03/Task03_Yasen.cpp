// Task03_Yasen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//1
	/*int n; cin >> n;
	int res = 1;
	while (n != 0)
	{
		res *= n--;
	}
	cout << res;*/

	//2
	/*int min, max;
	cin >> min >> max;
	if(min<0 || max>250)
	{
		cout<<"Invalid codes";
		return;
	}
	for (int i = min; i <= max; i++)
	{
		cout << i << " - - > " << (char)i<<endl;
	}*/

	//3
	/*int num; cin >> num;
	int x = 1; int y = num-x;
	while (true)
	{
		if (x >= num || y<0) break;
		if (x + y == num)
		{
			cout << "x = " << x << ", y = " << y << endl;
		}
		x++;
		y--;
	}*/

	//4
	/*int n; cin >> n;
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	cout << sum;*/

	//5
	/*int n; cin >> n;
	int pow = n * n;
	int reversed = 0;
	while (pow != 0)
	{
		reversed *= 10;
		reversed += pow % 10;
		pow /= 10;
	}
	cout << reversed;*/

	//6
	/*int m, n; cin >> m >> n;
	int c = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<c++ << " ";
		}
		cout << endl;
	}*/

	//7
	/*for (int i = 100; i < 1000; i++)
	{
		int cpy = i;
		int sum = 0;
		while (cpy != 0) {
			sum += (cpy % 10);
			cpy /= 10;
		}
		if (sum / 10) cout << i<<endl;
	}*/

	//8
	/*int n; cin >> n;
	int f = 0;
	int s = 1;
	while (n != 0)
	{
		cout << f<<" "<<s << " ";
		f = f + s;
		s = f + s;
		n-=2;
	}*/

	//9
	/*int n, m; cin >> n >> m;
	int sum = 0;
	for (int i = n; i <= m; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) sum += i;
	}
	cout << sum;*/

	//10
	/*int n; cin >> n;
	int sum = 0;
	int a;
	for (int i = 0; i < n-1; i++)
	{
		cin >> a;
		sum += a;
	}
	int all = 0;
	for (int i = 1; i <= n; i++)
	{
		all += i;
	}
	cout << all - sum;*/

	//11
	/*do
	{
		int n; cin >> n;
		int cpy = n;
		int sum = 0;
		while (n != 0)
		{
			sum += (n % 10);
			n /= 10;
		}
		sum += cpy;
		if (sum % 10==0)
		{
			cout << "Good!";
			break;
		}
		cout << "Try again!"<<endl;
	} while (true);*/

	//12
	/*int n; cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (sum + i);
	}
	cout << sum;*/

	//13

	//16
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
	
	//17
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

	//19
	/*int n; cin >> n;
	for (int i =1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "$";
		}
		cout << endl;
	}*/


}
