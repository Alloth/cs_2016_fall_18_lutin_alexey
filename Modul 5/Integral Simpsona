#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000000

float mainFunction(float x)
{
	float function;
	function = x*x;
	return function;
}

int main()
{
	unsigned char signs;
	scanf("%c", &signs);
	char string[] = "%.xf";

	string[2] = signs;

	double h, a, b, x;
	double S = 0;
	const float pi = 3.14159;
	a = 1;
	b = 10;
	h = (b - a) / N;
	x = a + h;
	while (x < b)
	{
		S = S + 4 * mainFunction(x);
		x = x + h;
		if (x >= b)
			break;
		S = S + 2 * mainFunction(x);
		x = x + h;
	}

	S = ((h/3)*(mainFunction(a) + mainFunction(b) + S)); 
	printf(string,S);
	return 0;
}
