#include <iostream>

#include <cstring>

using namespace std;

int myStrlen(const char* str) {
	if (str == nullptr) { // 0X0000000
		return -1;
	}

	int i = 0;

	while (str[i]) {	// \0
		i++;
	}

	return i;
}

int myStrcmp(const char* str1, const char* str2) {
	if (str1 == nullptr || str2 == nullptr) {
		return -2; // error value
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
	else if ((str1[i1] - str2[i2]) < 0){
		return -1;
	}

	return 0;
}

int myStrcmp1(const char* str1, const char* str2) {
	if (str1 == nullptr || str2 == nullptr) {
		return -2; // error value
	}

	while (*str1 && *str2) {
		if (*str1 == *str2) {
			str1++;
			str2++;
			continue;
		}

		if (*str1 < *str2) {
			return -1;
		}

		return 1;
	}

	if ((*str1 - *str2) > 0) {
		return 1;
	}
	else if ((*str1 - *str2) < 0) {
		return -1;
	}

	return 0;
}

void myStrcpy(const char* source, char* destination, int size1, int size2) {
	if (!source || !destination) {
		return;
	}

	/*int len1 = myStrlen(source);
	int len2 = myStrlen(destination);

	if (len1 < len2) {
		return;
	}*/

	while (*source) {
		*destination = *source;
		source++;
		destination++;
	}

	*destination = '\0';
}

void myStrcat(char* source, const char* to_add) {
	if (source == nullptr || to_add == nullptr) {
		return;
	}

	while (*source) {

		source++;
	}

	while (*to_add) {
		*source = *to_add;

		to_add++;
		source++;
	}

	*source = '\0';
}

bool isAlpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

char* find_smallest_word(const char* str) {
    if (str == nullptr) {
        return nullptr;
    }

    const char* smallest = nullptr;
    const char* current_word = nullptr;
    char buffer[10000];
    char* word = buffer;

    while (*str) {
        while (*str && !isAlpha(*str)) {
            ++str;
        }

        current_word = str;

        word = buffer;

        while (*str && isAlpha(*str)) {
            *word = toLower(*str);
            ++str;
            ++word;
        }
        *word = '\0';

        if (current_word != str) {
            if (!smallest || myStrcmp(buffer, smallest) < 0) {
                smallest = current_word;
            }
        }
    }

    char result[10000];
	
    char* res_ptr = result;
    
	while (*smallest && isAlpha(*smallest)) {
        *res_ptr = *smallest;
        ++smallest;
        ++res_ptr;
    }
    *res_ptr = '\0';

    return result;
}

int main() {
    const char* input = "Me? Why always me?";
    char* minWord = find_smallest_word(input);

    cout << minWord << endl;

    return 0;
}

