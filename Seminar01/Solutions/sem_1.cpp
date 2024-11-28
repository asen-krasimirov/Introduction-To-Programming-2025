
#include <iostream>
using namespace std;
int main()
{
	//zad1
  //cout << "Oh what"<<endl<<"a happy day!"<<endl<<"Oh yes,"<<endl<<"what a happy day!";

	//zad2
	/*double a = 5.4;
	double b = 7.9;
	double p = 2 * (a + b);
	double s = a * b;
	cout << p << endl;
	cout << s;*/

	//zad3
	/*double lv;
	cin >> lv;
	double eur = 0.51 * lv;
	double dollar = 0.56 * lv;
	cout << eur << endl << dollar;*/

	//zad4
	/*double a, b;
	cout << "Please enter the length of the first side: ";
	cin >> a;
	cout << "Please enter the length of the second side: ";
		cin >> b;
		double p = 2 * (a + b);
		double s = a * b;
		cout << "Perimeter: " << p << endl;
		cout << "Surface: " << s;*/

		//zad5
		/*int a, b;
		cin >> a >> b;
		bool isAbigger = a - b > 0;
		cout << boolalpha << isAbigger;
		*/

		//zad6
		/*int a, b;
		cout << "Dividend: ";
		cin >> a;
		cout << "Divisor: ";
		cin >> b;
		cout << "The quotient of the division is : " << a / b << endl;
		cout << "The remainder of the division is : " << a % b;*/

		//zad7
		/*int apples, pears, bananas;
		cout << "Apples: ";
		cin >> apples;
		cout << "Pears: ";
		cin >> pears;
		cout << "Bananas: ";
		cin >> bananas;
		cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas<<" bananas!";*/

		//zad8
		/*double r;
		double PI = 3.14159265;
		cout << "r = ";
		cin >> r;
		double C = 2 * r * PI;
		double S = r *r * PI;
		cout << "C = " << C<<endl;
		cout << "S = " << S;*/

		//zad9
		/*int a, b, c;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;
		int D = b * b - 4 * a * c;
		int x1 = (-b + sqrt(D)) / 2 * a;
		int x2 = (-b - sqrt(D)) / 2 * a;
		cout << "x1 = " << x1 << ", x2 = " << x2;*/

		//zad10_sDopulnitelna
		/*int a, b;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		int c == a;
		a == b;
		b == c;
		cout <<"a = "<< a << endl <<"b = "<< b;*/

		//zad10_bezDopulnitelna
		/*int a, b;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		swap(a,b);
		cout << "a = " << a << endl << "b = " << b;*/

		//zad11
	    /*int a, b;
	    cout << "a = ";
	    cin >> a;
	    cout << "b = ";
	    cin >> b;
	    bool isAsmaller = a < b;//0 or 1
	    cout << isAsmaller * a + !isAsmaller * b;*/

        //zad12
        /*int seconds;
        cin >> seconds;
        int days = seconds / 86400;
        int leftFromDays = seconds % 86400;
        int hours =  leftFromDays / 3600;
        int leftFromHours = leftFromDays % 3600;
        int minutes = leftFromHours / 60;
        seconds = leftFromHours % 60;
        cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";*/

        //zad13
        /*double a1, b1, a2, b2;
        cout << "Point A: "<< endl;
        cin >> a1 >> b1;
        cout << "Point B: "<< endl;
        cin >> a2 >> b2;
        double distance = sqrt((a2 - a1) * (a2 - a1) - (b2 - b1) * (b2 - b1));
		double round_distance = distance * 100.00;
		round_distance += 0.5;
		int distance1 = round_distance;
		round_distance = distance1 / 100.00;
		cout << round_distance;*/

        //zad14
        int n;
        cout << "n = ";
        cin >> n;
        int sum = n * (n + 1) / 2;
        cout << sum;
     return 0;
}


