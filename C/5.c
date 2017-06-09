#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию  */
int main()
{
	setlocale(0, "russian");
	float Cel, Fahr, lower, upper, step;
	printf("Укажите диапозон в формате t1-t2 и шаг m: ");
	scanf("%f-%f %f", &lower, &upper, &step);
	Cel = lower;
	do
	{
		Fahr = (1.8*Cel) + 32;
		printf("%3.0f\t %3.0f\n", Cel, Fahr);
		Cel = Cel + step;
	} while (Cel <= upper);

	return 0;
}
