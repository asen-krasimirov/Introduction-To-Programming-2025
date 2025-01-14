#include <iostream>
using namespace std;

//BITWISE_OPERATIONS

//task 1
int turnRightBit(int number)
{
	if (!number)
	{
		return number;
	}
	int mask = 1;
	while (!(number & mask))
	{
		mask <<= 1;
	}
	return number ^ mask;
}

//task 2
int getLastKBits(int n, int k)
{
	int result = 0;
	for (size_t i = 0; i < k; i++)
	{
		result += n & (1 << i);
	}
	return result;
}

//task 3
bool isBinaryPartOf(int n, int k)
{
	if (!k)
	{
		return true;
	}
	while (n > 0)
	{
		if ((n & k) == k)
		{
			return true;
		}
		n >>= 1;
	}
	return false;
}

//task 4
int findSingleNumber(const int* arr, size_t size)
{
	int result = 0;
	for (size_t i = 0; i < size; i++)
	{
		result ^= arr[i];
	}
	return result;
}

//task 5
int powerOfTwo(int n)
{
	if (n >= 32)
	{
		return -1;
	}
	return 1 << n;
}

void printArrByMask(const int* arr, size_t size, int mask)
{
	for (size_t i = 0; i < size; i++)
	{
		if (mask & 1)
		{
			cout << arr[i] << " ";
		}
		mask >>= 1;
	}
}

void printAllSubsets(const int* arr, size_t size)
{
	int count = powerOfTwo(size);
	if (count == -1)
	{
		cout << "Size is too big";
		return;
	}
	for (size_t i = 0; i < count; i++)
	{
		cout << "{ ";
		printArrByMask(arr, size, i);
		cout << "}  ";
	}
}

//task 6
int getLastNBitsFromPosition(int x, int m, int n)
{
	int result = 0;
	x >>= m - 1;
	return getLastKBits(x, n);
}

//task 7
const int SECRET_KEY = 51926;

int encodeNumber(int input)
{
	return SECRET_KEY ^ input;
}

int decodeNumber(int code, int key)
{
	return code ^ key;
}

//task 8
int setBit(int number, int position, bool bit)
{
	int mask = 1;
	mask <<= position;
	if ((bool)(number & mask) != bit)
	{
		number ^= mask;
	}
	return number;
}

//task 9
int flipBit(int number, int position)
{
	int mask = 1;
	mask <<= position;
	number ^= mask;
	return number;
}


//NUMERICAL_SYSTEMS

//warm-up task
int countOfOnesInBinary(int number)
{
	int count = 0;
	while (number > 0)
	{
		count += number % 2;
		number /= 2;
	}
	return count;
}

//task 1
const int BASE_THREE = 3;
int baseThreeToDecimal(int number)
{
	int mult = 1;
	int result = 0;
	while (number > 0)
	{
		result += (number % 10) * mult;
		number /= 10;
		mult *= BASE_THREE;
	}
	return result;
}

const int BASE_EIGHT = 8;
int baseThreeToBaseEight(int number)
{
	int numberDec = baseThreeToDecimal(number);
	int result = 0;
	int mult = 1;
	while (numberDec > 0)
	{
		result += (numberDec % BASE_EIGHT) * mult;
		mult *= 10;
		numberDec /= BASE_EIGHT;
	}
	return result;
}

//task 2
//const int BASE_EIGHT = 8;
int baseEightToDecimal(int number)
{
	int mult = 1;
	int result = 0;
	while (number > 0)
	{
		result += (number % 10) * mult;
		number /= 10;
		mult *= BASE_EIGHT;
	}
	return result;
}

//const int BASE_THREE = 3;
int baseEightToBaseThree(int number)
{
	int numberDec = baseEightToDecimal(number);
	int result = 0;
	int mult = 1;
	while (numberDec > 0)
	{
		result += (numberDec % BASE_THREE) * mult;
		mult *= 10;
		numberDec /= BASE_THREE;
	}
	return result;
}

//task 3

//First let's define smth like idk... 6 helper functions..
int getNumber(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		return symbol - 'a' + 10;
	}
	if (symbol >= 'A' && symbol <= 'Z')
	{
		return symbol - 'A' + 10;
	}
	return symbol - '0';
}

char getChar(int number)
{
	if (number < 10)
	{
		return '0' + number;
	}
	return 'A' + number - 10;
}

int strLen(const char* str)
{
	int length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return length;
}

const int BASE_TWELVE = 12;
int baseTwelveToDecimal(const char* number)
{
	int mult = 1;
	int result = 0;
	size_t length = strLen(number);
	for (int i = length - 1; i >= 0; i--)
	{
		result += (getNumber(number[i])) * mult;
		mult *= BASE_TWELVE;
	}
	return result;
}

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverse(char str[])
{
	size_t length = strLen(str);
	for (size_t i = 0; i < length / 2; i++)
	{
		swap(str[i], str[length - i - 1]);
	}
}

const int BASE_THIRTEEN = 13;
void baseTwelveToBaseThirteen(const char* number, char result[])
{
	int numberDec = baseTwelveToDecimal(number);
	result[0] = 'a';
	size_t index = 0;
	while (numberDec > 0)
	{
		result[index++]  = getChar(numberDec % BASE_THIRTEEN);
		numberDec /= BASE_THIRTEEN;
	}
	result[index] = '\0';
	reverse(result);
}

//task 4
const int BITS = 32;
void printBinaryRepresentation(size_t number)
{
	char result[BITS + 1];
	result[BITS] = '\0';
	for (int i = BITS - 1; i >= 0; i--)
	{
		result[i] = getChar(number % 2);
		number /= 2;
	}
	cout << result;
}