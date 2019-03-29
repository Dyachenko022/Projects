// multiple files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"

#include <iostream>

#include <fstream>

#include "complex.h"

using namespace std;



int main()

{

	setlocale(LC_ALL, "rus");

	ofstream fout("complex.txt", ios_base::out | ios_base::trunc);

	if (fout.is_open())

	{
		int i = 0;
		char operation;
		complex t;

		cout << "Введите значение комплексных чисел" << endl;

		cout << "Первое число" << endl << "Реальное: ";

		cin >> t.re1;
		cout << endl;
		cout << "Мнимое: ";
		cin >> t.im1;

		cout << endl;

		cout << "Второе число" << endl << "Реальное: ";

		cin >> t.re2;

		cout << endl;

		cout << "Мнимое: ";

		cin >> t.im2;

		cout << endl;
		while(i == 0)
		{
			cout << "Какую операцию вы хотите выполнить?(+, -, *, /) " << endl;
			cin >> operation;
			switch (operation)
			{
			case '+':
			{
				i++;
				t.summ(t.re1, t.im1, t.re2, t.im2);



				if (t.sumIm >= 0)

				{

					cout << "Сумма равна " << t.sumRe << "+" << t.sumIm << "i" << endl;

					fout << "Сумма равна " << t.sumRe << "+" << t.sumIm << "i";

				}

				else

				{

					cout << "Сумма равна " << t.sumRe << t.sumIm << "i" << endl;

					fout << "Сумма равна " << t.sumRe << t.sumIm << "i" << endl;

				}
				break;
			}
			case '-':
			{
				i++;
				t.substract(t.re1, t.im1, t.re2, t.im2);



				if (t.sumIm >= 0)

				{

					cout << "Разность равна " << t.sumRe << "+" << t.sumIm << "i" << endl;

					fout << "Разность равна " << t.sumRe << "+" << t.sumIm << "i";

				}

				else

				{

					cout << "Разность равна " << t.sumRe << t.sumIm << "i" << endl;

					fout << "Разность равна " << t.sumRe << t.sumIm << "i" << endl;

				}
				break;
			}
			case '*':
			{
				i++;
				t.multiply(t.re1, t.im1, t.re2, t.im2);

				if (t.sumIm >= 0)

				{

					cout << "Произведение равно " << t.sumRe << "+" << t.sumIm << "i" << endl;

					fout << "Произведение равно " << t.sumRe << "+" << t.sumIm << "i";

				}

				else

				{

					cout << "Произведение равно " << t.sumRe << t.sumIm << "i" << endl;

					fout << "Произведение равно " << t.sumRe << t.sumIm << "i" << endl;

				}

				break;
			}
			case '/':
			{
				i++;
				t.divide(t.re1, t.im1, t.re2, t.im2);

				if (t.sumIm >= 0)

				{

					cout << "Результат деления: " << t.sumRe << "+" << t.sumIm << "i" << endl;

					fout << "Результат деления: " << t.sumRe << "+" << t.sumIm << "i";

				}

				else

				{

					cout << "Результат деления: " << t.sumRe << t.sumIm << "i" << endl;

					fout << "Результат деления: " << t.sumRe << t.sumIm << "i" << endl;

				}

				break;
			}
			default:
			{
				cout << "Операция была введена неправильно" << endl;
			}


			}
		}
		fout.close();
	}
	else

		cout << "файл не может быть открыт" << endl;

	cout << "Нажмите enter для выхода из программы" << endl;

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
