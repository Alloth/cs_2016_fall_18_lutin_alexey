#include <stdio.h>

int main()
{
	int day = 30;
	int month = 1;
	int d = day;
	printf("%i.0%i\n", day, month);/*Обозначению формата предшествует знак процента (%) %i – вывод значения как целого со знаком */
	day = month;
	month = d;
	printf("0%i.%i", day, month);
	getchar();
	return 0;
}

