#include <stdio.h>

int main(void) {
    setlocale(0, "russian");
	float z1;
	float z2;
	float a;
	float b;
	float f1;
	float f2;
	printf("Введите числа как указано в формате: a+bi,z1+z2i\n ");
	scanf("%f+%fi,%f+%fi", &z1, &z2, &a, &b);
	f1 = (z1*z1*a+z1*a*a+z1*b*b+a*z2*z2)/((z1+a)*(z1+a)+(z2+b)*(z2+b));
	f2 = (z1*z1*b+a*a*z2+z2*z2*b+z2*b*b)/((z1+a)*(z1+a)+(z2+b)*(z2+b));
	printf("%.5f+%.5fi", f1, f2);/*%f – вывод значения со знаком в форме [ – ]DDDD.mmmm, где DDDD – один или более десятичных знаков.*/
	return 0;
}
