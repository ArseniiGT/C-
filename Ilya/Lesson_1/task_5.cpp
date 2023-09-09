#include <iostream>

int main() {
    double a = 5;
    int b = 2;

    double sum = double(a) + double(b);
    short substraction = a - b;
    short multiplication = a * b;
    double division = double(a / b);

    std::cout << "Сумма:     "  << sum << std::endl;
    std::cout << "Вычитание:     "  << substraction << std::endl;
    std::cout << "Умнжение     "  << multiplication << std::endl;
    std::cout << "Деление:     "  << division << std::endl;    
}
