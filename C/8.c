int main()
{
    setlocale(0, "russian");
    float x,x1,x2 = 0.0;
    float a,b,c = 0.0;
    printf("Введите a:\n");
    scanf("%f",&a);
    printf("Введите b:\n");
    scanf("%f",&b);
    printf("Введите c:\n");
    scanf("%f",&c);
    float d = b*b-4*a*c;
    float q = sqrtf (d);
    if (d>=0){
        if (d == 0){
            x = (-b+q)/(2*a);
            printf("x=%.3f\n", x);
        }
        else{
            x1 = (-b+q)/(2*a);
            x2 = (-b-q)/(2*a);
            printf("x1=%.3f, x2=%.3f\n", x1, x2);
        }
    }
    else{
        printf("Вещественных корней нет\n");
    }
    return 0;
}
