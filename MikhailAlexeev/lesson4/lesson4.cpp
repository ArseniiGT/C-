// lesson4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	/*int finger;
	cout << "Напишите номер от 1-5: " << endl;
	cin >> finger;
	switch (finger)
	{
	case 1:
		cout << "Большой палец" << endl;
		break;
	case 2:
		cout << "Указательный палец" << endl;
		break;
	case 3:
		cout << "Средний палец" << endl;
		break;
	case 4:
		cout << "Безымянный палец" << endl;
		break;
	case 5:
		cout << "Мизинец" << endl;
		break;
	default:
		cout << "Ошибка" << endl;
	}

	int otzenka;
	cout << "Напишите оценку: " << endl;
	cin >> otzenka;
	switch (otzenka) 
	{
	case 2:
		cout << "Неудовлетворительно" << endl;
		break;
	case 3:
		cout << "Удовлетворительно" << endl;
		break;
	case 4:
		cout << "Хорошо" << endl;
		break;
	case 5:
		cout << "Отлично" << endl;
		break;
	default:
		cout << "Ошибка" << endl;
	}*/

	//int num1, num2, oper;
	//cout << "Введите 2 числа: ";
	//cin >> num1;
	//cin >> num2;
	//cout << "Введите число для операции: 1 - сумма; 2 - разность; 3 - умножение; 4 - деление; ";
	//cin >> oper;
	//switch (oper)
	//{
	//case 1:
	//	cout << num1 + num2 << endl;
	//	break;
	//case 2:
	//	cout << num1 - num2 << endl;
	//	break;
	//case 3:
	//	cout << num1 * num2 << endl;
	//	break;
	//case 4:
	//	if (num2 != 0)
	//		cout << num1 / num2 << endl;
	//	else
	//		cout << "Дурачок не дели на ноль!" << endl;
	//	break;
	//default:
	//	cout << "Ошибка" << endl;
	//}
	//
	int course, spec;
	cout << "На какой специальности вы учитесь: \n 1 - Программирование \n 2 - База данных \n 3 - Веб дизайн " << endl;
	cin >> spec;
	cout << "На каком вы курсе из 3: ";
	cin >> course;
	switch (spec)
	{
	case 1:
		switch (course)
		{
		case 1:
			cout << "10:00" << endl;
			break;
		case 2:
			cout << "11:00" << endl;
			break;
		case 3:
			cout << "12:00" << endl;
			break;
		default:
			cout << "Неправильные данные";
		}
		break;
	case 2:
		switch (course)
		{
		case 1:
			cout << "13:00" << endl;
			break;
		case 2:
			cout << "14:00" << endl;
			break;
		case 3:
			cout << "15:00" << endl;
			break;
		default:
			cout << "Неправильные данные";
		}
		break;
	case 3:
		switch (course)
		{
		case 1:
			cout << "16:00" << endl;
			break;
		case 2:
			cout << "17:00" << endl;
			break;
		case 3:
			cout << "18:00" << endl;
			break;
		default:
			cout << "Неправильные данные" << endl;
		}
		break;
	default:
		cout << "Неправильные данные" << endl;
	}

	int year;
	cout << "В каком году появились высокоуровненвые языки программирования? \n 1.1949 \n 2. 1965 \n 3. 1987 " << endl;
	cin >> year;
	switch (year)
	{
	case 1:
		cout << "Верно" << endl;
		break;
	case 2:
		cout << "Нет, раньше" << endl;
			break;
	case 3:
		cout << "Нет, намного раньше" << endl;
	default:
		break;
	}

	int name;
	cout << "Кто является автором языка С++? \n 1.Джеймс Гослинг \n 2. Бьёрн Страуструп \n 3. Деннис Ритчи " << endl;
	cin >> name;
	switch (name)
	{
	case 1:
		cout << "Не верно" << endl;
		break;
	case 2:
		cout << "Верно" << endl;
		break;
	case 3:
		cout << "Ошебка" << endl;
	default:
		cout << "Error" << endl;
		break;
	}

	int smena, lesson;
	cout << "Какая смена 1 или 2?" << endl;
	cin >> smena;
	cout << "Какой урок (1-6)?" << endl;
	switch(smena)
	{
	case 1:
		switch (lesson)
		{
		case 1:
			cout << "1 урок - 8:00" << endl;
			break;
		case 2:
			cout << "2 урок - 8:50" << endl;
			break;
		case 3:
			cout << "3 урок - 9:50" << endl;
			break;
		case 4:
			cout << "4 урок - 10:50" << endl;
			break;
		case 5:
			cout << "5 урок - 11:50" << endl;
			break;
		case 6:
			cout << "6 урок - 12:40" << endl;
			break;
		}
	case 2:
		switch (lesson)
		{
		case 1:
			cout << "1 урок - 14:00" << endl;
			break;
		case 2:
			cout << "2 урок - 15:50" << endl;
			break;
		case 3:
			cout << "3 урок - 16:50" << endl;
			break;
		case 4:
			cout << "4 урок - 17:50" << endl;
			break;
		case 5:
			cout << "5 урок - 18:50" << endl;
			break;
		case 6:
			cout << "6 урок - 19:40" << endl;
			break;
		}
	default:
		cout << "Error" << endl;
		break;
	}

	int transport,km;
	cout << "Выберите тип транспорта: \n 1 - автомобиль \n 2 - поезд \n 3 - самолет" << endl;
	cin >> transport;
	cout << "На какое расстояние?" << endl;
	cin >> km;
	switch (transport)
	{
	case 1:
		cout << "Получилось на автомобиле: " << km * 100 << endl;
		break;
	case 2:
		cout << "Получилось на поезде: " << km * 150 << endl;
		break;
	case 3:
		cout << "Получилось на самолёте: " << km * 200 << endl;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
}