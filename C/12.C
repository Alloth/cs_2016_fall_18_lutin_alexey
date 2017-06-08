#include <stdio.h>

int main ( void )
{
    setlocale(0, "russian");
    printf("Введие строку данных чисел и после закончите ввод данных (EOF) Ctr+d для Linux и Ctr+z для Windows +Enter\n ");
    int biggest = 0, b;

    while ((b = getchar()) != EOF) 
        {
        if ( b > biggest)
            biggest = b;
    }

printf("%s%c%3d\n","Символ, который имеет наибольший ASCII код: ", biggest, biggest);
    return 0;
}
