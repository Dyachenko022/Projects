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
		do
		{
			cout << "Какую операцию вы хотите выполнить?(+, -, *, /) " << endl;
			cin >> operation;
			switch (operation)
			{
			case '+':
			{
				t.summ(t.re1, t.im1, t.re2, t.im2);



				if (t.sumIm > 0)

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

				break;
			}
			case '*':
			{

				break;
			}
			case '/':
			{

				break;
			}
			default:
			{
				cout << "Операция была введена неправильно" << endl;
			}
			fout.close();

			}
		} while (operation != '+' || operation != '-' || operation != '*' || operation != '/');
	}
		else

			cout << "файл не может быть открыт" << endl;
	
	cout << "Нажмите enter для выхода из программы" << endl;

	cin.get();

}
