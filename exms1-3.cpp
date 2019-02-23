// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct T2
{
	string mark;
	int volume;
	int year;
	string if_working;
	string windows;
	int volume_taken;
};
struct T1
{
	string mark;
	int volume;
	int year;
	string if_working;
	string windows;
	int volume_taken;
};
void exm1() {
	string my_name;
	cout << "What's your name?" << endl;
	cin >> my_name;
	cout << "Hello, " << my_name << "!";
}
void exm2()
{
	int a, b, c;
	char operation;
	cout << "Введите числа: " << endl;
	cout << "a = ";
	cin >> a;
	cout << endl;
	cout << "b = ";
	cin >> b;
	cout << endl;
	cout << "Введите операцию: ";
	cin >> operation;
	switch (operation)
	{
	case '*':
		c = a * b;
		break;
	case ':':
		c = a / b;
		break;
	case '/':
		c = a / b;
		break;
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	default:
		break;
	}
	cout << "c= " << c;

}


void exm3()
{
	setlocale(LC_ALL, "Russian");
	int car_type;
	int i = 5000;
	int check_engine;
	int check_windows;
	int c;
	int x = 1000;
	T1 scar;
	T2 mcar;
	cout << "Легковой или грузовик? (Введите 0- грузовик или 1- легковая)" << endl;
	cin >> car_type;
	if (car_type == 1)
	{
		cout << "Введите свойства машины" << endl;
		cout << "марка машины: ";
		cin >> scar.mark;
		cout << endl;
		cout << "год выпуска машины: ";
		cin >> scar.year;
		cout << endl;
		cout << "Объем багажника: ";
		cin >> scar.volume;
		cout << endl;
		cout << "Включен ли двигатель? (on/off)";
		cin >> scar.if_working;
		if (scar.if_working == "on")
			check_engine = 1;
		else if (scar.if_working == "off")
			check_engine = 0;
		cout << endl;
		cout << "Открыты ли окна?(open/close)";
		cin >> scar.windows;
		if (scar.windows == "open")
			check_windows = 1;
		else if (scar.windows == "close")
			check_windows = 0;
		cout << endl;
		while (i == 5000)
		{
			cout << "Сколько места занято в багажнике(л.)?" << endl;
			cin >> scar.volume_taken;
			if (scar.volume_taken > scar.volume)
				cout << "В багажнике не может быть занято больше места, чем объем багажника" << endl;
			else
				i = 0;
		}
		i = 5000;
		while (i == 5000)
		{
			cout << "Что вы хотите изменить? (1- марку, 2- год выпуска, 3- объем багажника" << endl << "4 - состояние двигателя, 5 - окна, 6- сколько места занято, 7- ничего)";
			cin >> c;
			switch (c)
			{
			case 1:
			{
				cout << "Изменить марку машины- " << scar.mark << "- на ";
				cin >> scar.mark;
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "Изменить год выпуска машины- " << scar.year << " - на ";
				cin >> scar.year;
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "Изменить объем багажника- " << scar.volume << " - на ";
				cin >> scar.volume;
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "Что вы хотите следать с двигателем? (on/off)";
				cin >> scar.if_working;
				if (scar.if_working == "on" && check_engine == 1)
					cout << "Двигатель уже включен." << endl;
				else if (scar.if_working == "off" && check_engine == 1)
				{
					check_engine = 0;
					cout << "Двигатель выключен" << endl;
				}
				else if (scar.if_working == "off" && check_engine == 0)
					cout << "Двигатель уже выключен" << endl;
				else
				{
					check_engine = 1;
					cout << "Двигатель включен" << endl;
				}
				break;
			}
			case 5:
			{
				cout << "Что вы хотите сделать с окнами?" << endl;
				cin >> scar.windows;
				if (scar.windows == "open" && check_windows == 1)
					cout << "Окна уже открыты." << endl;
				else if (scar.windows == "close" && check_windows == 1)
				{
					check_windows = 0;
					cout << "Окна закрыты" << endl;
				}
				else if (scar.windows == "close" && check_windows == 0)
					cout << "Окна уже закрыты" << endl;
				else
				{
					check_engine = 1;
					cout << "Окна открыты" << endl;
				}
				break;
			}
			case 6:
			{
				while (x == 1000)
				{
					cout << "Изменить объем занятого в багажнике места- " << scar.volume_taken << " - на " << endl;
					cin >> scar.volume_taken;
					if (scar.volume_taken > scar.volume)
						cout << "Объем занятого места в багажнике не может быть больше объема багажника" << endl;
					else
						x = 0;
				}
				x = 1000;
				break;
			}
			case 7:
			{
				i = 0;
				break;
			}
			default:
			{
				i = 0;
				break;
			}
			}
		}
		i = 5000;
	}
	else if (car_type == 0)
	{
		cout << "Введите свойства машины" << endl;
		cout << "марка машины: ";
		cin >> mcar.mark;
		cout << endl;
		cout << "год выпуска машины: ";
		cin >> mcar.year;
		cout << endl;
		cout << "Объем багажника: ";
		cin >> mcar.volume;
		cout << endl;
		cout << "Включен ли двигатель? (on/off)";
		cin >> mcar.if_working;
		if (mcar.if_working == "on")
			check_engine = 1;
		else if (mcar.if_working == "off")
			check_engine = 0;
		cout << endl;
		cout << "Открыты ли окна?(open/close)";
		cin >> mcar.windows;
		if (mcar.windows == "open")
			check_windows = 1;
		else if (mcar.windows == "close")
			check_windows = 0;
		cout << endl;
		while (i == 5000)
		{
			cout << "Сколько места занято в багажнике(л.)? ";
			cin >> mcar.volume_taken;
			if (mcar.volume_taken > mcar.volume)
				cout << "В багажнике не может быть занято больше места, чем объем багажника" << endl;
			else
				i = 0;
		}
		i = 5000;
		while (i == 5000)
		{
			cout << "Что вы хотите изменить? (1- марку, 2- год выпуска, 3- объем багажника" << endl << "4 - состояние двигателя, 5 - окна, 6- сколько места занято, 7- ничего)";
			cin >> c;
			switch (c)
			{
			case 1:
			{
				cout << "Изменить марку машины- " << mcar.mark << "- на ";
				cin >> mcar.mark;
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "Изменить год выпуска машины- " << mcar.year << " - на ";
				cin >> mcar.year;
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "Изменить объем багажника- " << mcar.volume << " - на ";
				cin >> mcar.volume;
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "Что вы хотите следать с двигателем? (on/off)";
				cin >> mcar.if_working;
				if (mcar.if_working == "on" && check_engine == 1)
					cout << "Двигатель уже включен." << endl;
				else if (mcar.if_working == "off" && check_engine == 1)
				{
					check_engine = 0;
					cout << "Двигатель выключен" << endl;
				}
				else if (mcar.if_working == "off" && check_engine == 0)
					cout << "Двигатель уже выключен" << endl;
				else
				{
					check_engine = 1;
					cout << "Двигатель включен" << endl;
				}
				break;
			}
			case 5:
			{
				cout << "Что вы хотите сделать с окнами?" << endl;
				cin >> mcar.windows;
				if (mcar.windows == "open" && check_windows == 1)
					cout << "Окна уже открыты." << endl;
				else if (mcar.windows == "close" && check_windows == 1)
				{
					check_windows = 0;
					cout << "Окна закрыты" << endl;
				}
				else if (mcar.windows == "close" && check_windows == 0)
					cout << "Окна уже закрыты" << endl;
				else
				{
					check_engine = 1;
					cout << "Окна открыты" << endl;
				}
				break;
			}
			case 6:
			{
				while (x == 1000)
				{
					cout << "Изменить объем занятого в багажнике места- " << mcar.volume_taken << " - на " << endl;
					cin >> mcar.volume_taken;
					if (mcar.volume_taken > mcar.volume)
						cout << "Объем занятого места в багажнике не может быть больше объема багажника" << endl;
					else
						x--;
				}
				x = 1000;
				break;
			}
			case 7:
			{
				i = 0;
				break;
			}
			default:
			{
				i = 0;
				break;
			}
			}
		}
		i = 5000;
	}
	else
		cout << "число не верно.";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int exm;
	cout << "какое задание вы хотите запустить?" << endl;
	cin >> exm;
	switch (exm)
	{
	case 1:
		exm1();
		break;
	case 2:
		exm2();
		break;
	case 3:
		exm3();
		break;
	default:
		cout << "Задание не существует";
	}
	cin.get();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
