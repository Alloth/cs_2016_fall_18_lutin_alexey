#include <stdio.h>
#include <math.h>

float F(float x) 
{
	float func;
	func = x*x*x;
	return func;
}

int main()
{
    setlocale(0, "russian");
	float h, x, a, b;
	float Res = 0;
	float R1 = 0;
	float R2 = 0;

	char s;
	printf("Введите точность получаемых значений (максимум-9): ");
	scanf("%c", &s);
	char string[] = "%.zf\n";
	string[2] = s;
	printf("Нижняя граница: ");
	scanf("%f", &a);
	printf("Верхняя граница: ");
	scanf("%f", &b);
	printf("Шаг: ");
	scanf("%f", &h);
	x = a;
	R1 = (1 / (2 * h))*((-3) * F(x) + 4 * (F(x + h)) - (F(x + 2 * h)));
	R2 = (1 / (2 * h))*(-F(x) + F(x + 2 * h));
	printf(string, R1);
	printf(string, R2);
	while (x + 2 * h <= b) {
		Res = (1 / (2 * h))*(F(x) - 4 * (F(x + h)) + 3 * (F(x + 2 * h)));
		x = x + h;
		printf(string, Res);
	}
	return 0;
}
