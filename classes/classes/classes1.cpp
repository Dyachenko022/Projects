// classes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//##################################################################################################################################################################################################################
//##################################################################################################################################################################################################################
//                                                                                                   classes


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

class child
{
private:
	string name;
	string surname;
	int age;
public:
	child()
	{
		name = "none";
		surname = "none";
		age = 0;
	}
	~child()
	{
		cout << endl;
		cout << "class has been destructed" << endl;
	}
	void enterChild()
	{
		cout << "Enter child's name: ";
		cin >> name;
		cout << endl;
		cout << "Enter child's surname: ";
		cin >> surname;
		cout << endl;
		cout << "Enter child's age: ";
		cin >> age;
		cout << endl;
	}
	void printChild()
	{
		cout << name << " " << surname << " is " << age << " years old";
	}

}t;

class tiles
{
public:
	string brand;
	string size_h;
	string size_w;
	int price;
	tiles()
	{
		brand = "none";
		size_h = "none";
		size_w = "none";
		price = 0;
	}
	~tiles()
	{
		cout << endl;
		cout << "class has been destructed" << endl;
	}
	void getData()
	{
		cout << "Size " << size_h << " h/" << size_w << " w " << "of the " << brand << " brand will cost " << price;
	}
};

class vector
{
public:
	int vector1x;
	int vector1y;
	int vector2x;
	int vector2y;
	char ifyes;
	vector()
	{
		vector1x = 0;
		vector1y = 0;
		vector2x = 0;
		vector2y = 0;
	}
	~vector()
	{
		cout << endl;
		cout << "class has been destructed" << endl;
	}
	void enterVector()
	{
		cout << "enter first vector. x coordinate: ";
		cin >> vector1x;
		cout << endl;
		cout << "y coordinate: ";
		cin >> vector1y;
		cout << "do you want to enter second vector? (y/n)" << endl;
		cin >> ifyes;
		if (ifyes == 'y')
		{
			cout << "enter second vector. x coordinate: ";
			cin >> vector2x;
			cout << endl;
			cout << "y coordinate: ";
			cin >> vector2y;
		}
	}
	void coefVector1()
	{
		double coef = sqrt(vector1x*vector1x + vector1y * vector1y);
		cout << "coefficient of 1st vector is " << coef << endl;
	}
	void coefVector2()
	{
		double coef = sqrt(vector2x*vector2x + vector2y * vector2y);
		cout << "coefficient of 1st vector is " << coef << endl;
	}
	void vectorSum()
	{
		int sumx = vector1x + vector2x;
		int sumy = vector1y + vector2y;
		cout << "sumamrized vector: (" << sumx << ", " << sumy << ")" << endl;
	}
	void vectorSub()
	{
		int subx = vector1x - vector2x;
		int suby = vector1y - vector2y;
		cout << "substracted vector: (" << subx << ", " << suby << ")" << endl;
	}
};

//##################################################################################################################################################################################################################
//##################################################################################################################################################################################################################
//                                                                                                    functions


void num1()
{
	t.enterChild();
	t.printChild();
}

void num2()
{
	setlocale(LC_ALL, "rus");
	tiles t;
	cout << "Enter brand name: ";
	cin >> t.brand;
	cout << endl;
	cout << "Enter height: ";
	cin >> t.size_h;
	cout << endl;
	cout << "Enter the waist size: ";
	cin >> t.size_w;
	cout << endl;
	cout << "Enter the price: ";
	cin >> t.price;
	t.getData();
}

void num3()
{
	complex t;
	t.enterComplex();
	t.printArg();
	t.coef();
}

void num4()
{
	string operation;
	vector t;
	t.enterVector();
	cout << "what do you want to do? (vector coef, sum or sub)" << endl;
	cin >> operation;
	if (operation == "coef")
	{
		int vectornum;
		cout << "which vector do you want?" << endl;
		cin >> vectornum;
		switch (vectornum)
		{
		case 1:
		{
			t.coefVector1();
			break;
		}
		case 2:
		{
			t.coefVector2();
			break;
		}
		default:
		{
			cout << "vector entered wrong" << endl;
			break;
		}
		}
	}
	else if (operation == "sum")
	{
		t.vectorSum();
	}
	else if (operation == "sub")
	{
		t.vectorSub();
	}
	else
		cout << "operation entered wrong" << endl;

}

//##################################################################################################################################################################################################################
//##################################################################################################################################################################################################################
//                                                                                                      main


int main()
{
	int number;
	cout << "which number do you want to check?" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
	{
		num1();
		break;
	}
	case 2:
		num2();
		break;
	case 3:
	{
		num3;
		break;
	}
	case 4:
	{
		num4();
		break;
	}
	default:
	{
		cout << "You entered wrong number " << endl;
		break;
	}
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
