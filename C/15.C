#include <stdio.h>

int main()
{
	setlocale(0, "russian");

	int count = 0, i = 0, index = 0;

	char a1[100], a2[100];
	for (int n = 0; n < 100; n++)
	{
		a1[n] = '\0';
	}
	for (int n = 0; n < 100; n++)
	{
		a2[n] = '\0';
	}
	printf("Введите строчку букв в английской раскладке: ");
	gets(a2);

	while (i < 100)
	{
		if (a2[i + 1] == a2[i] && a2[i+1] != '\0')
		{
			for (int j = i ; j < 100; j++)
			{
				if (a2[j] != a2[j + 1])
				{
					break;
				}
				else count++;
			}
			i = i + count;

		}
		else
		{
			a1[index] = a2[i];
			index++;
		}
		i++;
		count = 0;
	}

	printf("Строка без повторяющихся символов: %s", a1);
	return 0;
}
