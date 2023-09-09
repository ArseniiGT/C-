#include <iostream> //input output stream поток ввода и вывода

int main() {
    bool Misha = true;
    bool Sasha = true;
    bool Ivan = false;
    
    bool result = (Misha || (Sasha && Ivan));
    
//    if (Misha || (Sasha && Ivan)) {
//        return 1;
//    } else {
//        return 0;
//    }
    
    std::cout << "Результат: " << result << std::endl;
}
