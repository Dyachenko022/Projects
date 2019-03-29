#pragma once
#include <string>
#include <iostream>
#ifndef CHILD_H
#define CHILD_H
using namespace std;


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



};

void num1();
#endif