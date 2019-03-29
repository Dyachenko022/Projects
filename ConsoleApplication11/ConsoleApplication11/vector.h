#pragma once
#include <iostream>
#include <string>

#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

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

void num4();
#endif
