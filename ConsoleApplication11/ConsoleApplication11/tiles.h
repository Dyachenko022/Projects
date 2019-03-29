#pragma once
#include <iostream>
#include <string>
#ifndef TILES_H
#define TILES_H
using namespace std;
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

void num2();
#endif