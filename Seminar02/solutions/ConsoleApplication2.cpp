// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // 1 
   // int year;
  //  cin >> year;
   // if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
   //     cout << year << " is a leap year";
   // }
   // else {
   //     cout << year << " is not a leap year.\n";
   // 
   // }
    

   // 2
   /* char a;
    cin >> a;
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) 
    {
        cout << "Character is from the latin alphabet!" << endl;

        if (a == 'A', a == 'U', a == 'O', a == 'I', a == 'E', a == 'Y' || a == 'a', a == 'u', a == 'o', a == 'i', a == 'e', a == 'y')
            cout << "It is a vowel" << endl;
             

        else { cout << "It is a consonant" << endl; }
 
    }
    else { cout << "Invalid" << endl; }
    */

   // 3
   //int a, b;
   //cin >> a >> b;
   //a < b ? (cout << b) : (cout << a);

   //4 
  // int grade;
  // cin >> grade;
   //if (grade < 40) 
   //{ 
   //    cout << "Grade: 2"; 
   //}
   // if (grade >= 40 && grade < 60) 
  //  {
  //     cout << "Grade: 3";
  //  }
  // if (grade >= 60 && grade < 70) 
  // {
 //      cout << "Grade: 4";
 //  }
 //  if (grade >= 70 && grade < 80) 
  // {
  //         cout << "Grade: 5";
  // }
  // if (grade >= 80 && grade < 90)
  // {
  //         cout << "Grade: 6";
  // }
  // if (grade >= 90 && grade <= 100) 
  // {
  //         cout << "Grade: 6+";
  // 
  // }

   //5
   // int a, b, c;
   // cin >> a >> b >> c;
   // if (a + b > c && a + c > b && b + c > a) {
  //      cout << "This triangle exists";
   // }
  //  else cout << "This triangle does not exist"; {
  //  } 

    //6
   /* int trafficLightState;
    cin >> trafficLightState;
    switch (trafficLightState) {
    case 1: cout << "You can pass! "; 
        break;
    case 0: cout << "Warning!";
    case -1: cout << "You cannot pass!"; 
        break;
    case -1: cout << "You cannot pass"; 
        break;
    }*/

    ////7
    /*char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << (char)(ch - 'a' + 'A') << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << (char)(ch - 'A' + 'a') << endl;
    }
    else {
        cout << "Invalid character" << endl;
    }

    return 0;*/
    //8
    /*int num;
    cout << "Enter a single-digit number: ";
    cin >> num;

    cout << "Roman numeral: ";
    switch (num) {
    case 1: cout << "I"; 
        break;
    case 2: cout << "II";
        break;
    case 3: cout << "III";
        break;
    case 4: cout << "IV";
        break;
    case 5: cout << "V"; 
        break;
    case 6: cout << "VI";
        break;
    case 7: cout << "VII";
        break;
    case 8: cout << "VIII";
        break;
    case 9: cout << "IX"; 
        break;
    default: cout << "Invalid input"; 
        break;
    }
    cout << endl;*/
    //9

    /*int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    cout << a << " " << b << " " << c << endl;
    return 0;*/

    //10
    /*double a, b;
    char op;
    cout << "Enter an operation (e.g., 5 + 3): ";
    cin >> a >> op >> b;

    switch (op) {
    case '+': cout << a + b << endl; 
        break;
    case '-': cout << a - b << endl; 
        break;
    case '*': cout << a * b << endl;
        break;
    case '/':
        if (b == 0) cout << "Division by zero!" << endl;
        else cout << a / b << endl;
        break;
    default: cout << "Invalid operation!" << endl; 
        break;
    }*/
    //11
    /*int x, y, z;
    cin >> x >> y >> z;

    if (x < y) swap(x, y);
    if (y < z) swap(y, z);
    if (x < y) swap(x, y);

    cout << x * 100 + y * 10 + z << endl;*/
    //12
    //int day, month;
    //cin >> day >> month;

    //int days_in_month;
    //if (month == 2) days_in_month = 28;
    //else if (month == 4 || month == 6 || month == 9 || month == 11) days_in_month = 30;
    //else days_in_month = 31;

    //day++;
    //if (day > days_in_month) {
    //    day = 1;
    //    month++;
    //}
    //if (month > 12) month = 1;

    //cout << "Next date: " << day << " " << month << endl;
    ////13
//
//    int a, b, c;
//   
//    cin >> a >> b >> c;
//
//    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//    cout << max << endl;
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
