#include <iostream>

void matrix() {
    std::cout << "- Ты веришь в судьбу, Нео?\n";
    std::cout << "- Нет.\n";
    std::cout << "- Почему?\n";
    std::cout << "- Неприятно думать, что тобой манипулируют.\n\n";
};

void rectangle(int a, int b) {
    const int square = a * b;
    const int perimetr = (a + b) * 2;

    std::cout << "периметр " << perimetr << "\n";
    std::cout << "площадь " << square << "\n";
}

void baggage() {
    int lag1 = 15;
    int lag2 = 15;
    int bag = 10;
    float stroller = 5.5;

    std::cout<< "сумма багажа " << lag1 + lag2 + bag + stroller << "\n";
}

int main(){
    setlocale(LC_ALL, "rus");
    matrix();
    rectangle(5, 8);
    baggage();
    return 0;
}
