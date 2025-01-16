// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//1 

 void sum( int a,int  b)
 {
    int sum = a + b;
    cout << sum;
 }

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);

} 

//2

void isEven(int num) 
{
    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    }
    else {
        cout << num << " is odd" << endl;
    }
}

int main() 
{
    int a;
    cin >> a;
    isEven(a);
}


//3

void isPositive(int num)
{
    if (num > 0) {
        cout << num << " is positive";
    }
}

void isNegative(int num)
{
    if (num < 0) {
        cout << num << " is negative";
    }
}

int main()
{
    int a;
    cin >> a;
    isPositive(a);
    isNegative(a);
}


//4.1

void absolute(int num) 
{
    if (num >= 0) {
        cout << num;
    }
    else 
    {
        num = -num;
        cout << num;
    }
}

int main()
{
    int a;
    cin >> a;
    absolute(a);
}


//4.2 

void fabsolute(double num)
{
    

    if (num >= 0.000001) {
        cout << num;
    }

    else
    {
        num = -num;
        cout << num;
    }
}

int main()
{
    double a;
    cin >> a;
    fabsolute(a);
}


// 5

void print(char S, int N)
{
    for (int i = 1; i <= N; i++) {
        cout << S << endl;
    }
}

int main()
{
    char a;
    int b;
    cin >> a >> b;
    print(a, b);
}


//6  

void isCapitalLetter(char S)
{
    if (S >= 'A' && S <= 'Z') {
        cout << "It's a capital letter" << endl;
    }
    if (S >= 'a' && S <= 'z')
    {
        cout << "Not a capital letter" << endl;
    }
}


void checkSymbol(char S)
{
    if ((S >= 'a' && S <= 'z') || (S >= 'A' && S <= 'Z')) {
        cout << "It's a letter" << endl; ;
    }
    else { cout << "Not a letter" << endl; }
    
}

int main()
{
    int a;
    cin >> a;
    checkSymbol(a);
    isCapitalLetter(a);
}


//7
char to_lower(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + ('a' - 'A');
    return ch;
}

char to_upper(char ch) {
    if (ch >= 'a' && ch <= 'z') return ch - ('a' - 'A');
    return ch;
}

//8
int getLength(int n) {
    int length = 0;
    do {
        length++;
        n /= 10;
    } while (n != 0);
    return length;
}
//9
int getKthDigit(int n, int k) {
    int length = getLength(n);
    if (k < 1 || k > length) return -1; 

    for (int i = 0; i < length - k; i++) {
        n /= 10;
    }
    return n % 10;
}


//10

bool isPerfectSquare(int num)
{
    if (num >= 0) {

    int x = sqrt(num);
    return ( x * x == num);
    }
    
    else if (num < 0) { return false; }
}

//12
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}

int lcm_three(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

//13
int count_digits(int num) {
    int count = 0;
    do {
        count++;
        num /= 10;
    } while (num > 0);
    return count;
}


int concat(int first, int second) {
    int digits = count_digits(second); 
    int multiplier = 1;

    for (int i = 0; i < digits; ++i) {
        multiplier *= 10; 
    }

    return first * multiplier + second;
}



//14
bool isInInterval(int num, int from, int to) {
    return num >= from && num <= to;
}

int askUser(int from, int to) {
    int num;
    do {
        cout << "Enter a number in range [" << from << ", " << to << "]: ";
        cin >> num;
    } while (!isInInterval(num, from, to));
    return num;
}

//14

int pow(int num, unsigned N) {
    int result = 1;
    for (unsigned i = 0; i < N; i++) {
        result *= num;
    }
    return result;
}

//15
int calculate(int a, int b, char action = '+') {
    switch (action) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return (b != 0) ? a / b : 0; 
    case '%': return (b != 0) ? a % b : 0;
    default: return a + b; 
    }
}

//16
int gcdOfFour(int a, int b, int c, int d) {
    int gcdAB = gcd(a, b);      
    int gcdABC = gcd(gcdAB, c); 
    return gcd(gcdABC, d);      
}

//17
int nearestPowerOfTwo(int n) {
    if (n <= 1) return 1;
    int lower = 1, higher = 2;
    while (higher < n) {
        lower = higher;
        higher *= 2;
    }
    return (n - lower <= higher - n) ? lower : higher;
}

//18
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimesUpTo(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;
}

bool canBeSumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) return true;
    }
    return false;
}

//19
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleDigitSum(int n) {
    while (n >= 10) {
        n = sumOfDigits(n);
    }
    return n;
}

//20
void factorize(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) cout << ".";
        }
    }
    cout << endl;
}

//21
int sortDigits(int n) {
    int result = 0;

    for (int digit = 0; digit <= 9; digit++) { 
        int temp = n;
        while (temp > 0) {
            if (temp % 10 == digit) {
                result = result * 10 + digit;
            }
            temp /= 10;
        }
    }

    return result;
}

int main()
{
    int a;
    cin >> a;
    if (isPerfectSquare(a))
    {
        cout << a << " -  yes (" << sqrt(a) << "^2)" << endl;
    }
    else
    {
        cout << a << " -  no (?^2)" << endl;
    }

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
