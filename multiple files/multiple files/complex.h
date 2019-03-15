#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
struct complex
{
public:
	int re1, im1, re2, im2;
	int sumRe;
	int sumIm;

	void init(complex t);

};
#endif