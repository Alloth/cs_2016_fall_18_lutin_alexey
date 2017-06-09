#include <stdio.h>
#define swap(t, x, y) {t=y; y=x; x=t;}/*функция swap() изменяет значения своих целочисленных аргументов */

int main()
{
	int a, b, c;
	printf("x = ");
	scanf("%i", &a);
	printf("y = ");
	scanf("%i", &b);
	swap(c, a, b);
	printf("\n%i, %i", a, b);
	return 0;
}
