#include "pch.h"

#include "complex.h"



void complex::summ(int a, int b, int c, int d)

{

	sumRe = a + c;

	sumIm = b + d;

}

void complex::substract(int a, int b, int c, int d)
{
	sumRe = a - c;

	sumIm = b - d;
}

void complex::multiply(int a, int b, int c, int d)
{
	sumRe = a * c;

	sumIm = b * d;
}

void complex::divide(int a, int b, int c, int d)
{
	int decrement = c * c + d * d;
	sumRe = a * c + b * d;
	sumRe /= decrement;
	sumIm = b * c - a * d;
	sumIm /= decrement;
}