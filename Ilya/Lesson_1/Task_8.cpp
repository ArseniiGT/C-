//
//  Task_8.cpp
//  Less_1
//
//  Created by MacBook Air on 09.09.2023.
//

#include <stdio.h>
#include <iostream> //input output stream поток ввода и вывода

int main() {
    double initialPrice =0;
    double discountPercentage = 0;

    std::cout << "Цена товара: ";
    std::cin >> initialPrice;

    std::cout << "Скидка процент: ";
    std::cin >> discountPercentage;

    double discountAmount = (initialPrice * discountPercentage) / 100.0;
    double discountedPrice = initialPrice - discountAmount;

    std::cout << "Цена товара со скидкой: " << discountedPrice << std::endl;
}

