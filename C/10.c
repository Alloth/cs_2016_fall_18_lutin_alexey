#include <stdio.h>
#include <locale.h>
#include <math.h>

int rightrot(int x, int n)
{
return (x - ((x >> n)<<n) << (sizeof(int)*8-n)) + (x >> n);
}

int main()
{
    setlocale(LC_ALL,"Rus");
    unsigned int b,h,f;
    printf("Введите число\n");
    scanf("%u",&b);
    printf("Введите разряд\n");
    scanf("%u",&h);
    printf("Результат %u\n",rightrot(b,h));
    return 0;
}
