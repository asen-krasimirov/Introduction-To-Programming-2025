#include <iostream>
using namespace std;

//task 1
void my_swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

//task 2
char toUpper(char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        return letter - 'a' + 'A';
    }
    return letter;
}

char toLower(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        return letter - 'A' + 'a';
    }
    return letter;
}

//task 3
void sort3(int& min, int& mid, int& max)
{
    if (min > max)
    {
        my_swap(min, max);
    }
    if (min > mid)
    {
        my_swap(min, mid);
    }
    if (mid > max)
    {
        my_swap(mid, max);
    }
}

//task 4
const int MIN_YEAR = 15;
const int MAX_YEAR = 100;
const int MIN_FN = 10000;
const int MAX_FN = 99999;

void validate(int& years, int& fn)
{
    if (years < MIN_YEAR)
    {
        years = MIN_YEAR;
    }
    else if (years > MAX_YEAR)
    {
        years = MAX_YEAR;
    }

    if (fn < MIN_FN)
    {
        fn = MIN_YEAR;
    }
    else if (fn > MAX_FN)
    {
        fn = MAX_YEAR;
    }
}

//task 5
int gcd(int a, int b)
{
    while (a > 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}
void sukrateishanInThisSitueishan(int& a, int& b)
{
    int currentGCD = gcd(a, b);
    a /= currentGCD;
    b /= currentGCD;
}

//task 6
int numLength(int num)
{
    int length = 1;
    while (num > 9)
    {
        num /= 10;
        length++;
    }
    return length;
}

int getKthDigit(int n, int k)
{
    if (n == 0 || k == 0)
        return 0;
    size_t temp = 1;
    while (temp <= n)
    {
        temp *= 10;
    }
    for (size_t i = 1; i < k; i++)
    {
        temp /= 10;
    }
    n %= temp;
    n /= temp / 10;
    return n;
}

int setKthDigit(int n, int k, int digit)
{
    if (n == 0)
        return digit;
    if (k == 0)
        return n;
    size_t temp = 1;
    size_t result = n;
    while (temp <= n)
    {
        temp *= 10;
    }
    for (size_t i = 1; i < k; i++)
    {
        temp /= 10;
    }
    n %= temp;
    n /= temp / 10;
    n *= temp /10;
    result -= n;
    result += digit * temp / 10;
    return result;
}

void changeKthDigit(int& n, int& m, int k)
{
    int nLength = numLength(n);
    int mLength = numLength(m);
    if (nLength < k || mLength < k)
        return;

    int nDigit = getKthDigit(n, k);
    int mDigit = getKthDigit(m, k);

    n = setKthDigit(n, k, mDigit);
    m = setKthDigit(m, k, nDigit);
}

//task 7
void separateNumber(int number)
{
    int length = numLength(number);
    int firstHalf = number;

    int secondHalfMult = 1;
    int secondHalf = 0;
    for (size_t i = 0; i < length / 2; i++)
    {
        secondHalf += (firstHalf % 10) * secondHalfMult;
        secondHalfMult *= 10;
        firstHalf /= 10;
    }
    //cout << firstHalf << " " << secondHalf;
    //to do: return a pair or a vector when they allow me to
}

//task 8
void lastHour(int size, const int* hours, const int* mins, const int* durations)
{
    int maxHour = 0;
    int maxMinute = 0;
    int currentHour = 0;
    int currentMin = 0;

    for (size_t i = 0; i < size; i++)
    {
        currentHour = hours[i] + (mins[i] + durations[i]) / 60;
        currentMin = (mins[i] + durations[i]) % 60;
        if (currentHour > maxHour || (currentHour == maxHour && currentMin > maxMinute))
        {
            maxHour = currentHour;
            maxMinute = currentMin;
        }
    }

    //cout << maxHour << " " << maxMinute;
    //to do: return a pair or a vector when they allow me to
}

//test for you to believe it actually works
//int main()
//{
//    int hours[] = { 19, 20, 18, 21 };
//    int mins[] = { 15, 20, 25, 10 };
//    int durations[] = { 120, 25, 230, 45 };
//
//    lastHour(4, hours, mins, durations);
//}

//task 9
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    int to = sqrt(n);
    for (size_t i = 2; i <= to; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countOfPrimeDivisors(int n)
{
    int count = 0;
    for (size_t i = 2; i <= n; i++)
    {
        if (isPrime(i) && n % i == 0)
        {
            count++;
        }
    }
    return count;
}

void findMinAndMaxDivided(int& a, int& b, int k)
{
    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    for (int i = a; i <= b; i++)
    {
        if (countOfPrimeDivisors(i) == k)
        {
            if (maxNum < i)
            {
                maxNum = i;
            }
            if (minNum > i)
            {
                minNum = i;
            }
        }
    }
    if (minNum != INT_MAX)
    {
        a = minNum;
    }
    if (maxNum != INT_MIN)
    {
        b = maxNum;
    }
}

//task 10
void transferNums(int& a, int& b, int k)
{
    int mult = 1;
    while (mult <= b)
    {
        mult *= 10;
    }
    for (size_t i = 0; i < k; i++)
    {
        b += mult * (a % 10);
        mult *= 10;
        a /= 10;
    }
}
//task 11
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return (year % 400 == 0);
        }
        return true;
    }
    return false;
}

bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    return day <= daysInMonth[month - 1];
}

void nextDay(int& day, int& month, int& year) {
    if (!isValidDate(day, month, year)) {
        //to do: throw exception pls
        return;
    }

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    day++;

    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }
}