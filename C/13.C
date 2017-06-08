 #include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int a, state;

    state = OUT;

    while((a = getchar()) != EOF){
        if(a == ' ' || a == '\n' || a == '\t'){
            if(state == IN)
                putchar('\n');
            state = OUT;
        }
        else{
            if(state == OUT)
                state = IN;
            putchar('#');
        }
    }
}
