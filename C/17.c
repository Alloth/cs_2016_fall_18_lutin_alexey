#include <stdlib.h>
#include <stdio.h>

double razn(double * x, int n){
	int i=0;
	double max=x[1];
	double min=x[0];
	for(i=0;i<n;++i){
		if (x[i]<min)
			min=x[i];
		if (x[i]>max)
			max=x[i];
	}
	double b=max-min;
	return b;
}

int main(){
    setlocale(0, "russian");
	int i;
	int n;
	printf("Введите количество элементов:\n");
	scanf("%i", &n);
	double * x =(double *)malloc(n*8);
	for (i=0;i<100;++i){
		x[i]=0;
	}
	printf("Введите элементы через Enter\n");
	for (i=0;i<n;++i)
		scanf("%lf", &x[i]);
	printf("%lf\n", razn(x,n));
	return 0;
}
