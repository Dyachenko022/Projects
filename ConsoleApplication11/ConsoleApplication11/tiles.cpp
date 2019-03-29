#include "pch.h"
#include "tiles.h"


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