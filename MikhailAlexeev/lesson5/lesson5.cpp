// lesson5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    /*int numbers, counter = 0;
    do {
        std::cin >> numbers;
        if (numbers % 5 == 0)
            counter++;

    } while (numbers != 0);
    std::cout << counter-1 << endl;*/
    

   /* int num, counterfive = 0;
    do
    {
        cin >> num;
        if (num % 3 == 0 && num % 10 == 5)
            counterfive++;
    } while (num != 0);
    cout << counterfive << endl;*/

    /*int otvet;
    cout << "Сколько будет 2+2?" << endl;
    cin >> otvet;
    if (otvet != 4) {
        do
        {
            cout << "Нет! Попробуй еще раз." << endl;
            cin >> otvet;
        } while (otvet != 4);
    }
    cout << "Правильно!";*/

    /*int otvet2, count = 0;
    cout << "Сколько будет 2+2?" << endl;
    cin >> otvet2;
    if (otvet2 != 4) {
        do
        {
            cout << "Нет! Попробуй еще раз." << endl;
            cin >> otvet2;
            count++;
        } while (otvet2 != 4);
    }
    cout << "Правильно! Столько попыток понадобилось: " << count << endl;*/

    int numberz, numcount = 0;
    cin >> numberz;
    if (numberz > 1) {
        do
        {
            numcount++;
            cout << numcount << endl;
        } while (numcount != numberz);
    }
}

