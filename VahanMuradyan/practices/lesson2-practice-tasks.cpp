#include <iostream>
using namespace std;


void question() {
    string s;

    cout << "уроки сделаны?";

    cin >> s;

    if (s == "y") {
        cout << "Молодец";
    }
}

void positivNumber() {
    int n;
    cin >> n;

    if (n < 0) {
        string message = "Число %i - отрицательное.";
        printf(message.c_str(), n);
    }
}

void oddNumber() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        string message = "Число %i - чётное.";
        printf(message.c_str(), n);
    }
}

void checkNumberEndingOn5() {
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    if (number % 10 == 5) {
        cout << "Число " << number << " - заканчивается на 5." << endl;
    }
    else {
        cout << "Число " << number << " - не заканчивается на 5." << endl;
    }
}

void checkPositiveEvenNumber() {
    int number;
    cout << "Введите натуральное число: ";
    cin >> number;

    if (number > 0 && number % 2 == 0) {
        string message = "Число %i - подходит.";
        printf(message.c_str(), number);
    }else {
        string message = "Число %i - не подходит.";
        printf(message.c_str(), number);
    } 
}

void winPoint() {
    int number;
    cout << "Введите очки: ";
    cin >> number;

    if (number >= 10 && number % 2 == 0) {
        cout << "Ты победил";
    }
     
}

void checkTriangleExistence() {
    int side1, side2, side3;
    cout << "Введите длины трех сторон треугольника: " << endl;
    cout << "Сторона 1: ";
    cin >> side1;
    cout << "Сторона 2: ";
    cin >> side2;
    cout << "Сторона 3: ";
    cin >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "Треугольник существует." << endl;
    }
    else {
        cout << "Треугольник не существует." << endl;
    }
}

void checkFirstNumberDivisibleBySecond() {
    int firstNumber, secondNumber;
    cout << "Введите два целых числа: " << endl;
    cout << "Первое число: ";
    cin >> firstNumber;
    cout << "Второе число: ";
    cin >> secondNumber;

    if (firstNumber % secondNumber == 0) {
        string message = "Число %i - делится на %i.";
        printf(message.c_str(), firstNumber, secondNumber);
    }
}

void checkSumOfDigitsTwoDigitNumber() {
    int number;
    cout << "Введите целое трехзначное число: ";
    cin >> number;

    int digit1 = number / 100;           
    int digit2 = (number % 100) / 10;    
    int digit3 = number % 10;           

    int sumOfDigits = digit1 + digit2 + digit3;

    if (sumOfDigits >= 10 && sumOfDigits <= 99) {
        cout << "Сумма цифр " << sumOfDigits << endl;
    }
    else {
        cout << "Сумма цифр не является двузначным числом" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    //question();
    //positivNumber();
    //oddNumber();
    //checkNumberEndingOn5();
    //checkPositiveEvenNumber();
    //winPoint();
    //checkTriangleExistence();
    //checkFirstNumberDivisibleBySecond();
    checkSumOfDigitsTwoDigitNumber();
    return 0;
}