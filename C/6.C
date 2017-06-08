#include <stdio.h>
int main()
{
    setlocale(0, "russian");
    double  N, f1;
    long long int f2;
    printf("Введите число:");
    scanf("%lf",&N);
    f1 = 1;
    if (N >= 0)
    {
        for (f2 = 2; f2 <= N; f2++)
        {
            f1 *= f2;
        }
        printf("%.f! = %.f\n", N, f1);
    }
    else
    printf("Error:Число не может быть меньше нуля\n");
return 0;
}
