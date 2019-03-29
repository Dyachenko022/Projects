#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
struct complex

{

public:

	int re1, im1, re2, im2;

	int sumRe = 0;

	int sumIm = 0;

	void summ(int a, int b, int c, int d);
	void substract(int a, int b, int c, int d);
	void multiply(int a, int b, int c, int d);
	void divide(int a, int b, int c, int d);



};

#endif