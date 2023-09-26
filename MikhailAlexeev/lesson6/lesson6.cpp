// lesson6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a[20] = { 0,1,4,9,16,25,37,45,52,69,72,81,35,98,48,35,508,6,108,89 };
    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }

    int b[] = { 9,8,7,6,5,4,3,2,1,0 };
    cout << b[5] << endl;

    int c[] = { 9,8,7,6,5,4,3,2,1,0 };
    cout << c[5] << endl;

    int n[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    cout << sum << endl;

    int m[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sumchet = 0;
    for (int j = 0; j < 10; j++)
    {
        if (m[j] % 2 == 0)
        {
            sumchet += m[j];
        }
    }
    cout << sumchet << endl;

    int l[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sumnechet = 0;
    for (int h = 0; h < 10; h++)
    {
        if (l[h] % 2 == 1)
        {
            sumnechet += l[h];
        }
    }
    cout << sumnechet << endl;

    int k[] = { 9,8,7,6,5,4,3,2,1,0 };
    
    for (int s = 0; s < 10; s++)
    {
        if (k[s] % 2 == 1)
        {
            cout << k[s] << " ";
        }
    }
    

}


