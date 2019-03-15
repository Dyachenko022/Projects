// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
		complex t;
		cout << "Введите значение комплексных чисел" << endl;
		cout << "Первое число" << endl << "Реальное: ";
		cin >> complexx.re1;
		cout << endl;
		cout << "Мнимое: ";
		cin >> complexx.im1;
		cout << endl;
		cout << "Второе число" << endl << "Реальное: ";
		cin >> complexx.re2;
		cout << endl;
		cout << "Мнимое: ";
		cin >> complexx.im2;
		cout << endl;
		t.init(complexx.re1, complexx.im1, complexx.re2, complexx.im2, complexx.sumRe, complexx.sumIm );
		if (complexx.sumIm > 0)
		{
			cout << "Сумма равна " << complexx.sumRe << "+" << complexx.sumIm << "i" << endl;
			fout << "Сумма равна " << complexx.sumRe << "+" << complexx.sumIm << "i";
		}
		else
		{
			cout << "Сумма равна " << complexx.sumRe << complexx.sumIm << "i" << endl;
			fout << "Сумма равна " << complexx.sumRe << complexx.sumIm << "i" << endl;
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
