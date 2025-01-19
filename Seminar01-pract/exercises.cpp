#include <iostream>
#include <cmath>

const double PI = 3.14159265;

const int HOUR_IN_SECONDS = 3600;
const int DAY_IN_SECONDS = 3600 * 24;
const int MINUTE_IN_SECONDS = 60;

//task 1
void printText() {
    std::cout << "Oh what" << std::endl;
    std::cout << "a happy day!" << std::endl;
    std::cout << "Oh yes," << std::endl;
    std::cout << "what a happy day!" << std::endl;
}

//task2
void calculateRectangle(double width, double height) {
    double perimeter = 2 * (width + height);
    double area = width * height;
    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;
}

//task3
void convertCurrency() {
    double leva;
    const double levToDollar = 0.55;
    const double levToEuro = 0.51;

    std::cout << "Enter amount in BGN: ";
    std::cin >> leva;

    double dollars = leva * levToDollar;
    double euros = leva * levToEuro;

    std::cout << leva << " BGN is " << dollars << " USD and " << euros << " EUR." << std::endl;
}

//task4
void calculateRectangleWithInput() {
    double side1, side2;

    std::cout << "Please enter the length of the first side: ";
    std::cin >> side1;

    std::cout << "Please enter the length of the second side: ";
    std::cin >> side2;
    calculateRectangle(side1, side2);
}

//task5
void compareNumbers() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << (num1 < num2 ? 1 : 0) << std::endl;
}

//task6
void calculateDivision() {
    int dividend, divisor;

    std::cout << "Dividend: ";
    std::cin >> dividend;

    std::cout << "Divisor: ";
    std::cin >> divisor;

    if (divisor == 0) {
        std::cout << "Division by zero is not allowed." << std::endl;
        return;
    }

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    std::cout << "The quotient of the division is: " << quotient << std::endl;
    std::cout << "The remainder of the division is: " << remainder << std::endl;
}

//task7
void generateReminder() {
    int apples, pears, bananas;

    std::cout << "Apples: ";
    std::cin >> apples;

    std::cout << "Pears: ";
    std::cin >> pears;

    std::cout << "Bananas: ";
    std::cin >> bananas;

    std::cout << "Pesho, don’t forget to buy " << apples << " apples, "
        << pears << " pears and " << bananas << " bananas!" << std::endl;
}

//task8
void calculateCircle() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * std::pow(radius, 2);

    std::cout << "The circumference of the circle is: " << circumference << std::endl;
    std::cout << "The area of the circle is: " << area << std::endl;
}

//task9
void solveQuadraticEquation() {
    double a, b, c;

    std::cout << "Enter coefficient a: ";
    std::cin >> a;

    std::cout << "Enter coefficient b: ";
    std::cin >> b;

    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    if (a == 0) {
        return;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);

        std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else {
        std::cout << "No real roots." << std::endl;
    }
}

//task10
void swapWithVariable() {
    int a, b, temp;
    std::cin >> a;
    std::cin >> b;

    temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

void swapWithoutVariable() {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

//task11
void findMax() {
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    int maxVal = (num1 > num2) ? num1 : num2;

    std::cout << maxVal << std::endl;
}

//task12
void convertSeconds()
{
    int totalSeconds = 0;
    std::cin >> totalSeconds;

    int days = totalSeconds / DAY_IN_SECONDS;
    totalSeconds %= DAY_IN_SECONDS;

    int hours = totalSeconds / HOUR_IN_SECONDS;
    totalSeconds %= HOUR_IN_SECONDS;

    int minutes = totalSeconds / MINUTE_IN_SECONDS;
    totalSeconds %= MINUTE_IN_SECONDS;

    std::cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << 
        minutes << ", Seconds: " << totalSeconds;
}

//task13
void calculateDistance() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    distance = std::round(distance * 100) / 100.0;
    std::cout << distance;
}
//task14
void sumFrom1ToN() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;
}