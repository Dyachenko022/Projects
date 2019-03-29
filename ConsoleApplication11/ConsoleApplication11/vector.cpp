#include "pch.h"
#include "vector.h"

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