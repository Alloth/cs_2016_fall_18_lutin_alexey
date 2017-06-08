#include <stdio.h>
#include <stdlib.h>

void copy(char *y,char *x)
{
        FILE *Y,*X;
        Y=fopen(y,"r");
        X=fopen(x,"w");
        char i;
        while((i=fgetc(Y))!=EOF)
        {
                fputc(i,X);
        }
}

int main()
{
        setlocale(0, "russian");
        char a[1000],b[1000];
        printf("Введите путь к расположению файла который копируют(Например C:\\Users\\Desktop\\file.txt)");
        gets(a);
        printf("Введите расположение файла куда копировать (Например C:\\Users\\Desktop\\filecopy.txt)");
        gets(b);
        copy(a,b);
        printf("Копирование файла завершено");
        return 0;
}
