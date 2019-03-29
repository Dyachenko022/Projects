#pragma once
#include <iostream>
#include <string>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;
class complex

{

	int re;

	int im;

public:

	complex()

	{

		re = 0;

		im = 0;

	}

	~complex()

	{

		cout << endl;

		cout << "class has been destructed" << endl;

	}

	void enterComplex()

	{

		cout << "enter complex number:" << endl;

		cout << "real: ";

		cin >> re;

		cout << endl;

		cout << "imaginary: ";

		cin >> im;

		cout << endl;

	}

	void printArg()

	{

		cout << "real part is: " << re << endl;

		cout << "imaginary part is: " << im << "i" << endl;

	}

	void coef()

	{

		int b = sqrt(re*re + im * im);

		cout << "coefficient is: " << b << endl;

	}

};

void num3();
#endif