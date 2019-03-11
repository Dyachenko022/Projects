

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
