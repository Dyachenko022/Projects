#include "pch.h"
#include "child.h"
#include "complex.h"
#include "tiles.h"
#include "vector.h"
#include <iostream>
#include <string>

using namespace std;




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

		num3();

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

