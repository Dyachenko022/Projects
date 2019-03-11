// указатель на функцию 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int calculate(int a, int b, int(*func)(int, int))
{
	return func(a, b);
}

int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

typedef int(*fint_t)(int, int);
fint_t foper[] =
{
	sum, diff, multiply, divide
};

int main()
{
	char checkOper[] = { '+', '-', '*', '/' };
	int noper = sizeof(checkOper) / sizeof(checkOper[0]);
	
	int a, b, i;
	char oper;

	cout << "enter first number" << endl;
	cin >> a;
	cout << endl;
	cout << "enter second number" << endl;
	cin >> b;
	cout << endl;
	cout << "enter operation" << endl;
	cin >> oper;
	for(i = 0; i < noper; i++)
		if (oper == checkOper[i])
		{
			cout << a << " " << oper << " " << b << " = " << calculate(a, b, foper[i]) << endl;
			break;
		}
	if (i == noper)
		cout << "operation is wrong: " << oper << endl;
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
