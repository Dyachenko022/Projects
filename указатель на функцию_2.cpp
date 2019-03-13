
#include "pch.h"
#include <iostream>
using namespace std;

int almost_main_func(int n, int mas[], int mas_2[], int(*func)(int, int))
{
	return func(n, mas_2[]);
}

int reverse_array(int n, int mas[], int mas_2[])
{
	for (int i = 0; i < n; i++)
		mas_2[i] = mas[n - 1 - i];
	return mas_2[];
}

int increase(int n, int mas, int mas_2[])
{
	for(int i = 0; i < n; i++)
		for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--)
		{
			mas_2[j] = mas[j];
		}
}

int decrease(int n, int mas, int mas_2[])
{
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0 && mas[j - 1] < mas[j]; j--)
		{
			mas_2[j] = mas[j];
		}
}

typedef int(*fint_t)(int, int);
fint_t ftype[] =
{
	reverse_array, increase, decrease
};

int main()
{
	
	int n;
	cout << "enter length of an array" << endl;
	cin >> n;
	cout << endl;
	int mas[n];
	cout << "enter elements of an array" << endl;
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	cout << endl;
}

