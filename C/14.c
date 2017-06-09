#include <stdio.h>
#include <string.h> /*библиотека определяет несколько функций для обработки строк и массивов*/

char reverse( char *a)
    {
    int k=0,i;
    char b[1000];
    for(i=strlen(a)-1;i>=0;--i)
    {
        b[k]=a[i];
    k++;
    }
    for(i=0;a[i]!='\0';++i)
    {
        a[i]=b[i];
    }
    return *a;
}

int main()
{
    setlocale(0, "russian");
    int i;
    char d[1000];
	printf("Введите буквы/слово в строку:\n");
    gets(d);
    reverse(d);
    for( i=0;d[i]!='\0';++i)
    {
        printf("%c",d[i]);
    }
	printf("\n");
    return 0;
}
