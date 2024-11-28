/*#include <iostream>
using namespace std;

int main() {


    return 0;
}*/




/* Task 1
#include <iostream>
using namespace std;

int main() {

	int year;
	cout << "Year: ";
	cin >> year >> endl;
	if (year % 400 == 0)
		cout << "Leap year";
	else if (year % 4 == 0 && year % 100 != 0)
		cout << "Leap year";
	else
		cout << "Not leap year";

	return 0;
}*/




/* Task 2
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "The character is from the Latin alphabet ind it is a vowel." << endl;
        }
        else {
            cout << "The character is from the Latin alphabet ind it is a consonant." << endl;
        }
    }
    else {
        cout << "The character is not a letter of the Latin alphabet." << endl;
    }

    return 0;
}*/





/* Task 3
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cin >> num1 >> num2;
    (num1 > num2) ? cout << "The frst is bigger" : cout << "The second is bigger";

    return 0;
}*/



/*Task 4
#include <iostream>
using namespace std;

int main() {
    int result;
    cout << "Result: ";
    cin >> result;

    cout << "Grade: ";
    if (result >= 90) {
        cout << "6+" << endl;
    }
    else if (result >= 80) {
        cout << "6" << endl;
    }
    else if (result >= 70) {
        cout << "5" << endl;
    }
    else if (result >= 60) {
        cout << "4" << endl;
    }
    else if (result >= 40) {
        cout << "3" << endl;
    }
    else {
        cout << "2" << endl;
    }

    return 0;
}*/



/*Task 5
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    }
    else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}*/


/* Task 6
#include <iostream>
using namespace std;

int main() {
    int light;
    cout << "Enter the light color (1 - red, 2 - yellow, 3- green): ";
    cin >> light;

    switch (light) {
    case 1:
        cout << "Red: Stop!" << endl;
        break;
    case 2:
        int isBlinking;
        cout << "Is the yellow light blinking? (1 - Yes, 2 - No): ";
        cin >> isBlinking;

        if (isBlinking == 1) {
            cout << "Yellow is blinking: Prepare to stop. Next is Red!" << endl;
        }
        else if (isBlinking == 2) {
            cout << "Yellow is steady: Get ready to go. Next is Green!" << endl;
        }
        else {
            cout << "Invalid input!" << endl;
        }
        break;
    case 3:
        cout << "Green: Go!" << endl;
        break;
    default:
        cout << "Invalid input!" << endl;
        break;
    }

    return 0;
}*/



/* Task 7
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        char upper = ch - 'a' + 'A';
        cout << upper;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lower = ch - 'A' + 'a';
        cout << lower;
    }
    else {
        cout << "Invalid character!";
    }

    return 0;
}*/


/*Task 8
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Arabic numeral: ";
    cin >> num;

    cout << "Roman numerals: ";

    switch (num) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    case 10: cout << "X"; break;
    default: cout << "Invalid input!"; break;
    }

    return 0;
}*/



/*Task 9
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int num1, num2, num3;

    if (a <= b && a <= c) {
        num1 = a;
        if (b <= c) {
            num2 = b;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = b;
        }
    }
    else if (b <= a && b <= c) {
        num1 = b;
        if (a <= c) {
            num2 = a;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = a;
        }
    }
    else {
        num1 = c;
        if (a <= b) {
            num2 = a;
            num3 = b;
        }
        else {
            num2 = b;
            num3 = a;
        }
    }

    cout << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}*/



/* Task 10
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "First number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Invalid operation." << endl;
        }
        break;
    default:
        cout << "Invalid operator." << endl;
        break;
    }

    return 0;
}*/







/*Task 11
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int num1, num2, num3;

    if (a <= b && a <= c) {
        num1 = a;
        if (b <= c) {
            num2 = b;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = b;
        }
    }
    else if (b <= a && b <= c) {
        num1 = b;
        if (a <= c) {
            num2 = a;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = a;
        }
    }
    else {
        num1 = c;
        if (a <= b) {
            num2 = a;
            num3 = b;
        }
        else {
            num2 = b;
            num3 = a;
        }
    }

    int result = num3 * 100 + num2 * 10 + num1;
    cout << result << endl;

    return 0;
}*/



#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Day and month: ";
    cin >> day >> month;

    int daysInMonth;

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        daysInMonth = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30;
        break;
    case 2:
        daysInMonth = 28;
        break;
    default:
        cout << "Invalid number!" << endl;
    }


    if (day < daysInMonth) {
        day++;
    }
    else if (day == daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
        }
    }
    else {
        cout << "Invalid day!" << endl;
    }

    cout << "Next date: " << day << " " << month;

    return 0;
}


/* Task 13
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "The largest number is: " << max;

    return 0;
}*/

