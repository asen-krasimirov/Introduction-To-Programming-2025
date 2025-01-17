
#include <iostream>

using namespace std;

int numberLength(int n)
{
    int result = 0;
    while (n != 0)
    {
        n /= 10;
        result++;
    }
    return result;
}
char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c;
}
char toLower(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c + ('A' - 'a');
    }
    return c;
}


//zad 1
int countLetter(const char* str, char ch) 
{
    int count = 0;
    while (*str != '\0') 
    {  
        if (*str == ch) 
        {
            count++;
        }
        str++;  
    }
    return count;
}

//zad 2
void lowerLetters(const char* str1, char* str2)
{
    int i = 0;
    int j = 0;

    while (str1[i] != '\0') 
    {
        if (str1[i] >= 'a' && str1[i] <= 'z') 
        {
            str2[j++] = str1[i];
        }
        i++;
    }
    str2[j] = '\0';
}

//zad 3
void substring(const char* str, int beg, int end, char* result) 
{
    int strLen = 0;

    while (str[strLen] != '\0') 
    {
        strLen++;
    }
    if (beg > strLen) 
    {
        result[0] = '\0';
        return;
    }
    if (end > strLen) 
    {
        end = strLen;
    }

    int j = 0;
    for (int i = beg; i < end; i++) 
    {
        result[j++] = str[i];
    }

    result[j] = '\0';
}

//zad 4
int myStrcmp(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr)  {
        return -2; 
    }

    int i1 = 0;
    int i2 = 0;

    while (str1[i1] && str2[i2]) {
        if (str1[i1] == str2[i2]) {
            i1++;
            i2++;
            continue;
        }

        if (str1[i1] > str2[i2]) {
            return 1;
        }
        else if (str1[i1] < str2[i2]) {
            return -1;
        }
    }

    if ((str1[i1] - str2[i2]) > 0) {
        return 1;
    }
    else if ((str1[i1] - str2[i2]) < 0) {
        return -1;
    }

    return 0;
}

//zad 5
void replaceChar(char* str, char x, char a, char b) 
{
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == x) 
        {
            count++; 
            if (count % 2 == 1)
            {
                str[i] = a; 
            }
            else 
            {
                str[i] = b; 
            }
        }
    }
}

//zad 6
void replaceOddEvenOccurrences(char* str, char x, char a, char b)
{
    int count = 0;  
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == x) 
        {
            count++;  
            if (count % 2 == 0) 
            {
                str[i] = a;  
            }
            else 
            {
                str[i] = b;  
            }
        }
    }
}

//zad 7
void longestPrefix(const char* str1, const char* str2, const char* str3, char* result) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str3[i] != '\0' 
        && str1[i] == str2[i] && str2[i] == str3[i]) 
    {
        result[i] = str1[i]; 
        i++;
    }
    result[i] = '\0'; 
}

//zad 8
void countDigits(const char* digits, char* result) 
{
    int count[10] = { 0 };
    for (int i = 0; digits[i] != '\0'; i++) 
    {
        if (digits[i] >= '0' && digits[i] <= '9') 
        {
            count[digits[i] - '0']++;  
        }
    }
    int index = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > 0) 
        {
            result[index++] = '0' + i;  
            result[index++] = 'x';      
            result[index++] = '0' + count[i];  
            result[index++] = ' ';       
        }
    }
    result[index - 1] = '\0';  
}

//zad 9
void uniqueChars(const char* str1, const char* str2, char* result)
{
    int index = 0;
    bool found;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        found = false;

        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            result[index++] = str1[i];
        }
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        found = false;
        for (int j = 0; str1[j] != '\0'; j++)
        {
            if (str2[i] == str1[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            result[index++] = str2[i];
        }
    }
    result[index] = '\0';
}

//zad 10
void removeDuplicates(char* input) {
    bool array[26] = { false }; 
    int uniqueIndex = 0;

    for (int readIndex = 0; input[readIndex] != '\0'; readIndex++) 
    {
        char currentChar = input[readIndex];
        if (!array[currentChar - 'a'])
        { 
            input[uniqueIndex++] = currentChar;
            array[currentChar - 'a'] = true;
        }
    }

    input[uniqueIndex] = '\0'; // Добавяме терминатора за низ
}

//zad 11
int findFirstDoubleLetter(const char text[], const char word[])
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        int j = 0;
        while (word[j] != '\0' && text[i + j] != '\0' && text[i + j] == word[j])
        {
            j++;
        }
        if (word[j] == '\0')
        {
            return i;
        }
    }
    return -1;
}

//zad 12
int countStringDoubleInString(const char text[], const char word[])
{
    int count = 0; 
    int textLen = 0, wordLength = 0;

    while (text[textLen] != '\0') textLen++;
    while (word[wordLength] != '\0') wordLength++;

    for (int i = 0; i <= textLen - wordLength; i++)
    { 
        int j = 0;
        while (j < wordLength && text[i + j] == word[j]) 
        {
            j++;
        }
        if (j == wordLength) 
        { 
            count++;
            i += wordLength - 1; 
        }
    }

    return count;
}

//zad 13
bool ignoreLower(char a, char b) 
{
    return toLower(a) == toLower(b);
}
void replaceWithAsterisks(char text[], const char substring[]) 
{
    int textLen = 0, subLen = 0;

    while (text[textLen] != '\0') textLen++;
    while (substring[subLen] != '\0') subLen++;

    for (int i = 0; i <= textLen - subLen; i++) 
    {
        int j = 0;

        while (j < subLen && ignoreLower(text[i + j], substring[j]))
        {
            j++;
        }

        if (j == subLen) 
        { 
            for (int k = 0; k < subLen; k++) 
            {
                text[i + k] = '*'; 
            }
            i += subLen - 1; 
        }
    }
}


int main()
{

}
