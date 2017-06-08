#include <stdio.h>

int main()
{
   setlocale(0, "russian");
   int n1,n2;
   char z;
   int i=0;
   printf("Введите операцию:\n");
   scanf("%i%c%i", &n1,&z,&n2);
   int r=1;
   switch(z){
        case '+':
            printf("%i\n", n1+n2);
            break;
        case '-':
            printf("%i\n", n1-n2);
            break;
        case '*':
            printf("%i\n", n1*n2);
            break;
        case '/':
            printf("%.3f\n", (float)n1/n2);
            break;
        case '%':
            printf("%i\n", n1%n2);
            break;
        case '^':
            for(i=0;i<n2;++i)
                r*=n1;
            printf("%i\n", r);
            break;
   }
    return 0;
}
